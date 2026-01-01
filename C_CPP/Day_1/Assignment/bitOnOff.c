/*
 *  Purpose:Check whether given bit position in the number is ON or OFF. 
 *  Date: 19/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 */

#include <stdio.h>

int main() {
    int num, pos; // num = number, pos = bit position

    printf("Enter number: ");
    scanf("%d", &num);     

    printf("Enter bit position: ");
    scanf("%d", &pos);     

    // (1 << pos) creates a mask by shifting 1 to the given bit position

    if (num & (1 << pos))
        printf("%d pos in number %d is ON", pos, num);   // Bit is ON
    else
        printf("%d pos in number %d is OFF", pos, num);  // Bit is OFF

    return 0;              // End of program
}
