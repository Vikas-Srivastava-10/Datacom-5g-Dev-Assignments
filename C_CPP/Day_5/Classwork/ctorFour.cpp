#include <iostream>
using namespace std;

class Test{
	public:
		Test(){}
		Test(int x){}
		Test(const Test &){}
};

int main(){
	Test objTwo;
	Test obj=100; //single parameterized ctor
	Test objOne = obj; //copy ctor
	cout<<"In main()"<<endl;
}

