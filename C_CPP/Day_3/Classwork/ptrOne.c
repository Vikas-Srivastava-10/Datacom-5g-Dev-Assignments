#include <stdio.h>

int main(){
	int var = 10;
	int *ptr = &var;

	printf("var: %d\n", var);
	printf("&var: %p\n", &var);
	printf("ptr: %p\n", ptr);
	printf("&ptr: %p\n", &ptr);
	printf("*&ptr: %p\n", *&ptr);
	printf("**&ptr: %d\n", **&ptr);

}
