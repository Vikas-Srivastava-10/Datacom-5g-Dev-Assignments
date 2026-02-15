/*
Purpose - Create a program that creates a single thread.
		Prints "Hello world from thread"
		Prints "Hello world from main"
 *  Date: 08/01/2026
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
*/

#include <iostream>
#include <thread>   // REQUIRED for std::thread

void threadFunction() {
    std::cout << "Hello world from thread" << std::endl;
}

int main() {
    std::thread t(threadFunction);
    t.join();  // wait for thread to finish

    std::cout << "Hello world from main" << std::endl;
    return 0;
}

