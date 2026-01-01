#include <iostream>
using namespace std;
namespace Mine{
	int var = 100;
	void fun();
}
namespace Yours{
	int var = 200;
	void fun();
}
namespace Ours{
	int var=300;
	void fun();
}
int var = 1000;
void fun();
int main(){
	cout<<"global Var: "<<::var<<endl; cout<<"Mine::var: "<<Mine::var<<endl;
	cout<<"Yours::var: "<<Mine::var<<endl;
	cout<<"Ours::var: "<<Mine::var<<endl;
	fun();
	Mine::fun();
	Yours::fun();
	Ours::fun();
}
void fun(){
	cout<<"void fun()...\n";
}
void Mine::fun(){
	cout<<"void Mine::fun()...\n";
}
void Yours::fun(){
	cout<<"void Yours::fun()...\n";
}
void Ours::fun(){
	cout<<"void Ours::fun()...\n";
}
