#include <stdio.h>

int main() {
    int dd, mm, yyyy;
    int totalDays = 0;

    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &dd, &mm, &yyyy);

    /* Add days for years */
    totalDays = yyyy * 365;
    totalDays = totalDays + (yyyy / 4) - (yyyy / 100) + (yyyy / 400);

    /* Add days for months */
    if (mm == 1) totalDays += 0;
    else if (mm == 2) totalDays += 31;
    else if (mm == 3) totalDays += 59;
    else if (mm == 4) totalDays += 90;
    else if (mm == 5) totalDays += 120;
    else if (mm == 6) totalDays += 151;
    else if (mm == 7) totalDays += 181;
    else if (mm == 8) totalDays += 212;
    else if (mm == 9) totalDays += 243;
    else if (mm == 10) totalDays += 273;
    else if (mm == 11) totalDays += 304;
    else if (mm == 12) totalDays += 334;

    /* Leap year adjustment */
    if (mm > 2) {
        if ((yyyy % 4 == 0 && yyyy % 100 != 0) || (yyyy % 400 == 0)) {
            totalDays += 1;
        }
    }

    /* Add day */
    totalDays += dd;

    /* Find day */
    if (totalDays % 7 == 0) printf("Sunday\n");
    else if (totalDays % 7 == 1) printf("Monday\n");
    else if (totalDays % 7 == 2) printf("Tuesday\n");
    else if (totalDays % 7 == 3) printf("Wednesday\n");
    else if (totalDays % 7 == 4) printf("Thursday\n");
    else if (totalDays % 7 == 5) printf("Friday\n");
    else if (totalDays % 7 == 6) printf("Saturday\n");

    return 0;
}
