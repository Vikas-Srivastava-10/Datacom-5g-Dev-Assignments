#include <stdio.h>

void fun();
void funOne();

typedef void (*FPTR)();

void funCaller(FPTR);

int main(){
	funCaller(fun);	
	funCaller(&funOne);
}

void fun(){
	printf("fun() called\n");
}

void funOne(){
	printf("funOne() called\n");
}

void funCaller(FPTR ptr){
	ptr();
}
