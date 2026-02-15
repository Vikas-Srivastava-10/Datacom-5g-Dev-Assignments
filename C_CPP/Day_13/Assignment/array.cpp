/*
Purpose - Create an array of 100 elements(global or static array), create 5 threads from main, fill the array elements where each thread fills 20 elements only.
 *  Date: 08/01/2026
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
*/

#include <iostream>
#include <thread>

int arr[100];  // global array

void fillArray(int start, int end, int value) {
    for (int i = start; i < end; i++) {
        arr[i] = value;
    }
}

int main() {
    std::thread t1(fillArray, 0, 20, 1);
    std::thread t2(fillArray, 20, 40, 2);
    std::thread t3(fillArray, 40, 60, 3);
    std::thread t4(fillArray, 60, 80, 4);
    std::thread t5(fillArray, 80, 100, 5);

    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();

    // Print array
    for (int i = 0; i < 100; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
