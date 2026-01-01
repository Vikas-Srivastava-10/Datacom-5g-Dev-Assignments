/*
 *  Purpose:Toggling a Bit. 
 *  Date: 19/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 */

#include <stdio.h>

int main() {
    int num, pos, result;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Enter bit position: ");
    scanf("%d", &pos);

    // Toggle the bit at given position
    result = num ^ (1 << pos);

    printf("After toggling %d bit on %d num is %d", pos, num, result);

    return 0;
}
