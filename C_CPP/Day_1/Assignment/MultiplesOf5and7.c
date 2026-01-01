/*
 *  Purpose: Write a program to add all the numbers which are multiples of 5 & 7 below  1000000(1 million(10 Lakhs)).
 *  Date: 19/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 */

#include <stdio.h>

int main() {
    int i;
    long sum = 0;   // long long is used because sum can be very large

    // Loop through all numbers below 1,000,000
    for (i = 1; i < 1000000; i++) {

        // Check if the number is divisible by both 5 and 7

        if (i % 5 == 0 && i % 7 == 0) {
            sum = sum + i;   // Add the number to sum
        }
    }

    printf("Sum of all numbers below 1,000,000 divisible by 5 and 7 = %lld\n", sum);

    return 0;   
}
