#include <stdio.h>

int main() {
    int a, b;
    int result = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nSteps:\n");
    printf("A\tB\tAction\n");

    while (a > 0) {
        if (a % 2 != 0) {
            result = result + b;
            printf("%d\t%d\tAdd %d\n", a, b, b);
        } else {
            printf("%d\t%d\tIgnore\n", a, b);
        }

        a = a / 2;   // division
        b = b * 2;   // doubling
    }

    printf("\nResult = %d\n", result);

    return 0;
}
