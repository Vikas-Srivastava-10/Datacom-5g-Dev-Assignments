/*
 *  Purpose: This code demonstrates how to design a custom string class in C++ using dynamic memory allocation while safely implementing deep copy to avoid   memory issues.
 *  Date: 29/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 *
 */


#include <iostream>
#include <cstring>
using namespace std;

class MyString {
private:
    char *data;           // stores null terminated string
    unsigned int len;     // stores length

public:
    // 1️ Default Constructor – creates empty string
    MyString() {
        len = 0;
        data = new char[1];
        data[0] = '\0';
    }

    // 2️ Single Parameterized Constructor
    MyString(const char *str) {
        if (str == nullptr) {
            len = 0;
            data = new char[1];
            data[0] = '\0';
        } else {
            len = strlen(str);
            data = new char[len + 1];
            strcpy(data, str);
        }
    }

    // 3️ Copy Constructor – Deep Copy
    MyString(const MyString &other) {
        len = other.len;
        data = new char[len + 1];
        strcpy(data, other.data);
    }

    // 4️ Destructor – release memory
    ~MyString() {
        delete[] data;
    }

    // returns length
    unsigned int size() const {
        return len;
    }

    // returns string data
    const char* cStr() const {
        return data;
    }

    // prints length and data
    void disp() const {
        cout << "Length: " << len << endl;
        cout << "Data  : " << data << endl;
    }
};

//  Main function for testing
int main() {
    MyString s1;                 // default constructor
    MyString s2("Hello World");  // parameterized constructor
    MyString s3 = s2;            // copy constructor (deep copy)

    cout << "s1:" << endl;
    s1.disp();

    cout << "\ns2:" << endl;
    s2.disp();

    cout << "\ns3 (copy of s2):" << endl;
    s3.disp();

    return 0;
}
