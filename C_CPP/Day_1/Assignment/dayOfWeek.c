/*
 *  Purpose: Equation to calculate day of the week(Disparate Variation).
 *  Date: 19/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 */

#include <stdio.h>

int main() {

  // d = day , m = month , y = year , h = equation

    int d, m, y, h;

    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &d, &m, &y);

    h = ( d + (13*(m + 1))/5 + y + y/4 - y/100 + y/400 ) % 7;

    /*
      0 → Saturday
      1 → Sunday
      2 → Monday
      3 → Tuesday
      4 → Wednesday
      5 → Thursday
      6 → Friday
    */

    printf("Day number = %d", h);

    return 0;
}
