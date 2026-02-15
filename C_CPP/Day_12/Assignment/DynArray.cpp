/*
Implement a generic dynamic array class in C++ using templates that can hold elements of any type.
Supports multiple constructors: default, size-only, size+default value.
Includes a destructor for cleanup.
Provides a display() function to print the array elements.
 *  Date: 07/01/2026
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
*/  

#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
class DynArray {
    T* arr;
    int size;

public:
    // Default constructor
    DynArray() : arr(nullptr), size(0) {}

    // Parameterized constructor (single: size)
    DynArray(int n) {
        if (n <= 0) throw invalid_argument("Size must be > 0");
        size = n;
        arr = new T[size]{};
    }

    // Parameterized constructor (size + default value)
    DynArray(int n, T value) {
        if (n <= 0) throw invalid_argument("Size must be > 0");
        size = n;
        arr = new T[size];
        for (int i = 0; i < size; i++) arr[i] = value;
    }

    // Destructor
    ~DynArray() { delete[] arr; }

    // Display elements
    void display() {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

// Demo
int main() {
    DynArray<int> arr1(5);       // 5 default ints
    DynArray<double> arr2(4, 3.14); // 4 doubles with value 3.14

    cout << "arr1: "; arr1.display();
    cout << "arr2: "; arr2.display();
}
