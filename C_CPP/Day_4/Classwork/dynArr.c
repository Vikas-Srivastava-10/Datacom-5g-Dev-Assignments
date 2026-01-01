#include <stdio.h>
#include <stdlib.h>

int main(){
	int size;
	printf("Enter the size: ");
	scanf("%d", &size);

	int *arr = calloc(size, sizeof(int));
	printf("Enter the first element: ");
	scanf("%d", &arr[0]);

	for (int cnt = 1; cnt < size; cnt++)
		arr[cnt] = arr[0] + cnt;
	
	printf("Arr: ");
	for (int cnt = 0; cnt < size; cnt++)
		printf("%d  ", arr[cnt]);
	printf("\n");

	free(arr);
}
