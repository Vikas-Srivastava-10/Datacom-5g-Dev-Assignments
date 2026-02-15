#include <iostream>
#include <set>
#include <cstdint>
using namespace std;

class RLC_UM_RX_DUP {
    set<uint16_t> deliveredSN;

public:
    bool onPdu(uint16_t sn) {
        if (deliveredSN.count(sn)) return false;
        deliveredSN.insert(sn);
        return true;
    }
};

int main() {
    cout << "=== Test Case 2.4: UM Duplicate Detection ===\n";

    RLC_UM_RX_DUP rx;

    cout << "First SN=20  -> " << (rx.onPdu(20) ? "DELIVERED" : "DROPPED") << endl;
    cout << "Second SN=20 -> " << (rx.onPdu(20) ? "DELIVERED" : "DROPPED") << endl;

    return 0;
}
