#include <stdio.h>

int main() {
    int month, year;
    int day = 1;        // day of month
    int w;              // weekday (0 = Sunday, 1 = Monday, ...)

    printf("Enter Month and Year: ");
    scanf("%d %d", &month, &year);

    /* Simple weekday calculation (reusing previous logic idea)
       Assume w is already calculated using DayOfWeek V1
       Example: December 2025 → w = 1 (Monday)
    */
    w = 1;   // GIVEN / CALCULATED from previous program

    printf("\nSu Mo Tu We Th Fr Sa\n");

    /* Print initial spaces */
    for (int i = 0; i < w; i++) {
        printf("   ");
    }

    /* Print dates (30 days only) */
    for (day = 1; day <= 30; day++) {
        printf("%2d ", day);

        /* Move to next line after Saturday */
        if ((day + w) % 7 == 0) {
            printf("\n");
        }
    }

    printf("\n");
    return 0;
}
