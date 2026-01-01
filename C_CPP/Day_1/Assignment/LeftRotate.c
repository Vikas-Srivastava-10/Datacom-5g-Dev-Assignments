/*
 *  Purpose: Left rotate --> Bring all those bits that are shifted on the MSB side to the LSB side.
 *  Date: 19/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 */
#include <stdio.h>

int main()
{
    unsigned char num;
    int pos;
    unsigned char result;

    printf("Enter number: ");
    scanf("%hhu", &num);

    printf("Enter rotate positions: ");
    scanf("%d", &pos);

    result = (num << pos) | (num >> (8 - pos));

    printf("After left rotate: %u\n", result);

    return 0;
}
