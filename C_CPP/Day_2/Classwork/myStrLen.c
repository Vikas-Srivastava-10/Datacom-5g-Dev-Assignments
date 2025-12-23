#include <stdio.h>
#include <string.h>

int myStrLen(const char *);

int main(){
	char str[25] = "Hello How0 I am fine";

	printf("str: %s\t\tLen: %d\t\tSize: %lu\n",str, myStrLen(str), sizeof(str));
}

int myStrLen(const char *str){
	int cnt = 0;
	while(str[cnt] != 0)
		cnt++;

	return cnt;
}
