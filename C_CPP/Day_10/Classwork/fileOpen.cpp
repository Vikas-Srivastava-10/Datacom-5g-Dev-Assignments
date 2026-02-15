
// Purpose - Write a program to write data to a text file in C++ using ofstream.

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream fobj("fileOut.txt");
	fobj<<"Sending data into the file"<<endl;
}
