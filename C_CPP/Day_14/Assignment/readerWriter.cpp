/*
Purpose - Shared Resource Access Control (Readers-Writers)
Focus: std::shared_mutex allows multiple readers simultaneously but only one writer at a time.
 *  Date: 09/01/2026
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
*/

#include <iostream>
#include <thread>
#include <mutex>
#include <shared_mutex>
#include <vector>

std::shared_mutex rw_mutex; // Shared mutex for readers-writers
int shared_resource = 0;

void reader(int id) {
    std::shared_lock<std::shared_mutex> lock(rw_mutex); // shared lock
    std::cout << "Reader #" << id << " reads: " << shared_resource << std::endl;
}

void writer(int id) {
    std::unique_lock<std::shared_mutex> lock(rw_mutex); // exclusive lock
    shared_resource += 10;
    std::cout << "Writer #" << id << " updates resource to: " << shared_resource << std::endl;
}

int main() {
    std::vector<std::thread> threads;

    // 5 readers
    for (int i = 1; i <= 5; ++i) threads.emplace_back(reader, i);

    // 2 writers
    for (int i = 1; i <= 2; ++i) threads.emplace_back(writer, i);

    for (auto& t : threads) t.join();

    return 0;
}
