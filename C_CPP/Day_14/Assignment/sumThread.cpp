
/*
Purpose - Sum of Numbers with Mutex
Focus: Proper placement of mutex lock ensures the sum is updated safely across threads.
 *  Date: 09/01/2026
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
*/


#include <iostream>
#include <thread>
#include <mutex>

int sum = 0;
std::mutex mtx;

// Using lock_guard
void add_with_lock_guard(int start, int end) {
    for (int i = start; i <= end; ++i) {
        std::lock_guard<std::mutex> lock(mtx);
        sum += i;
    }
}

// Using unique_lock
void add_with_unique_lock(int start, int end) {
    for (int i = start; i <= end; ++i) {
        std::unique_lock<std::mutex> lock(mtx);
        sum += i;
        // lock released automatically when going out of scope
    }
}

int main() {
    std::thread t1(add_with_lock_guard, 1, 1000);
    std::thread t2(add_with_unique_lock, 1, 1000);
    std::thread t3(add_with_lock_guard, 1, 1000);

    t1.join();
    t2.join();
    t3.join();

    std::cout << "Final sum: " << sum << std::endl;
    return 0;
}
