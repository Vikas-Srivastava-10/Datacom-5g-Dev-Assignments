/*
Purpose - Print 1 to 10 
		a. passing function as argument 
		b. passing lambda as argument
 *  Date: 08/01/2026
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505

*/  

#include <iostream>
#include <thread>

void printNumbers() {
    for (int i = 1; i <= 10; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::thread t(printNumbers);
    t.join();
    return 0;
}
