#include <stdio.h>

void fun();
void funOne();

void funCaller(void (*)());

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

void funCaller(void (*fPtr)()){
	//fPtr();
	(*fPtr)(); //also valid 
}
