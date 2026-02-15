
// Purpose - Write a program to read a text file line by line in C++ and display its contents on the console using ifstream and getline().

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream fobj("ioThree.cpp");
	string str;
	while (getline(fobj,str)) //word by word
		cout<<str<<endl;	

}
