/*
 *  Purpose: The purpose of this code is to demonstrate the Diamond Problem in C++ multiple inheritance.
 *  Date: 31/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 *
 */

 #include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;

    Person(string n = "Unknown") : name(n) {
        cout << "Person Constructor\n";
    }
};

class Student : public Person {
public:
    int rollNo;

    Student(string n = "Unknown", int r = 0)
        : Person(n), rollNo(r) {
        cout << "Student Constructor\n";
    }
};

class Employee : public Person {
public:
    int empId;

    Employee(string n = "Unknown", int e = 0)
        : Person(n), empId(e) {
        cout << "Employee Constructor\n";
    }
};

class Intern : public Student, public Employee {
public:
    Intern(string n, int r, int e)
        : Student(n, r), Employee(n, e) {
        cout << "Intern Constructor\n";
    }
};

int main() {
    Intern i("Vikas", 101, 5001);

    // No Ambiguous access
    // cout << i.name;   // ERROR

    //  Unambiguous access
    cout << "Student Person name  : " << i.Student::name << endl;
    cout << "Employee Person name : " << i.Employee::name << endl;

    cout << "\nObject Sizes:\n";
    cout << "Person   : " << sizeof(Person) << endl;
    cout << "Student  : " << sizeof(Student) << endl;
    cout << "Employee : " << sizeof(Employee) << endl;
    cout << "Intern   : " << sizeof(Intern) << endl;

    return 0;
}
