/*
Purpose - Printing Series of Values (Synchronized Output)
Focus: std::mutex synchronizes console output, preventing interleaved printing.
 *  Date: 09/01/2026
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
*/

#include <iostream>
#include <thread>
#include <mutex>

std::mutex cout_mtx;

void print_series(int thread_id) {
    std::lock_guard<std::mutex> lock(cout_mtx);
    std::cout << "Thread #" << thread_id << ": ";
    for (int i = 1; i <= 10; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::thread t1(print_series, 1);
    std::thread t2(print_series, 2);
    std::thread t3(print_series, 3);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}
