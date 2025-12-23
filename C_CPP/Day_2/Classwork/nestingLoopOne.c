#include <stdio.h>

int main(){
	int cntOne, cntTwo, num = 1;
	for (cntOne=0; cntOne<5; cntOne++){
		for (cntTwo=0; cntTwo<5; cntTwo++)
			printf("%d ", num++);
		printf("\n");	
	}
}
