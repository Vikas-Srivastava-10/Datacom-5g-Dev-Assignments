//// Write a C program to declare 3 pointer variables of three different data types and initialize them with their respective variable address. Try copying one type of pointer to another without typecasting.

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 3.14f;
    char c = 'A';

    int* p1 = &a;
    float* p2 = &b;
    char* p3 = &c;

    // Try copying pointer of one type to another
    // p1 = p2;   // ❌ ERROR in C++
    // p2 = p3;   // ❌ ERROR in C++

    cout << *p1 << endl;
    cout << *p2 << endl;
    cout << *p3 << endl;

    return 0;
}
