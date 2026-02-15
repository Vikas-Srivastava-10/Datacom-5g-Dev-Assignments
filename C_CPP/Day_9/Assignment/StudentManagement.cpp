/*
Puprose -Student Management System (Inheritance + Polymorphism) Problem Statement In a student management system, different types of students such as Undergraduate, Postgraduate, and ResearchStudent exist. Each student has a name and roll number. The system should calculate and display the final grade for each student based on their evaluation criteria. Implement inheritance by defining a base class Student containing common attributes and a virtual method calculateGrade(). Derived classes must override this method to calculate grades differently. The program should dynamically create a student object based on user input and display the calculated grade.
 *  Date: 02/01/2026
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505

*/

#include <iostream>
using namespace std;

// Base class
class Student {
protected:
    string name;
    int rollNo;

public:
    Student(string n, int r) : name(n), rollNo(r) {}

    virtual void calculateGrade() = 0; // Pure virtual function

    virtual ~Student() {} // Virtual destructor
};

// Derived class: Undergraduate
class Undergraduate : public Student {
private:
    int marks;

public:
    Undergraduate(string n, int r, int m)
        : Student(n, r), marks(m) {}

    void calculateGrade() override {
        cout << "Undergraduate Grade: ";
        if (marks >= 90)
            cout << "A" << endl;
        else if (marks >= 75)
            cout << "B" << endl;
        else if (marks >= 60)
            cout << "C" << endl;
        else
            cout << "D" << endl;
    }
};

// Derived class: Postgraduate
class Postgraduate : public Student {
private:
    int marks;

public:
    Postgraduate(string n, int r, int m)
        : Student(n, r), marks(m) {}

    void calculateGrade() override {
        cout << "Postgraduate Grade: ";
        if (marks >= 85)
            cout << "Distinction" << endl;
        else if (marks >= 70)
            cout << "Merit" << endl;
        else
            cout << "Pass" << endl;
    }
};

// Derived class: Research Student
class ResearchStudent : public Student {
private:
    int publications;

public:
    ResearchStudent(string n, int r, int p)
        : Student(n, r), publications(p) {}

    void calculateGrade() override {
        cout << "Research Student Grade: ";
        if (publications >= 5)
            cout << "Excellent" << endl;
        else if (publications >= 3)
            cout << "Good" << endl;
        else
            cout << "Satisfactory" << endl;
    }
};

int main() {
    int choice;
    cout << "Select Student Type:\n";
    cout << "1. Undergraduate\n2. Postgraduate\n3. Research Student\n";
    cin >> choice;

    string name;
    int rollNo;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Roll Number: ";
    cin >> rollNo;

    Student* student = nullptr;

    if (choice == 1) {
        int marks;
        cout << "Enter Marks: ";
        cin >> marks;
        student = new Undergraduate(name, rollNo, marks);
    }
    else if (choice == 2) {
        int marks;
        cout << "Enter Marks: ";
        cin >> marks;
        student = new Postgraduate(name, rollNo, marks);
    }
    else if (choice == 3) {
        int publications;
        cout << "Enter Number of Publications: ";
        cin >> publications;
        student = new ResearchStudent(name, rollNo, publications);
    }
    else {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    // Polymorphic call
    student->calculateGrade();

    delete student;
    return 0;
}
