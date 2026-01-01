/*
 *  Purpose: Class Num (Using Constructor & Destructor).
 *  Date: 26/12/2025
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
 *
 */

 #include <iostream>
using namespace std;

class Num {
    int num;

public:
    // Constructor with default value
    Num(int n = 10) {
        num = n;
    }

    // Destructor
    ~Num() {
        // Destructor for demonstration
    }

    void dispNum() {
        cout << "Number = " << num << endl;
    }

    bool isEven() {
        return num % 2 == 0;
    }

    bool isPrime() {
        if (num < 2)
            return false;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0)
                return false;
        }
        return true;
    }
};
int main() {
Num n(17);
    n.dispNum();
    cout << "Even: " << (n.isEven() ? "Yes" : "No") << endl;
    cout << "Prime: " << (n.isPrime() ? "Yes" : "No") << endl;

    cout << endl;
    return 0;
}