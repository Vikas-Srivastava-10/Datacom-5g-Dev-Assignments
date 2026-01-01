/*
 *  Purpose: Find and replace a substring in a lengthy string. here substring and replacement substring can be of     different length. 
 *  Date: 23/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 *
 */

#include <stdio.h>

int main() {
    char str[200], sub[50], rep[50], result[300];
    int i = 0, j, k, found;

    // Accept main string
    printf("Enter main string: ");
    scanf(" %[^\n]", str);

    // Accept substring to find
    printf("Enter substring to find: ");
    scanf(" %[^\n]", sub);

    // Accept replacement string
    printf("Enter replacement string: ");
    scanf(" %[^\n]", rep);

    // Traverse the main string
    while (str[i] != '\0') {
        found = 1;

        // Check if substring matches at current position
        for (j = 0; sub[j] != '\0'; j++) {
            if (str[i + j] != sub[j]) {
                found = 0;
                break;
            }
        }

        // If substring found
        if (found == 1) {
            // Copy replacement string to result
            for (k = 0; rep[k] != '\0'; k++) {
                result[k + (i == 0 ? 0 : strlen(result))] = rep[k];
            }
            i += j;  // Skip substring length
        } else {
            // Copy current character
            result[strlen(result)] = str[i];
            i++;
        }
    }

    result[strlen(result)] = '\0';

    printf("Result string: %s\n", result);

    return 0;
}

