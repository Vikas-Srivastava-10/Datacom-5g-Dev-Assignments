/*
 *  Purpose: char str[] = "Have a lengthy string here" . Count the number of words, characters and spaces. 
 *  Date: 23/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 *
 */

#include <stdio.h>

int main() {
    char str[] = "Have a lengthy string here";
    int i;
    int characters = 0, spaces = 0, words = 1;

    // Traverse the string until null character
    for (i = 0; str[i] != '\0'; i++) {
        characters++;          // Count each character

        if (str[i] == ' ') {
            spaces++;           // Count spaces
            words++;            // Each space separates words
        }
    }

    printf("String: %s\n", str);
    printf("Characters = %d\n", characters);
    printf("Spaces = %d\n", spaces);
    printf("Words = %d\n", words);

    return 0;
}

