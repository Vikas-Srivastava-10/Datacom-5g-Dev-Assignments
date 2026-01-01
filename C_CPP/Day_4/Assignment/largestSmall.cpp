/*
 *  Purpose: Find largest and smallest element in dynamic array.
 *  Date: 24/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n, i, min, max;

    printf("Enter size: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    min = max = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    printf("Smallest = %d\nLargest = %d\n", min, max);

    free(arr);
    return 0;
}

