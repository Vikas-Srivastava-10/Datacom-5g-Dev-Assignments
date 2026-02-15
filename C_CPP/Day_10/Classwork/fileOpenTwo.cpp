
// Purpose - Write a program to append data to an existing text file in C++ using ofstream with ios::app mode.

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream fobj("fileOut.txt", ios::app);
	fobj<<"Sending data into the file"<<endl;
}
