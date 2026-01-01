#include <stdio.h>
#include <string.h>
char *myStrCpy(char *, const char *);

int main(){
	char str[25] = "Hello How0 I am fine";
	char strCopy[30];

	printf("str: %s\t\tLen: %lu\n",str, strlen(str));
	myStrCpy(strCopy, str);

	printf("Copied: %s\t\tLen: %lu\n", strCopy, strlen(strCopy));
}
char *myStrCpy(char *dest, const char *src){
	int cnt = 0;
	while(dest[cnt] = src[cnt])
		cnt++;	
	return dest;
}
