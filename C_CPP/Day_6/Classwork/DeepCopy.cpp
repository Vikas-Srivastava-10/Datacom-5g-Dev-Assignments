#include <iostream>
#include <cstring>
using namespace std;

class Resource {
public:
    char* ptr;

    // Constructor
    Resource(const char* str) {
        ptr = new char[strlen(str) + 1];
        strcpy(ptr, str);
        cout << "Memory allocated: " << ptr << endl;
    }

    // Deep Copy Constructor
    Resource(const Resource& other) {
        ptr = new char[strlen(other.ptr) + 1];
        strcpy(ptr, other.ptr);
        cout << "Deep copy created: " << ptr << endl;
    }

    // Destructor
    ~Resource() {
        cout << "Deleting memory: " << ptr << endl;
        delete[] ptr;
    }
};

int main() {
    Resource r1("Network");
    Resource r2 = r1;   // Deep copy now

    return 0;
}