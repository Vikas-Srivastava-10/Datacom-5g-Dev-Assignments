/*
Purpose - Array Operations System (Abstract Behavior via Inheritance) Problem Statement An array processing system supports different types of arrays such as IntegerArray, FloatArray, and StringArray. Each array type performs operations like insert elements and display elements. Define a base class ArrayBase with virtual methods insert() and display(). Derived classes must override these methods to handle different data types. The program should dynamically create an array object based on user input and perform operations.
 *  Date: 02/01/2026
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
*/

#include <iostream>
#include <string>
using namespace std;

// Base class
class ArrayBase {
public:
    virtual void insert() = 0;   // Pure virtual function
    virtual void display() = 0;  // Pure virtual function
    virtual ~ArrayBase() {}
};

// Integer Array
class IntegerArray : public ArrayBase {
private:
    int arr[5];

public:
    void insert() override {
        cout << "Enter 5 integer elements:\n";
        for (int i = 0; i < 5; i++) {
            cin >> arr[i];
        }
    }

    void display() override {
        cout << "Integer Array Elements: ";
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// Float Array
class FloatArray : public ArrayBase {
private:
    float arr[5];

public:
    void insert() override {
        cout << "Enter 5 float elements:\n";
        for (int i = 0; i < 5; i++) {
            cin >> arr[i];
        }
    }

    void display() override {
        cout << "Float Array Elements: ";
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// String Array
class StringArray : public ArrayBase {
private:
    string arr[5];

public:
    void insert() override {
        cout << "Enter 5 strings:\n";
        for (int i = 0; i < 5; i++) {
            cin >> arr[i];
        }
    }

    void display() override {
        cout << "String Array Elements: ";
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int choice;
    ArrayBase* arrObj = nullptr;

    cout << "Select Array Type:\n";
    cout << "1. Integer Array\n";
    cout << "2. Float Array\n";
    cout << "3. String Array\n";
    cin >> choice;

    if (choice == 1)
        arrObj = new IntegerArray();
    else if (choice == 2)
        arrObj = new FloatArray();
    else if (choice == 3)
        arrObj = new StringArray();
    else {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    // Polymorphic calls
    arrObj->insert();
    arrObj->display();

    delete arrObj;
    return 0;
}
