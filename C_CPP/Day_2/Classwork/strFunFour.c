#include <stdio.h>
#include <string.h>

int main(){
	printf("Compare : %d\n", strcmp("Hello","Hello")); //same string returns 0
	printf("Compare : %d\n", strcmp("Hello","hello")); //difference returns -1
	printf("Compare : %d\n", strcmp("hello","Hello")); //difference returns  1
}
