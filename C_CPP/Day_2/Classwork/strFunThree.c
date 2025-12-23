#include <stdio.h>
#include <string.h>

int main(){
	char str[25] = "Hello How I am fine";
	char strCopy[30]="Hai, ";

	printf("str: %s\t\tLen: %lu\t\tSize: %lu\n",str, strlen(str), sizeof(str));
	strcat(strCopy, str);

	printf("Concatinated: %s\n", strCopy);
}
