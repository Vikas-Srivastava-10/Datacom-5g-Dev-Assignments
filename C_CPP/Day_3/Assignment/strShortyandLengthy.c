/*
 *  Purpose:  Convert given string(short/lengthy) to Upper , Lower and Title Cases. 
 *  Date: 23/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 *
 */

#include <stdio.h>

int main() {
    char str[100];
    int i;

    // Accept string with spaces using scanf
    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    /* ---------- Upper Case ---------- */
    printf("\nUpper Case: ");
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            printf("%c", str[i] - 32);
        else
            printf("%c", str[i]);
    }

    /* ---------- Lower Case ---------- */
    printf("\nLower Case: ");
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            printf("%c", str[i] + 32);
        else
            printf("%c", str[i]);
    }

    /* ---------- Title Case ---------- */
    printf("\nTitle Case: ");
    for (i = 0; str[i] != '\0'; i++) {
        if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
            printf("%c", str[i] - 32);   // First character
        else if (str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z')
            printf("%c", str[i] - 32);   // First character of each word
        else
            printf("%c", str[i]);
    }

    return 0;
}
