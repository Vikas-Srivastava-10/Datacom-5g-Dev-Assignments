/*
Purpose - Bank Account Simulation
Focus: Mutex inside class ensures thread-safe deposits and withdrawals.
 *  Date: 09/01/2026
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
*/

#include <iostream>
#include <thread>
#include <mutex>
#include <vector>

class BankAccount {
private:
    int balance;
    std::mutex mtx;

public:
    BankAccount(int initial_balance) : balance(initial_balance) {}

    void deposit(int amount) {
        std::lock_guard<std::mutex> lock(mtx);
        balance += amount;
        std::cout << "Deposited: " << amount << ", Balance: " << balance << std::endl;
    }

    void withdraw(int amount) {
        std::lock_guard<std::mutex> lock(mtx);
        if (balance >= amount) {
            balance -= amount;
            std::cout << "Withdrew: " << amount << ", Balance: " << balance << std::endl;
        } else {
            std::cout << "Withdrawal of " << amount << " failed. Balance: " << balance << std::endl;
        }
    }

    int get_balance() {
        std::lock_guard<std::mutex> lock(mtx);
        return balance;
    }
};

int main() {
    BankAccount account(1000);

    std::vector<std::thread> threads;
    threads.emplace_back(&BankAccount::deposit, &account, 500);
    threads.emplace_back(&BankAccount::withdraw, &account, 200);
    threads.emplace_back(&BankAccount::withdraw, &account, 1500); // Should fail
    threads.emplace_back(&BankAccount::deposit, &account, 300);

    for (auto& t : threads) t.join();

    std::cout << "Final Balance: " << account.get_balance() << std::endl;
    return 0;
}
