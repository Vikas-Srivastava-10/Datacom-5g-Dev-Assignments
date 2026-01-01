/*
 *  Purpose: Accept a lenthy string as a string. Split each word and store them as separate string in a 2 D array.
 *  Date: 23/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 *
 */

#include <stdio.h>

int main() {
    char str[100];
    char words[20][20];
    int i = 0, row = 0, col = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            words[row][col] = '\0';  // end of word
            row++;
            col = 0;
        } else {
            words[row][col] = str[i];
            col++;
        }
        i++;
    }

    words[row][col] = '\0';  // last word

    printf("Words are:\n");
    for (i = 0; i <= row; i++)
        printf("%s\n", words[i]);

    return 0;
}
