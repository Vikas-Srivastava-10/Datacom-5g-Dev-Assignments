#include <stdio.h>

int isPrime(int);
void arrInitialize(int *, int);
void arrProcess(int *, int);
void printArray(int *, int);

int main(){
	int arr[100];
	printf("Enter the first element: ");
	scanf("%d", &arr[0]);
	
	printf("In main.... size:%lu\n", sizeof(arr)); 

	arrInitialize(arr, 100); //name of the array is passed 
	printArray(arr, 100); //name of the array is passed 
	arrProcess(arr, 100); //name of the array is passed 
	printArray(arr, 100); //name of the array is passed 
}

int isPrime(int num){
	int flag = 1;
	for (int cnt = 2; cnt < num; cnt++)
		if (num % cnt == 0){
			flag = 0;
			break;
		}
	return flag;
}

void arrInitialize(int *arr, int size){
	printf("In arrInitialize.... size:%lu\n", sizeof(arr)); 
	for (int cnt = 1;cnt < size; cnt++)
		arr[cnt] = arr[0] + cnt;
}
void arrProcess(int *arr, int size){
	printf("In arrProcess.... size:%lu\n", sizeof(arr)); 
	for (int cnt = 0;cnt < size; cnt++)
		if (isPrime(arr[cnt]) == 0)
			arr[cnt] = 0;
}

void printArray(int *arr, int size){
	printf("Array: ");	
	for (int cnt = 0;cnt < size; cnt++)
		printf("%d  ", arr[cnt]);
	printf("\n************************************************\n");
}

