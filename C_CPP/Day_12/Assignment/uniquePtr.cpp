/*
Implement a dynamic array without classes using unique_ptr instead of raw pointers.
Dynamically allocates memory safely using unique_ptr.
Initializes array values automatically.
Prints array elements to the console.
Ensures automatic memory cleanup without explicit delete[].
Uses exception handling for invalid sizes.
 *  Date: 07/01/2026
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
*/

#include <iostream>
#include <memory>      // for std::unique_ptr
#include <stdexcept>   // for std::invalid_argument
using namespace std;

// Function to create and return a dynamic array using unique_ptr
unique_ptr<int[]> createArray(int size) {
    if (size <= 0) {
        throw invalid_argument("Size must be greater than 0");
    }

    // unique_ptr automatically manages memory
    unique_ptr<int[]> arr(new int[size]);

    // Initialize values (for example, 1 to size)
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    return arr;
}

int main() {
    try {
        int size;
        cout << "Enter size of array: ";
        cin >> size;

        unique_ptr<int[]> myArray = createArray(size);

        cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
            cout << myArray[i] << " ";
        }
        cout << endl;

        // No need to delete manually! unique_ptr cleans up automatically.
    }
    catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
}
