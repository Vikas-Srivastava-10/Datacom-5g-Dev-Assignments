#include <iostream>
#include <cstring> //C string.h file 
using namespace std;
class Employee{
	private:
		int id;
		char name[25];
		double sal;
	public:
		Employee(){
			cout<<"Enter ID, name and Sal: ";
			cin>>id>>name>>sal;
		}
		Employee(int n, const char na[], double s){
			id = n;
			strcpy(name, na);
			sal = s;
		} 
		void dispDetails(){
			cout<<"Employee Details ID: "<<id<<"\tName: "<<name<<"\tSal: "<<sal<<endl; 
		}
};//blue print of an object
int main(){
	Employee varOne(10001, "Vikas Srivastava", 12000.00);
	varOne.dispDetails();
}


