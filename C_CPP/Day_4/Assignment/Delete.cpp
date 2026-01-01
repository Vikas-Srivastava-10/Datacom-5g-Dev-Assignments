/*
 *  Purpose: Delete element from dynamic array.
 *  Date: 24/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n, i, pos;

    printf("Enter size: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];

    arr = (int *)realloc(arr, (n - 1) * sizeof(int));
    n--;

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}
