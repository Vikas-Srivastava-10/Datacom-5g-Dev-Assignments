/*
 *  Purpose: Power Function.
 *  Date: 26/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 *
 */

#include <iostream>
#include <cmath>
using namespace std;

/* Power function with default exponent */
double power(double base, int exponent = 2) {
    return pow(base, exponent);
}

int main() {
    cout << "Power (base = 5): " << power(5) << endl;
    cout << "Power (base = 2, exponent = 3): " << power(2, 3) << endl;

    return 0;
}
