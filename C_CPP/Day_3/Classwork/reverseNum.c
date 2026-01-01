//Reverse a number. Where number is accepted from the user.

#include <stdio.h>

int main() {
    int num, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number using loop
    while (num != 0) {
        digit = num % 10;          // Get last digit
        rev = rev * 10 + digit;    // Build reversed number
        num = num / 10;            // Remove last digit
    }

    printf("Reversed number = %d\n", rev);

    return 0;
}
