// Purpose - Write a program to demonstrate a class template in C++ with member functions defined outside the class and its use with different data types.

#include <iostream>
using namespace std;

template <typename T>
class Sample{
	T data;
public:
	Sample(T arg=T()):data(arg) {}
	T getValue();
	void disp();
};

template<typename T>
T Sample<T>::getValue(){
	return data; 
}

template<typename T>
void Sample<T>::disp(){ 
	cout<<"data: "<<data<<endl;
}


int main(){
	Sample<int> iObj(100);
	Sample<double> dObj(10.234);
	Sample<string> sObj("Some string here");

	iObj.disp();
	dObj.disp();
	sObj.disp();

	cout<<"In main: "<<iObj.getValue()<<endl;
	cout<<"In main: "<<dObj.getValue()<<endl;
	cout<<"In main: "<<sObj.getValue()<<endl;
}
