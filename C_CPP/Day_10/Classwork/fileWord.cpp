
// Purpose - Write a program to read a text file word by word in C++ using ifstream and the extraction operator (>>) and display the words on the console.

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream fobj("ioThree.cpp");
	string str;
	while (fobj>>str) //word by word
		cout<<str<<" ";	

}
