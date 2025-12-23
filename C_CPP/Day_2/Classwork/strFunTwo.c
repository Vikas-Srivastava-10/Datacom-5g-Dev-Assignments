#include <stdio.h>
#include <string.h>

int main(){
	char str[25] = "Hello How0 I am fine";
	char strCopy[30];

	printf("str: %s\t\tLen: %lu\t\tSize: %lu\n",str, strlen(str), sizeof(str));
	strcpy(strCopy, str);

	printf("Copied: %s\n", strCopy);
}
