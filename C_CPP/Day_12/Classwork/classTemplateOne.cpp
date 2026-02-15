// Purpose - Write a program to demonstrate the use of class templates in C++ for handling different data types using a single generic class.
#include <iostream>
using namespace std;

template <typename T>
class Sample{
	T data;
public:
	Sample(T arg=T()):data(arg) {}
	void disp(){ cout<<"data: "<<data<<endl; }
};

int main(){
	Sample<int> iObj(100);
	Sample<double> dObj(10.234);
	Sample<string> sObj("Some string here");

	iObj.disp();
	dObj.disp();
	sObj.disp();
}
