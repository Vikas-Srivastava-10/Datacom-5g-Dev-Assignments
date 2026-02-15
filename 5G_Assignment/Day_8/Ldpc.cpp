#include <iostream>
#include <vector>
#include <algorithm>   // ✅ REQUIRED for max_element
using namespace std;

/*
 Mini 5G-style LDPC Base Graph
 Codeword = [ d0 d1 d2 d3 p0 p1 ]
*/

const int BG_ROWS = 3;
const int BG_COLS = 6;

// Parity-check matrix H (Base-Graph-like)
int H[BG_ROWS][BG_COLS] = {
    {1, 0, 1, 1, 1, 0},
    {0, 1, 1, 0, 0, 1},
    {1, 1, 0, 0, 1, 1}
};

// LDPC Encoder (systematic, H-consistent)
vector<int> ldpc_encode(const vector<int>& data) {
    vector<int> codeword(6, 0);

    // Copy data bits
    for (int i = 0; i < 4; i++)
        codeword[i] = data[i];

    // Parity bits
    codeword[4] = data[0] ^ data[2] ^ data[3]; // p0
    codeword[5] = data[1] ^ data[2];           // p1

    return codeword;
}

// Check parity equations
bool check_parity(const vector<int>& cw) {
    for (int i = 0; i < BG_ROWS; i++) {
        int sum = 0;
        for (int j = 0; j < BG_COLS; j++)
            sum ^= (H[i][j] & cw[j]);

        if (sum != 0)
            return false;
    }
    return true;
}

// LDPC Decoder (Bit-Flipping)
vector<int> ldpc_decode(vector<int> received, int maxIter = 10) {
    vector<int> decoded = received;

    for (int iter = 0; iter < maxIter; iter++) {
        if (check_parity(decoded)) {
            cout << "Decoding successful in iteration " << iter + 1 << endl;
            return decoded;
        }

        vector<int> errorCount(BG_COLS, 0);

        for (int i = 0; i < BG_ROWS; i++) {
            int sum = 0;
            for (int j = 0; j < BG_COLS; j++)
                sum ^= (H[i][j] & decoded[j]);

            if (sum != 0) {
                for (int j = 0; j < BG_COLS; j++)
                    if (H[i][j])
                        errorCount[j]++;
            }
        }

        int flipIndex =
            max_element(errorCount.begin(), errorCount.end())
            - errorCount.begin();

        decoded[flipIndex] ^= 1;
    }

    cout << "Decoding failed" << endl;
    return decoded;
}

int main() {
    vector<int> data = {1, 0, 1, 1};

    cout << "Original Data: ";
    for (int b : data) cout << b << " ";
    cout << endl;

    vector<int> encoded = ldpc_encode(data);

    cout << "LDPC Encoded Data: ";
    for (int b : encoded) cout << b << " ";
    cout << endl;

    // Simulate channel error
    vector<int> received = encoded;
    received[2] ^= 1;

    cout << "Received Data (with error): ";
    for (int b : received) cout << b << " ";
    cout << endl;

    vector<int> decoded = ldpc_decode(received);

    cout << "Decoded Data: ";
    for (int b : decoded) cout << b << " ";
    cout << endl;

    return 0;
}
