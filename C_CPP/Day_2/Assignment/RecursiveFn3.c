/*
Write a recursive function to find the nth number in the fibonacci series.
*/
/*
 *  Purpose: problem statement 
 *  Date: 22/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 *
 */

#include <stdio.h>

int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Fibonacci number at position %d is %d\n", n, fibonacci(n));
    return 0;
}
