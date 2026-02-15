/*
Purpose - Printing ID of the thread.
		Create 3 threads so that they can 
			print its own thread ID using 
 *  Date: 08/01/2026
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505

*/

#include <iostream>
#include <thread>

void printThreadID() {
    std::cout << "Thread ID: " << std::this_thread::get_id() << std::endl;
}

int main() {
    std::thread t1(printThreadID);
    std::thread t2(printThreadID);
    std::thread t3(printThreadID);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}
