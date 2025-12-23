#include <stdio.h>

void fun();
void funOne();
void funTwo();
void funThree();

int main(){
	printf("1.  in main()...\n");
	fun();
	funOne();
	funThree();
	printf("2.  in main()...\n");
}

void fun(){
	printf("Inside fun()...\n");
}
void funOne(){
	printf("Inside funOne()...\n");
}
void funTwo(){
	printf("Inside funTwo()...\n");
}
void funThree(){
	printf("Inside funThree()...\n");
}


