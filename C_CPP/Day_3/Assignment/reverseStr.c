/*
 *  Purpose: Reverse a String. 
 *  Date: 23/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 *
 */

#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    // Accept string (with spaces)
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    //reads all character including spaces.

    // Find length of the string
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // Print string in reverse order
    printf("Reversed String: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}

