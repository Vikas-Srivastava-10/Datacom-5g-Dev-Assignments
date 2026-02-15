
// Purpose - Write a program to write an object of a class to a binary file in C++, demonstrating binary file output using ofstream.

#include <iostream>
#include <fstream>
#include <cstring>
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
	Employee emps = Employee(1101,"Karthik", 15000.45);

	ofstream fObj("myData.dat", ios::binary);


	fObj.write((char *) &emps, sizeof(emps));
	emps.disp();
}


