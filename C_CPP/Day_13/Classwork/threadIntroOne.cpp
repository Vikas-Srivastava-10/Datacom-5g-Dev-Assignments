/*
 *	Sequential execution
 *
 */

#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void fun() {
    cout << "fun() called" << endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
}

int main() {
    fun();
    fun();
    fun();
    fun();
    fun();
}
