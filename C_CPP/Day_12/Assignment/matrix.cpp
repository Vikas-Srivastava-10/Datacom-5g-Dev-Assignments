/*
Design a generic stack class in C++ using class templates.
Supports standard stack operations: push(), pop(), top(), isEmpty().
Uses std::vector internally for dynamic storage.
Demonstrates type-independent stack implementation for any data type.
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
class Matrix {
    vector<vector<T>> mat;
    int rows, cols;

public:
    // Constructor
    Matrix(int r, int c, T init = T()) : rows(r), cols(c) {
        if (r <= 0 || c <= 0) throw invalid_argument("Invalid size");
        mat.resize(rows, vector<T>(cols, init));
    }

    // Set element
    void set(int r, int c, T value) {
        mat.at(r).at(c) = value;
    }

    // Add two matrices
    Matrix<T> add(const Matrix<T>& other) {
        if (rows != other.rows || cols != other.cols)
            throw invalid_argument("Matrix sizes must match");
        Matrix<T> result(rows, cols);
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                result.mat[i][j] = mat[i][j] + other.mat[i][j];
        return result;
    }

    // Display matrix
    void display() {
        for (auto& row : mat) {
            for (auto& val : row) cout << val << " ";
            cout << endl;
        }
    }
};

// Demo
int main() {
    Matrix<int> m1(2, 2);
    Matrix<int> m2(2, 2, 5);

    m1.set(0, 0, 1);
    m1.set(0, 1, 2);
    m1.set(1, 0, 3);
    m1.set(1, 1, 4);

    cout << "Matrix 1:" << endl; m1.display();
    cout << "Matrix 2:" << endl; m2.display();

    Matrix<int> m3 = m1.add(m2);
    cout << "Sum:" << endl; m3.display();
}
