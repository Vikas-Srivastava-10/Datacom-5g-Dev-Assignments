/*
Purpose - Create a generic 2D matrix class template in C++ that supports:
Storing 2D matrix elements of any type.
Adding two matrices using an add() method.
Displaying the matrix using display().
Handles invalid size exceptions for safe operations.
 *  Date: 07/01/2026
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
*/

#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

template <typename T>
class MyStack {
    vector<T> data;
public:
    void push(T value) {
        data.push_back(value);
    }

    void pop() {
        if (data.empty()) throw out_of_range("Stack is empty");
        data.pop_back();
    }

    T top() {
        if (data.empty()) throw out_of_range("Stack is empty");
        return data.back();
    }

    bool isEmpty() {
        return data.empty();
    }
};

// Demo
int main() {
    MyStack<int> stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    while (!stack.isEmpty()) {
        cout << "Top: " << stack.top() << endl;
        stack.pop();
    }
}
