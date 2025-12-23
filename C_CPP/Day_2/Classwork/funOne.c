#include <stdio.h>

//function declaration / prototype
void funOne(); // It a function taking no arguments and returning nothing


int main(){
	printf("Inside main()\n");
	funOne();//function calling
}

void funOne(){//function definition
	printf("Inside funOne...\n");
}

