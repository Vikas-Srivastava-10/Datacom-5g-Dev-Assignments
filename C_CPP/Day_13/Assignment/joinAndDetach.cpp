/*
Purpose - join & detach 
		Create 2 threads
			one thread is joined 
			one thread is detached
 *  Date: 08/01/2026
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
*/ 

#include <iostream>
#include <thread>
#include <chrono>

void joinedThread() {
    std::cout << "Hello world from joined thread" << std::endl;
}

void detachedThread() {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Hello world from detached thread" << std::endl;
}

int main() {
    std::thread t1(joinedThread);
    std::thread t2(detachedThread);

    t1.join();     // main waits
    t2.detach();  // main does NOT wait

    std::cout << "Hello world from main" << std::endl;

    // Give detached thread time to run
    std::this_thread::sleep_for(std::chrono::seconds(2));
    return 0;
}
