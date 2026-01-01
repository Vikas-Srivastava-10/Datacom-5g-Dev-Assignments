//Print first n numbers in fibonacci series, where n is accepted from user 

#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Ask for the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    
    // Loop to print Fibonacci numbers
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i; // first two terms (0 and 1)
        } else {
            next = first + second; // sum of previous two numbers
            first = second;  // update first
            second = next;   // update second
        }
        printf("%d ", next);  // print the next Fibonacci number
    }

    return 0;
}
