#include <stdio.h>

int main() {
    int dd, mm, yyyy;
    int totalDays = 0;

    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &dd, &mm, &yyyy);

    /* Add days for completed years */
    totalDays = (yyyy - 1) * 365;
    totalDays += (yyyy - 1) / 4;
    totalDays -= (yyyy - 1) / 100;
    totalDays += (yyyy - 1) / 400;

    /* Add days for completed months */
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

    /* Leap year correction if after Feb */
    if (mm > 2) {
        if ((yyyy % 4 == 0 && yyyy % 100 != 0) || (yyyy % 400 == 0))
            totalDays += 1;
    }

    /* Add days of current month */
    totalDays += dd;

    /* Find day of week */
    switch (totalDays % 7) {
        case 0: printf("Sunday\n"); break;
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
    }

    return 0;
}
