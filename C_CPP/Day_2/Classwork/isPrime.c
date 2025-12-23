#include <stdio.h>

//implementing isPrime(num)

int isPrime(int); //prototype

int main(){
	printf("Res: %d\n", isPrime(101));//function calling inside printf()
	printf("Res: %d\n", isPrime(100));//function calling inside printf()
}//ending


int isPrime(int num){ //definition
	int flag = 1;
	for (int cnt = 2; cnt < num; cnt++){
		if (num % cnt == 0){
			flag = 0;
			break;
		}
	}
	return flag;
}

