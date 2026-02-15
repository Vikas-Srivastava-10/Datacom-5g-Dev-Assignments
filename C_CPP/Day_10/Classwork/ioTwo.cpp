
// Purpose - Write a program to read a text file character by character in C++ using ifstream::get() and display its contents on the console.

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream fobj("ioThree.cpp");
	char ch;
	while ( fobj.get(ch))
		cout<<ch;	

}
