/*
Purpose - Student Record Management Create a binary file–based program to manage student records. Each record contains: Roll number Name Marks Operations: Create (add student) Read (display all students) Update marks of a student using roll number Delete a student record Requirements: Use a class Store objects directly in a binary file Use file pointers (seekg, seekp)
 *  Date: 05/01/2026
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
*/

#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int roll;
    char name[30];
    float marks;

    void input() {
        cout << "Enter Roll Number: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << roll << "\t" << name << "\t" << marks << endl;
    }
};

// Add student record
void addStudent() {
    Student s;
    ofstream file("students.dat", ios::binary | ios::app);

    s.input();
    file.write((char*)&s, sizeof(s));

    file.close();
    cout << "Student record added successfully.\n";
}

// Display all records
void displayStudents() {
    Student s;
    ifstream file("students.dat", ios::binary);

    cout << "\nRoll\tName\tMarks\n";
    cout << "------------------------\n";

    while (file.read((char*)&s, sizeof(s))) {
        s.display();
    }

    file.close();
}

// Update marks using roll number
void updateMarks() {
    Student s;
    int rollNo;
    bool found = false;

    fstream file("students.dat", ios::binary | ios::in | ios::out);

    cout << "Enter Roll Number to update: ";
    cin >> rollNo;

    while (file.read((char*)&s, sizeof(s))) {
        if (s.roll == rollNo) {
            cout << "Enter New Marks: ";
            cin >> s.marks;

            // Move write pointer back
            file.seekp(-sizeof(s), ios::cur);
            file.write((char*)&s, sizeof(s));

            found = true;
            break;
        }
    }

    file.close();

    if (found)
        cout << "Record updated successfully.\n";
    else
        cout << "Record not found.\n";
}

// Delete student record
void deleteStudent() {
    Student s;
    int rollNo;
    bool found = false;

    ifstream file("students.dat", ios::binary);
    ofstream temp("temp.dat", ios::binary);

    cout << "Enter Roll Number to delete: ";
    cin >> rollNo;

    while (file.read((char*)&s, sizeof(s))) {
        if (s.roll != rollNo) {
            temp.write((char*)&s, sizeof(s));
        } else {
            found = true;
        }
    }

    file.close();
    temp.close();

    remove("students.dat");
    rename("temp.dat", "students.dat");

    if (found)
        cout << "Record deleted successfully.\n";
    else
        cout << "Record not found.\n";
}

int main() {
    int choice;

    do {
        cout << "\n--- Student Record Management ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Update Marks\n";
        cout << "4. Delete Student\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1: addStudent(); break;
        case 2: displayStudents(); break;
        case 3: updateMarks(); break;
        case 4: deleteStudent(); break;
        case 5: cout << "Exiting...\n"; break;
        default: cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}
