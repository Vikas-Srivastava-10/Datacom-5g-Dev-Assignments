/*
Purpose - Employee Payroll System (Inheritance + Dynamic Binding) Problem Statement An organization has different types of employees such as FullTimeEmployee, PartTimeEmployee, and ContractEmployee. Every employee has an ID and name. Each employee type has a different salary calculation mechanism. Create a base class Employee with a virtual method calculateSalary(). Derived classes must override this method. Based on user choice, dynamically create an employee object, calculate the salary, and display it.
 *  Date: 02/01/2026
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
*/

#include <iostream>
using namespace std;

// Base class
class Employee {
protected:
    int empId;
    string name;

public:
    Employee(int id, string n) : empId(id), name(n) {}

    virtual void calculateSalary() = 0; // Pure virtual function

    virtual ~Employee() {} // Virtual destructor
};

// Derived class: Full-Time Employee
class FullTimeEmployee : public Employee {
private:
    double basicPay;
    double allowances;

public:
    FullTimeEmployee(int id, string n, double bp, double al)
        : Employee(id, n), basicPay(bp), allowances(al) {}

    void calculateSalary() override {
        double salary = basicPay + allowances;
        cout << "Full-Time Employee Salary: " << salary << endl;
    }
};

// Derived class: Part-Time Employee
class PartTimeEmployee : public Employee {
private:
    int hoursWorked;
    double payPerHour;

public:
    PartTimeEmployee(int id, string n, int h, double p)
        : Employee(id, n), hoursWorked(h), payPerHour(p) {}

    void calculateSalary() override {
        double salary = hoursWorked * payPerHour;
        cout << "Part-Time Employee Salary: " << salary << endl;
    }
};

// Derived class: Contract Employee
class ContractEmployee : public Employee {
private:
    double contractAmount;

public:
    ContractEmployee(int id, string n, double amt)
        : Employee(id, n), contractAmount(amt) {}

    void calculateSalary() override {
        cout << "Contract Employee Salary: " << contractAmount << endl;
    }
};

int main() {
    int choice, id;
    string name;

    cout << "Select Employee Type:\n";
    cout << "1. Full-Time Employee\n";
    cout << "2. Part-Time Employee\n";
    cout << "3. Contract Employee\n";
    cin >> choice;

    cout << "Enter Employee ID: ";
    cin >> id;
    cout << "Enter Employee Name: ";
    cin >> name;

    Employee* emp = nullptr;

    if (choice == 1) {
        double basicPay, allowances;
        cout << "Enter Basic Pay: ";
        cin >> basicPay;
        cout << "Enter Allowances: ";
        cin >> allowances;
        emp = new FullTimeEmployee(id, name, basicPay, allowances);
    }
    else if (choice == 2) {
        int hours;
        double rate;
        cout << "Enter Hours Worked: ";
        cin >> hours;
        cout << "Enter Pay Per Hour: ";
        cin >> rate;
        emp = new PartTimeEmployee(id, name, hours, rate);
    }
    else if (choice == 3) {
        double amount;
        cout << "Enter Contract Amount: ";
        cin >> amount;
        emp = new ContractEmployee(id, name, amount);
    }
    else {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    // Polymorphic call
    emp->calculateSalary();

    delete emp;
    return 0;
}
