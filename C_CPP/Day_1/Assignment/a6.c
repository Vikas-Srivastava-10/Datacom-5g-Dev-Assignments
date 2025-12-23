#include <stdio.h>

int main() {
    int num, lastDigit, lastTwoDigits;

    printf("Enter the number : ");
    scanf("%d", &num);

    lastDigit = num % 10;
    lastTwoDigits = num % 100;

    if (lastTwoDigits >= 11 && lastTwoDigits <= 13) {
        printf("%dth\n", num);
    }
    else if (lastDigit == 1) {
        printf("%dst\n", num);
    }
    else if (lastDigit == 2) {
        printf("%dnd\n", num);
    }
    else if (lastDigit == 3) {
        printf("%drd\n", num);
    }
    else {
        printf("%dth\n", num);
    }

    return 0;
}
