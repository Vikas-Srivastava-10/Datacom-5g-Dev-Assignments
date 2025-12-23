#include <stdio.h>

int main(){
	int arr[100]={10, 20, 30}; //Partially initialized array
	int cnt;
	for (cnt = 0; cnt < 100; cnt++)
		printf("%d  ", arr[cnt]);
	printf("\n");
}
