/*
 *  Purpose: problem statement 
 *  Date:
 *  Author: Your Name here
 *  ID: 
 *
 */


#include <stdio.h>

int main(){
	int w = 1;
	int cnt;

	printf("Su Mo Tu We Th Fr Sa\n");
	for (cnt = 0; cnt < w; cnt++)
		printf("%3s"," ");


	for (cnt = 1; cnt <= 30 ; cnt++){
		printf("%-3d", cnt);	
		if ((w + cnt) % 7 == 0)
			printf("\n");
	}
	printf("\n");
}
