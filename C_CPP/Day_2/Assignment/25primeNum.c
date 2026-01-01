/*
 *  Purpose: problem statement 
 *  Date: 22/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 *
 */
#include <stdio.h>

int main() {
    int num, count = 0, i, isPrime;
    printf("Accept a number: ");
    scanf("%d", &num);
    while (count < 25) {

        if (num < 2)
            isPrime = 0;

        // Check divisibility from 2 to num/2
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;  // Not a prime
                break;
            }
        }

        // If prime, print and increase count
        if (isPrime) {
            printf("%d ", num);
            count++;
        }

        num++;  // Move to next number
    }

    return 0;   // End of program
}
