#include <stdio.h>

/* Function to calculate day of week for given date
   0 = Sunday, 1 = Monday, ..., 6 = Saturday */
int dayOfWeek(int d, int m, int y) {
    int totalDays = 0;

    totalDays = (y - 1) * 365;
    totalDays += (y - 1) / 4;
    totalDays -= (y - 1) / 100;
    totalDays += (y - 1) / 400;

    if (m == 1) totalDays += 0;
    else if (m == 2) totalDays += 31;
    else if (m == 3) totalDays += 59;
    else if (m == 4) totalDays += 90;
    else if (m == 5) totalDays += 120;
    else if (m == 6) totalDays += 151;
    else if (m == 7) totalDays += 181;
    else if (m == 8) totalDays += 212;
    else if (m == 9) totalDays += 243;
    else if (m == 10) totalDays += 273;
    else if (m == 11) totalDays += 304;
    else if (m == 12) totalDays += 334;

    /* Leap year adjustment */
    if (m > 2) {
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
            totalDays++;
    }

    totalDays += d;

    return totalDays % 7;
}

/* Function to return number of days in month */
int maxDays(int m, int y) {
    if (m == 2) {
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
            return 29;
        else
            return 28;
    }
    if (m == 4 || m == 6 || m == 9 || m == 11)
        return 30;
    return 31;
}

int main() {
    int month, year;
    int w, days;

    printf("Enter Month and Year: ");
    scanf("%d %d", &month, &year);

    /* Get weekday of 1st day of the month */
    w = dayOfWeek(1, month, year);

    /* Get total days in month */
    days = maxDays(month, year);

    printf("\nSu Mo Tu We Th Fr Sa\n");

    /* Print initial spaces */
    for (int i = 0; i < w; i++)
        printf("   ");

    /* Print calendar dates */
    for (int day = 1; day <= days; day++) {
        printf("%2d ", day);

        if ((day + w) % 7 == 0)
            printf("\n");
    }

    printf("\n");
    return 0;
}
