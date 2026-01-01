//largest of 3 numbers, where numbers are accepted by the user.

#include <stdio.h>

int main (){
  int num1, num2, num3;
  printf("Enter num1 : \n");
  scanf("%d", &num1);
  
  printf("Enter num2 : \n");
  scanf("%d", &num2);
  
  printf("Enter num3 : \n");
  scanf("%d", &num3);

  if(num1 > num2 && num1 > num3){
    printf("%d is greater than %d and %d", num1, num2, num3 );
  }else if (num2 > num1 && num2 > num3)
  {
    printf("%d is greater than %d and %d", num2, num1, num3 );
  }
  else
  {
    printf("%d is greater than %d and %d", num3, num1, num2 );
  }
  return 0;
}