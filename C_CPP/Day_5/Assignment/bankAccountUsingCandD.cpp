/*
 *  Purpose: Class BankAccount (Using Constructor & Destructor).
 *  Date: 26/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 *
 */
 #include <iostream>
using namespace std;

class BankAccount {
    int accountNumber;
    string accountHolder;
    double balance;

public:
    // Constructor to initialize account
    BankAccount(int accNo, string name, double bal) {
        accountNumber = accNo;
        accountHolder = name;
        balance = bal;
    }

    // Destructor
    ~BankAccount() {
        // Destructor for demonstration
    }

    void deposit(double amount) {
        if (amount > 0)
            balance += amount;
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance\n";
    }

    void displayBalance() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main(){
 BankAccount acc(101, "Rahul", 5000);
    acc.deposit(2000);
    acc.withdraw(1500);
    acc.displayBalance();

    return 0;
}