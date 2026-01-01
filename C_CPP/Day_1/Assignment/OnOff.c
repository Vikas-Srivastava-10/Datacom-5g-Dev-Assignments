/*
 *  Purpose:Check whether given bit position in the number is ON or OFF. 
 *  Date: 19/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 */

#include <stdio.h>

int main()
{
    int num = 10, pos = 2;
    int res = num & (1 << pos);

    printf("%d pos in number %d is %s\n",
           pos, num, res ? "ON" : "OFF");

    return 0;
}
