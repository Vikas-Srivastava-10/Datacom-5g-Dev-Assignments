/*
 *  Purpose: Sort names in alphabetical order 
 *  Date: 23/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 *
 */

#include <stdio.h>
#include <string.h>

void sort_names(char names[][50], int n) {
    char temp[50];

    // Bubble sort for sorting names
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                // Swap names[i] and names[j]
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main() {
    char names[5][50] = {"John", "Alice", "Bob", "Charlie", "David"};
    int n = 5;

    sort_names(names, n);

    printf("Sorted names:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
