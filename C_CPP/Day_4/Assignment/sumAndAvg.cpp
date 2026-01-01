/*
 *  Purpose: Find sum and average of dynamic array data.
 *  Date: 24/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n, i, sum = 0;
    float avg;

    printf("Enter size: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = (float)sum / n;

    printf("Sum = %d\nAverage = %.2f\n", sum, avg);

    free(arr);
    return 0;
}
