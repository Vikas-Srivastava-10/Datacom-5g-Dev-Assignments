//Check whether the given Year is leap or not.

#include <stdio.h>
int main(){
int year;
printf("Enter a year : \n");
scanf("%d", &year);
if((year % 4 == 0 && year % 100 != 0) || year % 400 ==0){
  printf("Its a leap year");
}else{
  printf("Not a Leap year");
}
  return 0;
}