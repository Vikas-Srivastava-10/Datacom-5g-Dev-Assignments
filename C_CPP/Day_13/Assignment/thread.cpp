/*
Purpose - Create 5 threads using vector to store thread objects. synchronize with main using join() with all 5 threads.
 *  Date: 08/01/2026
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505

*/

#include <iostream>
#include <thread>
#include <vector>

void worker(int id) {
    std::cout << "Thread " << id << " is running" << std::endl;
}

int main() {
    std::vector<std::thread> threads;

    for (int i = 1; i <= 5; i++) {
        threads.emplace_back(worker, i);
    }

    for (auto& t : threads) {
        t.join();
    }

    std::cout << "All threads completed" << std::endl;
    return 0;
}
