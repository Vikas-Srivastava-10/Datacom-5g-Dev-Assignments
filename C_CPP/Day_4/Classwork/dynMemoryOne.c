#include <stdio.h>
#include <stdlib.h>

int main(){
	int *iPtr = malloc(sizeof(int));

	*iPtr = 100;

	printf("iPtr: %p\t\t*iPtr: %d\n", iPtr, *iPtr);

	free(iPtr);
}
