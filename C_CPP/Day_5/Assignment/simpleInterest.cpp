/*
 *  Purpose: Simple Interest (Default Arguments).
 *  Date: 26/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 *
 */

#include <iostream>
using namespace std;

/* Simple Interest with default rate and time */
double simpleInterest(double principal, double rate = 5.0, double time = 1.0) {
    return (principal * rate * time) / 100;
}

int main() {
    cout << "Simple Interest (P = 1000): "
         << simpleInterest(1000) << endl;

    cout << "Simple Interest (P = 1000, R = 8, T = 2): "
         << simpleInterest(1000, 8, 2) << endl;

    return 0;
}
