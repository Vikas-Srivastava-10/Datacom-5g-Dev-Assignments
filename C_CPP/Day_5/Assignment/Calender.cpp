//Calendar Printer

#include <iostream>
using namespace std;

/* Print calendar date with default values */
void printCalendar(int day = 1, int month = 12, int year = 2025) {
    cout << "Date: " << day << "/" << month << "/" << year << endl;
}

int main() {
    printCalendar();                 // Default date
    printCalendar(15, 8, 2024);       // Custom date

    return 0;
}
