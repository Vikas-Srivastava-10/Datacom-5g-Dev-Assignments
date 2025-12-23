#include <stdio.h>

int main(){
	int first,second;
	printf("Enter first and second numbers :");
    scanf("%d%d", &first, &second);
	while (first>0){
		printf("First....%d\n", first);
		first /= 2;
	}	
}
