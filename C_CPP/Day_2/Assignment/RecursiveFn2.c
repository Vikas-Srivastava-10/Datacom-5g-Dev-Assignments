/*
Write a recursive function to calculate the factorial of a given number
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

int factorial(int n) {
    if (n == 0)      // base condition
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d = %d\n", num, factorial(num));
    return 0;
}
