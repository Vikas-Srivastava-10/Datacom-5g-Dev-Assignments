/*
 *  Purpose: Class Calendar (Using Constructor & Destructor).
 *  Date: 26/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 *
 */

 #include <iostream>
using namespace std;

class Calendar {
    int day, month, year;   // private by default

public:
    // Constructor with default arguments
    Calendar(int dd = 1, int mm = 12, int yyyy = 2025) {
        day = dd;
        month = mm;
        year = yyyy;
    }

    // Destructor
    ~Calendar() {
        // Destructor for demonstration
    }

    bool isLeap() {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    int maxDays() {
        if (month == 2)
            return isLeap() ? 29 : 28;
        else if (month == 4 || month == 6 || month == 9 || month == 11)
            return 30;
        else
            return 31;
    }

    bool valideDate() {
        if (year < 1 || month < 1 || month > 12)
            return false;
        if (day < 1 || day > maxDays())
            return false;
        return true;
    }

    int dayOfWeek() {
        int y = year, m = month, d = day;
        if (m < 3) {
            m += 12;
            y--;
        }
        return (d + (13 * (m + 1)) / 5 + y + y / 4 - y / 100 + y / 400) % 7;
    }

    void printCalendar() {
        if (!valideDate()) {
            cout << "Invalid Date\n";
            return;
        }
        cout << "Date: " << day << "/" << month << "/" << year << endl;
        cout << "Leap Year: " << (isLeap() ? "Yes" : "No") << endl;
        cout << "Max Days in Month: " << maxDays() << endl;
    }
};
int main(){
 Calendar c(15, 8, 2024);
    c.printCalendar();

    cout << endl;
return 0;
}