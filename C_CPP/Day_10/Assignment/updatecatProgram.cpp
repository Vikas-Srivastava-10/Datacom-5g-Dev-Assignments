/*
Purpose - 2. Update your own cat program, which will take -n option and file name as an arguments and print the contents of the file on the screen along with the line numbers.
 *  Date: 05/01/2026
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
*/

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 3 || string(argv[1]) != "-n") {
        cout << "Usage: ./cat -n <filename>" << endl;
        return 1;
    }

    ifstream file(argv[2]);
    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string line;
    int lineNo = 1;

    while (getline(file, line)) {
        cout << lineNo++ << "  " << line << endl;
    }

    file.close();
    return 0;
}
