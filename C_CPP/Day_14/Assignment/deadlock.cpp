/*
Purpose - Deadlock Scenario and Fix
Focus: Shows deadlock scenario and proper fix using std::lock and unique_lock.
 *  Date: 09/01/2026
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
*/

#include <iostream>
#include <thread>
#include <mutex>

std::mutex m1, m2;

void thread_a_deadlock() {
    std::lock_guard<std::mutex> lock1(m1);
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::lock_guard<std::mutex> lock2(m2);
    std::cout << "Thread A completed" << std::endl;
}

void thread_b_deadlock() {
    std::lock_guard<std::mutex> lock1(m2);
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::lock_guard<std::mutex> lock2(m1);
    std::cout << "Thread B completed" << std::endl;
}

// Fix using std::lock
void thread_a_fixed() {
    std::unique_lock<std::mutex> lock1(m1, std::defer_lock);
    std::unique_lock<std::mutex> lock2(m2, std::defer_lock);
    std::lock(lock1, lock2);
    std::cout << "Thread A completed safely" << std::endl;
}

void thread_b_fixed() {
    std::unique_lock<std::mutex> lock1(m1, std::defer_lock);
    std::unique_lock<std::mutex> lock2(m2, std::defer_lock);
    std::lock(lock1, lock2);
    std::cout << "Thread B completed safely" << std::endl;
}

int main() {
    std::cout << "Demonstrating Deadlock Scenario (may hang)...\n";
    std::thread t1(thread_a_deadlock);
    std::thread t2(thread_b_deadlock);
    t1.join();
    t2.join();

    std::cout << "\nFixing Deadlock...\n";
    std::thread t3(thread_a_fixed);
    std::thread t4(thread_b_fixed);
    t3.join();
    t4.join();

    return 0;
}
