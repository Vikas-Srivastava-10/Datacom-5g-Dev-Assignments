#include <stdio.h>

int main(){
	int arr[][3] = {{10}, {20}, {30}, {40}, {50}};
	int row=5, col = 3;
	int rCnt, cCnt;
	for (rCnt=0; rCnt < row; rCnt++){
		for (cCnt=0; cCnt < col; cCnt++)
			printf("%d  ", arr[rCnt][cCnt]);
		printf("\n");		
	}
}
