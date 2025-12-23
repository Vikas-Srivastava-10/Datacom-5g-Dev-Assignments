#include <stdio.h>

void reverseString(char str[]) {
    int i = 0, j, temp;

    /* Find length */
    while (str[i] != '\0') {
        i++;
    }

    j = i - 1;   // last index
    i = 0;       // first index

    /* Swap characters */
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
