/*
Purpose - Student Attendance System (Array + Inheritance) Problem Statement: An attendance system manages students of different programs: Engineering, Arts, and Science. Each student has a name and attendance percentage. Create a base class StudentAttendance with virtual method checkEligibility(). Derived classes override the method to apply different attendance rules. Store student objects in an array of base class pointers and display eligibility status.
 *  Date: 02/01/2026
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
*/

#include <iostream>
using namespace std;

// Base class
class StudentAttendance {
protected:
    string name;
    float attendance;

public:
    StudentAttendance(string n, float a) : name(n), attendance(a) {}

    virtual bool checkEligibility() = 0; // Pure virtual function

    virtual void displayStatus() {
        cout << name << " : ";
        if (checkEligibility())
            cout << "Eligible" << endl;
        else
            cout << "Not Eligible" << endl;
    }

    virtual ~StudentAttendance() {}
};

// Engineering Student
class EngineeringStudent : public StudentAttendance {
public:
    EngineeringStudent(string n, float a)
        : StudentAttendance(n, a) {}

    bool checkEligibility() override {
        return attendance >= 75;
    }
};

// Arts Student
class ArtsStudent : public StudentAttendance {
public:
    ArtsStudent(string n, float a)
        : StudentAttendance(n, a) {}

    bool checkEligibility() override {
        return attendance >= 65;
    }
};

// Science Student
class ScienceStudent : public StudentAttendance {
public:
    ScienceStudent(string n, float a)
        : StudentAttendance(n, a) {}

    bool checkEligibility() override {
        return attendance >= 70;
    }
};

int main() {
    // Array of base class pointers
    StudentAttendance* students[3];

    students[0] = new EngineeringStudent("Rahul", 78);
    students[1] = new ArtsStudent("Anita", 62);
    students[2] = new ScienceStudent("Vikram", 72);

    cout << "Attendance Eligibility Status:\n";

    for (int i = 0; i < 3; i++) {
        students[i]->displayStatus();
    }

    // Free memory
    for (int i = 0; i < 3; i++) {
        delete students[i];
    }

    return 0;
}
