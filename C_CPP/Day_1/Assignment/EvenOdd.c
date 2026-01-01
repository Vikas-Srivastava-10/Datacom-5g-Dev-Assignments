/*
 *  Purpose:Accept a number from the user, print whether the given number is even or odd.
 *  Date: 19/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 */

#include <stdio.h>

int main() {
    int num;

    printf("Accept a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is an Even number\n", num);
    } else {
        printf("%d is an Odd number\n", num);
    }

    return 0;
}
