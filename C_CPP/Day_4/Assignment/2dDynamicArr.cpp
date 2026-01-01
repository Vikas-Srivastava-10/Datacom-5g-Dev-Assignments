/*
 *  Purpose: 2-D Dynamic Array.
 *  Date: 24/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 *
 */

 #include <stdio.h>
#include <stdlib.h>

int main() {
    int **arr, r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    arr = (int **)malloc(r * sizeof(int *));
    for (i = 0; i < r; i++)
        arr[i] = (int *)malloc(c * sizeof(int));

    printf("Enter elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);

    printf("2D Array:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    for (i = 0; i < r; i++)
        free(arr[i]);
    free(arr);

    return 0;
}
