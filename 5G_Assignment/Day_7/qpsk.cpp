#include <iostream>
#include <vector>
#include <complex>
#include <cmath>
#include <iomanip>
#include <limits>
#include <cstdlib>
#include <ctime>

using namespace std;

class QPSKModulator {
private:
    const double NORM_FACTOR = 1.0 / sqrt(2.0);

    struct ConstellationPoint {
        string bits;
        complex<double> symbol;
        double phase;
    };

    vector<ConstellationPoint> constellation;

    void initializeConstellation() {
        constellation = {
            {"00", complex<double>( NORM_FACTOR,  NORM_FACTOR),  M_PI/4},
            {"01", complex<double>(-NORM_FACTOR,  NORM_FACTOR),  3*M_PI/4},
            {"11", complex<double>(-NORM_FACTOR, -NORM_FACTOR),  5*M_PI/4},
            {"10", complex<double>( NORM_FACTOR, -NORM_FACTOR),  7*M_PI/4}
        };
    }

public:
    QPSKModulator() {
        initializeConstellation();
        srand(time(nullptr));   // Seed random generator
    }

    vector<complex<double>> modulate(const string& bits) {
        vector<complex<double>> symbols;
        string paddedBits = bits;

        if (paddedBits.length() % 2 != 0) {
            paddedBits += "0";
            cout << "Warning: Odd number of bits, padded with 0\n";
        }

        for (size_t i = 0; i < paddedBits.length(); i += 2) {
            string dibit = paddedBits.substr(i, 2);
            for (const auto& point : constellation) {
                if (point.bits == dibit) {
                    symbols.push_back(point.symbol);
                    break;
                }
            }
        }
        return symbols;
    }

    string demodulate(const vector<complex<double>>& symbols) {
        string bits;

        for (const auto& rxSymbol : symbols) {
            double minDistance = numeric_limits<double>::max();
            string decidedBits;

            for (const auto& point : constellation) {
                double distance = abs(rxSymbol - point.symbol);
                if (distance < minDistance) {
                    minDistance = distance;
                    decidedBits = point.bits;
                }
            }
            bits += decidedBits;
        }
        return bits;
    }

    double theoreticalBER(double EbN0_dB) {
        double EbN0 = pow(10.0, EbN0_dB / 10.0);
        return 0.5 * erfc(sqrt(EbN0));
    }

    void displayConstellation() {
        cout << "\n========================================\n";
        cout << "  QPSK Constellation Diagram\n";
        cout << "========================================\n";

        cout << fixed << setprecision(4);
        for (const auto& point : constellation) {
            cout << "Bits: " << point.bits
                 << " → (" << point.symbol.real()
                 << ", " << point.symbol.imag() << "j)"
                 << " | Phase: " << point.phase * 180.0 / M_PI << "°\n";
        }
        cout << "========================================\n\n";
    }

    void displaySymbols(const string& bits,
                        const vector<complex<double>>& symbols) {

        cout << "\nInput Bits: " << bits << "\n\n";
        cout << "Modulated Symbols:\n";

        cout << fixed << setprecision(4);
        for (size_t i = 0; i < symbols.size(); i++) {
            cout << "Symbol " << i+1 << ": ("
                 << symbols[i].real() << ", "
                 << symbols[i].imag() << "j)"
                 << " | Magnitude: " << abs(symbols[i]) << "\n";
        }
    }

    double calculateAveragePower(const vector<complex<double>>& symbols) {
        double totalPower = 0.0;
        for (const auto& s : symbols) {
            totalPower += norm(s);
        }
        return totalPower / symbols.size();
    }
};

int main() {
    cout << "========================================\n";
    cout << "  5G NR QPSK Modulator Demo\n";
    cout << "========================================\n\n";

    QPSKModulator modulator;

    modulator.displayConstellation();

    string inputBits = "11001001";
    vector<complex<double>> txSymbols = modulator.modulate(inputBits);

    modulator.displaySymbols(inputBits, txSymbols);

    double avgPower = modulator.calculateAveragePower(txSymbols);
    cout << "\nAverage Symbol Power: " << avgPower << "\n";

    string rxBits = modulator.demodulate(txSymbols);
    cout << "\nDemodulated Bits: " << rxBits << "\n";

    if (inputBits == rxBits) {
        cout << "✓ Modulation/Demodulation SUCCESSFUL!\n";
    } else {
        cout << "✗ Error in modulation/demodulation\n";
    }

    cout << "\nEb/N0 (dB)  | Theoretical BER\n";
    cout << "------------|----------------\n";

    vector<double> EbN0_dB = {0, 2, 4, 6, 8, 10};
    cout << fixed << setprecision(6);

    for (double snr : EbN0_dB) {
        cout << setw(11) << snr << " | "
             << modulator.theoreticalBER(snr) << "\n";
    }

    cout << "\nDemo completed successfully!\n";
    return 0;
}
