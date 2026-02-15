/*
 Purpose - Write a program to implement a dynamic array class in C++ that allocates memory dynamically, with exception handling for invalid sizes to ensure safe memory management.
 *  Date: 06/01/2026
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
*/

#include <iostream>
#include <stdexcept>  // for std::invalid_argument
using namespace std;

class DynArray {
    int* arr;
    int size;

public:
    // Constructor
    DynArray(int n) {
        if (n <= 0) {
            throw invalid_argument("Size must be greater than 0");
        }
        size = n;
        arr = new int[size];
    }

    // Destructor
    ~DynArray() {
        delete[] arr;
    }

    // Set value at index
    void set(int index, int value) {
        if (index < 0 || index >= size)
            throw out_of_range("Index out of range");
        arr[index] = value;
    }

    // Get value at index
    int get(int index) {
        if (index < 0 || index >= size)
            throw out_of_range("Index out of range");
        return arr[index];
    }

    // Display array
    void display() {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    try {
        DynArray arr(5);  // valid
        for (int i = 0; i < 5; i++)
            arr.set(i, i + 1);

        arr.display();

        // Uncomment to test exception
        // DynArray arr2(0);

    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
}
