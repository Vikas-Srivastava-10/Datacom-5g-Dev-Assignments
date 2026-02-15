/*
Purpose - 3. Implement your wc program, which takes in file name as an argument and print number of lines, number of words and number of characters present in the file along with the file name command Prompt $ ./wc ioOne.cpp 9 16 100 ioOne.cpp here 9 lines, 16 words and 100 characters.
 *  Date: 05/01/2026
 *  Author: Vikas Srivastava
 *  ID: 55984
 *  Batch ID : 25SUB4505
*/

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cout << "Usage: ./wc <filename>" << endl;
        return 1;
    }

    ifstream file(argv[1]);
    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    int lines = 0, words = 0, chars = 0;
    string word;
    char ch;

    // Count characters and lines
    while (file.get(ch)) {
        chars++;
        if (ch == '\n')
            lines++;
    }

    // Reset file pointer
    file.clear();
    file.seekg(0, ios::beg);

    // Count words
    while (file >> word) {
        words++;
    }

    file.close();

    cout << lines << " " << words << " " << chars << " " << argv[1] << endl;
    return 0;
}
