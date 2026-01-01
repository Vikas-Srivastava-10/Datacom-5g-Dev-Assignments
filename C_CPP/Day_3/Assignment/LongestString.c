/*
 *  Purpose:  Read the longest string from a collection of  strings.
 *  Date: 23/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 *
 */

#include <stdio.h>

int main() {
    char str[5][50];
    int i, j, maxLen = 0, index = 0, len;

    printf("Enter 5 strings:\n");
    for (i = 0; i < 5; i++) {
        scanf(" %[^\n]", str[i]);
    }

    // Find longest string
    for (i = 0; i < 5; i++) {
        len = 0;
        for (j = 0; str[i][j] != '\0'; j++)
            len++;

        if (len > maxLen) {
            maxLen = len;
            index = i;
        }
    }

    printf("Longest string: %s\n", str[index]);

    return 0;
}
