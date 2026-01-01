//  Implement a function isPrime(num), taking number as an argument returning integer (0 or 1 for false or true).
/*
 *  Purpose: problem statement 
 *  Date: 22/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 *
 */

#include <stdio.h>

/* Function to check whether a number is prime
   Returns 1 if prime, 0 if not */
int isPrime(int num) {
    int i;

    // Numbers less than 2 are not prime
    if (num < 2)
        return 0;

    // Check divisibility from 2 to num/2
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;   // Not a prime number
    }

    return 1;   // Prime number
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a Prime number\n", num);
    else
        printf("%d is NOT a Prime number\n", num);

    return 0;
}
