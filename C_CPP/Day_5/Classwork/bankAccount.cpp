//mplement the class BankAccount with the given data and methods.
#include <iostream>
using namespace std;
class BankAccount {
    int accountNumber;
    string accountHolder;
    double balance;
public:
    // Set account details
    void setAccount(int accNo, string name, double bal) {
        accountNumber = accNo;
        accountHolder = name;
        balance = bal;
    }
    // Deposit money
    void deposit(double amount) {
        if (amount > 0)
            balance += amount;
    }
    // Withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance\n";
    }
    // Display balance
    void displayBalance() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main() {
  BankAccount acc;
    acc.setAccount(101, "Rahul", 5000);
    acc.deposit(2000);
    acc.withdraw(1500);
    acc.displayBalance();

    return 0;
}