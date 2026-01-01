//Count of digits in a number. Where number is accepted from the user.

#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Special case: if number is 0, it has 1 digit
    if (num == 0) {
        count = 1;
    } else {
        // Count digits by repeatedly dividing by 10
        while (num != 0) {
            count++;
            num = num / 10;
        }
    }

    printf("Number of digits = %d\n", count);

    return 0;
}
