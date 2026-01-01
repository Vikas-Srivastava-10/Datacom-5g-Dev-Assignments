/*
 Implement printCalendarV1.c by dividing the logic into sub-tasks(functions). Function names and prototypes given below.	
		int isLeap(Year);//
		int maxDays(month, Year); //
		int dayOfWeek(day, month, Year);
		void printCalendar(month, Year);
*/
/*
 *  Purpose: problem statement 
 *  Date: 22/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 *
 */

#include <stdio.h>

/* Check whether a year is a leap year
   Returns 1 if leap year, else 0 */
int isLeap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    return 0;
}

/* Returns number of days in a given month */
int maxDays(int month, int year) {
    if (month == 2)
        return isLeap(year) ? 29 : 28;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else
        return 31;
}

/* Calculates day of the week
   Returns: 0=Sunday, 1=Monday, ..., 6=Saturday */
int dayOfWeek(int day, int month, int year) {
    int totalDays = 0;
    int m;

    /* Add days for years */
    totalDays = year * 365;
    totalDays += (year / 4) - (year / 100) + (year / 400);

    /* Add days for months */
    for (m = 1; m < month; m++) {
        totalDays += maxDays(m, year);
    }

    /* Add days of current month */
    totalDays += day;

    return totalDays % 7;
}

/* Prints calendar of given month and year */
void printCalendar(int month, int year) {
    int startDay, days, i;

    printf("\nSun Mon Tue Wed Thu Fri Sat\n");

    startDay = dayOfWeek(1, month, year);
    days = maxDays(month, year);

    /* Print initial spaces */
    for (i = 0; i < startDay; i++)
        printf("    ");

    /* Print all days of the month */
    for (i = 1; i <= days; i++) {
        printf("%3d ", i);

        if ((i + startDay) % 7 == 0)
            printf("\n");
    }

    printf("\n");
}

/* Main function */
int main() {
    int month, year;

    printf("Enter month and year: ");
    scanf("%d %d", &month, &year);

    printCalendar(month, year);

    return 0;
}
