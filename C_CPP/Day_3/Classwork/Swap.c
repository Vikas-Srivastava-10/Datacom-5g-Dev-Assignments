//Swapping  2 numbers using temporary variable.

#include <stdio.h>
int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    // Store value of a in temporary variable
    temp = a;
    // Assign value of b to a
    a = b;
    // Assign value of temp to b
    b = temp;
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
