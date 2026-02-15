#include <iostream>
#include <vector>
#include <cstdint>
#include <functional>
#include <cassert>

// ---------------- UM Header & PDU ----------------
struct UmHeader {
    uint16_t sn;
    bool fi_start; // segment starts SDU
    bool fi_end;   // segment ends SDU
};

struct UmPdu {
    UmHeader h;
    std::vector<uint8_t> payload;
};

// ---------------- RLC UM RX ----------------
class RlcUmRx {
public:
    using DeliverFn = std::function<void(const std::vector<uint8_t>&)>;

    explicit RlcUmRx(DeliverFn deliver)
        : deliver_(deliver) {}

    void onPdu(const UmPdu& pdu) {

        // Start of a new SDU → reset buffer
        if (pdu.h.fi_start) {
            reassembly_.clear();
        }

        // Copy ALL bytes correctly
        for (uint8_t b : pdu.payload) {
            reassembly_.push_back(b);
        }

        // End of SDU → deliver
        if (pdu.h.fi_end) {
            deliver_(reassembly_);
            reassembly_.clear();
        }
    }

private:
    DeliverFn deliver_;
    std::vector<uint8_t> reassembly_;
};

// ---------------- MAIN (TEST CASE) ----------------
int main() {
    std::vector<uint8_t> delivered_sdu;

    // Delivery callback
    RlcUmRx rx([&](const std::vector<uint8_t>& sdu) {
        delivered_sdu = sdu;
        std::cout << "SDU delivered, length = " << sdu.size() << std::endl;
    });

    // Original SDU: 25 bytes [0..24]
    std::vector<uint8_t> sdu(25);
    for (int i = 0; i < 25; ++i)
        sdu[i] = static_cast<uint8_t>(i);

    // Segment into PDUs (10,10,5)
    UmPdu pdu1{{0, true,  false}, {sdu.begin(), sdu.begin() + 10}};
    UmPdu pdu2{{0, false, false}, {sdu.begin() + 10, sdu.begin() + 20}};
    UmPdu pdu3{{0, false, true }, {sdu.begin() + 20, sdu.end()}};

    // Send PDUs to receiver
    rx.onPdu(pdu1);
    rx.onPdu(pdu2);
    rx.onPdu(pdu3);

    // ---------------- VALIDATION ----------------
    assert(delivered_sdu.size() == 25);

    for (int i = 0; i < 25; ++i) {
        assert(delivered_sdu[i] == i);
    }

    std::cout << "✔ Test PASSED: 1 SDU, 25 bytes, content correct" << std::endl;
    return 0;
}
