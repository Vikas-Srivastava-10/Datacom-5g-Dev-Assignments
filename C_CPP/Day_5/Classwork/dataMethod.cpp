//Implement the class Num with the given data and methods.
#include <iostream>
using namespace std;
class Num {
    int num;
public:
    // Set number with default value
    void setNum(int n = 10) {
        num = n;
    }
    // Display number
    void dispNum() {
        cout << "Number = " << num << endl;
    }
    // Check even
    bool isEven() {
        return num % 2 == 0;
    }
    // Check prime
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
  Num n;
    n.setNum(17);
    n.dispNum();
    cout << "Even: " << (n.isEven() ? "Yes" : "No") << endl;
    cout << "Prime: " << (n.isPrime() ? "Yes" : "No") << endl;

    cout << endl;

    return 0;
}