/*
 *  Purpose: Swap 2 Values.
 *  Date: 26/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 *
 */
 #include <iostream>
using namespace std;

/* Swap using pointers */
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* Swap using references */
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;

    cout << "Before swap (Pointer): x = " << x << ", y = " << y << endl;
    swap(&x, &y);
    cout << "After swap  (Pointer): x = " << x << ", y = " << y << endl;

    int p = 30, q = 40;
    cout << "\nBefore swap (Reference): p = " << p << ", q = " << q << endl;
    swap(p, q);
    cout << "After swap  (Reference): p = " << p << ", q = " << q << endl;

    return 0;
}
