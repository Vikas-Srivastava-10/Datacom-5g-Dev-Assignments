#include <stdio.h>

int mystrlen(char str[]) {
    int count = 0;

    while (str[count] != '\0') {
        count++;
    }

    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Length of string = %d\n", mystrlen(str));

    return 0;
}
