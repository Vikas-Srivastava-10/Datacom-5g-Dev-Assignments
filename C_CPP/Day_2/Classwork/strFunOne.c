#include <stdio.h>
#include <string.h>

int main(){
	char str[25] = "Hello How0 I am fine";

	printf("str: %s\t\tLen: %lu\t\tSize: %lu\n",str, strlen(str), sizeof(str));
}
