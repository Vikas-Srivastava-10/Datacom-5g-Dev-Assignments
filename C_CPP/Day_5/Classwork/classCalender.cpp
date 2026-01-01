//1. Implement the class Calendar with the given data and methods(functions)
#include <iostream>
using namespace std;
class Calendar {
    int day, month, year;   // private by default
public:
    // Set date with default values
    void setDate(int dd = 1, int mm = 12, int yyyy = 2025) {
        day = dd;
        month = mm;
        year = yyyy;
    }
    // Check leap year
    bool isLeap() {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
    // Return maximum days in a month
    int maxDays() {
        if (month == 2)
            return isLeap() ? 29 : 28;
        else if (month == 4 || month == 6 || month == 9 || month == 11)
            return 30;
        else
            return 31;
    }
    // Validate date
    bool valideDate() {
        if (year < 1 || month < 1 || month > 12)
            return false;
        if (day < 1 || day > maxDays())
            return false;
        return true;
    }
    // Calculate day of week (0=Sunday)
    int dayOfWeek() {
        int y = year, m = month, d = day;
        if (m < 3) {
            m += 12;
            y--;
        }
        int k = y % 100;
        int j = y / 100;

        return (d + (13 * (m + 1)) / 5 + k + (k / 4) + (j / 4) + (5 * j)) % 7;
    }
    // Print calendar date info
    void printCalendar() {
        if (!valideDate()) {
            cout << "Invalid Date\n";
            return;
        }
        cout << "Date: " << day << "/" << month << "/" << year << endl;
        cout << "Max Days in Month: " << maxDays() << endl;
        cout << "Leap Year: " << (isLeap() ? "Yes" : "No") << endl;
    }
};

int main() {
  Calendar c;
    c.setDate(15, 8, 2024);
    c.printCalendar();

    cout << endl;

    return 0;
}