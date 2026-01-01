/*
 *  Purpose: Area Calculator(function overloading).
 *  Date: 26/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 *
 */

 #include <iostream>
using namespace std;

/* Area of Square */
double area(double side) {
    return side * side;
}

/* Area of Rectangle */
double area(double length, double breadth) {
    return length * breadth;
}

/* Area of Circle */
double area(float radius) {
    return 3.14159 * radius * radius;
}

int main() {
    cout << "Area of Square (side = 5): " << area(5.0) << endl;
    cout << "Area of Rectangle (4 x 6): " << area(4.0, 6.0) << endl;
    cout << "Area of Circle (radius = 3): " << area(3.0f) << endl;

    return 0;
}
