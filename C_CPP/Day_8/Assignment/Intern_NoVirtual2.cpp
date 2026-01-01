/*
 *  Purpose: The purpose of this code is to demonstrate the Diamond Problem in C++ Virtual inheritance.
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

class Student : virtual public Person {
public:
    int rollNo;

    Student(int r = 0) : rollNo(r) {
        cout << "Student Constructor\n";
    }
};

class Employee : virtual public Person {
public:
    int empId;

    Employee(int e = 0) : empId(e) {
        cout << "Employee Constructor\n";
    }
};

class Intern : public Student, public Employee {
public:
    Intern(string n, int r, int e)
        : Person(n), Student(r), Employee(e) {
        cout << "Intern Constructor\n";
    }
};

int main() {
    Intern i("Vikas", 101, 5001);

    // ✅ No ambiguity
    cout << "\nName : " << i.name << endl;

    cout << "\nObject Sizes:\n";
    cout << "Person   : " << sizeof(Person) << endl;
    cout << "Student  : " << sizeof(Student) << endl;
    cout << "Employee : " << sizeof(Employee) << endl;
    cout << "Intern   : " << sizeof(Intern) << endl;

    return 0;
}
