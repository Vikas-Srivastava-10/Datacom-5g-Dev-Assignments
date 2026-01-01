#include <iostream>
using namespace std;

class Test{
	public:
		Test() {
			cout<<"Test() ---> Constructor"<<endl;
		}
		~Test(){
			cout<<"~Test() ----> Destructor"<<endl;
		}
};

int main(){
	Test obj;
	cout<<"In main()"<<endl;
}

