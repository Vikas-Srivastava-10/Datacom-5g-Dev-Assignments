#include <iostream>
using namespace std;

void fun(int *);

int main(){
	int var = 10;//variable of main()
	cout<<"Before Var: "<<var<<endl;
	fun(&var);	
	cout<<"After Var: "<<var<<endl;
}

void fun(int *arg) //formal arguments
{
	*arg += 100;	//*arg = *arg + 100
}
