
// Purpose - Write a program to demonstrate the use of tellp() in C++, showing how to get the current write position in an output file stream.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("dataTest.txt");

    cout << "Initial position: " << fout.tellp() << endl;

    fout << "Hello";
    cout << "After writing 'Hello': " << fout.tellp() << endl;

    fout << " World";
    cout << "After writing ' World': " << fout.tellp() << endl;

    fout.close();
}

