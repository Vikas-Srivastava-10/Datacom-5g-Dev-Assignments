/*
 *  Purpose: Accept a number from the user. Print it with its correct suffix.
 *  Date: 19/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 */

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 100 >= 11 && num % 100 <= 13)

    //Numbers 11, 12, 13 always end with th, not st, nd, or rd.

        printf("%dth\n", num);
    else if (num % 10 == 1)

    //If the last digit is 1 → suffix is st

        printf("%dst\n", num);
    else if (num % 10 == 2)

    //If the last digit is 2 → suffix is nd

        printf("%dnd\n", num);
    else if (num % 10 == 3)

    //If the last digit is 3 → suffix is rd

        printf("%drd\n", num);
    else

   // For all other numbers → suffix is th

        printf("%dth\n", num);

    return 0;
}
