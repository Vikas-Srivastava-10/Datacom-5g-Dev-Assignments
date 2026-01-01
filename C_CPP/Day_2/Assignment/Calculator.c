/*
 *  Purpose: problem statement 
 *  Date: 22/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 *
 */

#include <stdio.h>

/* Function declarations */
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main() {
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Result = %d\n", add(a, b));
            break;
        case 2:
            printf("Result = %d\n", subtract(a, b));
            break;
        case 3:
            printf("Result = %d\n", multiply(a, b));
            break;
        case 4:
            if (b != 0)
                printf("Result = %.2f\n", divide(a, b));
            else
                printf("Division by zero not allowed\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

/* Function definitions */
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}
