/*
 *  Purpose: Find Min & Max of an Array
 *  Date: 26/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 *
 */

#include <iostream>
using namespace std;

/* Find minimum and maximum using reference variables */
void findMinMax(int *arr, int size, int &min, int &max) {
    min = max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
}

int main() {
    int arr[] = {12, 45, 7, 89, 23};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min, max;

    findMinMax(arr, size, min, max);

    cout << "Minimum = " << min << endl;
    cout << "Maximum = " << max << endl;

    return 0;
}
