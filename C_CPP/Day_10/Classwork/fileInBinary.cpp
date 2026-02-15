
// Purpose - Write a program to read a binary file into an object of a class in C++ and display the object’s data, demonstrating default initialization and file input using ifstream.

#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

class Employee{
	int id;
	char name[40];
	double sal;
public:
	Employee(int num=1001, const char *na="Sample #1", double sa = 15000.05):id(num), sal(sa){
		strcpy(name, na);
	}
	void disp(){
		cout<<"Output Num: "<<id<<"\tName: "<<name<<"\tSal: "<<sal<<endl; 
	}
};

int main(){
	Employee emps; 

	emps.disp(); //default values 

	ifstream fObj("myData.dat", ios::binary);

	if (fObj){
		fObj.read((char *)&emps, sizeof(emps));
		emps.disp();
	}
}


