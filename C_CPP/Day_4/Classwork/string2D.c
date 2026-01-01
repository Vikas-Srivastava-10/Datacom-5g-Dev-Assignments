#include <stdio.h>

int main(){
	char str[][7]={"Hello", "How", "are", "things","here","add", "some","text"};

	for (int cnt = 0; cnt < 8; cnt ++)
		printf("str[%d] --> %s\n", cnt, str[cnt]);

}
