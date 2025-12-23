#include <stdio.h>

void printNumbers(int n) {
    if (n > 10)      // base condition
        return;

    printf("%d ", n);
    printNumbers(n + 1);   // recursive call
}

int main() {
    printNumbers(1);
    return 0;
}
