/*
 *  Purpose: Create a dynamic array with user-given size, fill with rand() and print it.
 *  Date: 24/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int *arr, n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    srand(time(NULL));

    for (i = 0; i < n; i++)
        arr[i] = rand() % 100;

    printf("Array elements:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}
