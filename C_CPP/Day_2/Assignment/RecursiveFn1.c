/*
Write a recursive function to print 1 to 10
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

void printNumbers(int n) {
    if (n > 10)      // base condition
        return;

    printf("%d ", n);
    printNumbers(n + 1);   // recursive call
}

int main() {
    printNumbers(1);
    return 0;
}
