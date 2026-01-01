/*
 *  Purpose: Write a program to print 1 .. 100 using all three loops. 
 *  Date: 19/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 */

#include <stdio.h>

int main() {
    int i;

    /* for loop */
    printf("For loop:\n");
    for (i = 1; i <= 100; i++) {
        printf("%d ", i);
    }

    printf("\n\n");

    /* while loop */
    printf("While loop:\n");
    i = 1;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }

    printf("\n\n");

    /* do-while loop */
    printf("Do-while loop:\n");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);

    return 0;
}
