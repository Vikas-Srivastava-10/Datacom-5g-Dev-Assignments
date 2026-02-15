/* 
Purpose - Write a program to implement a string class in C++ that allocates memory dynamically for character data, with exception handling for invalid string sizes to prevent errors.
 *  Date: 06/01/2026
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
*/
#include <iostream>
#include <cstring>
#include <stdexcept>
using namespace std;

class MyString {
    char* str;
    int length;

public:
    // Constructor
    MyString(const char* s = "") {
        if (!s) {
            throw invalid_argument("Null string not allowed");
        }
        length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
    }

    // Destructor
    ~MyString() {
        delete[] str;
    }

    // Display string
    void display() {
        cout << str << endl;
    }

    // Get length
    int getLength() {
        return length;
    }
};

int main() {
    try {
        MyString s1("Hello, World!");
        s1.display();
        cout << "Length: " << s1.getLength() << endl;

        // Uncomment to test exception
        // MyString s2(nullptr);

    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
}

