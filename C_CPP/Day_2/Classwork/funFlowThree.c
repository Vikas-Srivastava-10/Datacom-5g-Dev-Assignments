#include <stdio.h>

void funOne(int);

int main(){
	funOne(1);
	printf("\n");
}

void funOne(int num){
	if (num <= 5){
		printf("%d  ", num);
		funOne(num + 1);
		printf("%d  ", num);
	}
}


