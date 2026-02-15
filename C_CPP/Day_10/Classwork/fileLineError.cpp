
// Purpose - Write a program to open a text file in C++ with error checking, read it line by line, and display its contents on the console.

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	char fileName[] = "ioThree.txt";
	ifstream fobj(fileName);
	string str;
	if (!fobj){
		cout<<fileName<<" file NOT FOUND"<<endl;
		return 1;
	}

	while (getline(fobj,str)) //word by word
		cout<<str<<endl;	

}
