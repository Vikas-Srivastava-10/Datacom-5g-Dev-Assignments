#include <stdio.h>

int main(){
	char name[] = "Sudhakar Palanivelu";
			
	char names[][15] = {"Name One", "Name Two", "Name Three", "Name Four", "Name Five"};

	int cnt;

	printf("One Name: %s\n", name);
	printf("Multiple names: \n\t\t");
	for (cnt = 0; cnt < 5; cnt++)
		printf("%s\n\t\t",names[cnt]);
	printf("\n");
}

