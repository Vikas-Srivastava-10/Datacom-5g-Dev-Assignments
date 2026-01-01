#include <iostream>
using namespace std;

int main(){
	int *iPtr = new int(100);

	cout<<"Address: "<<iPtr<<"\t\tData: "<<*iPtr<<endl;

	delete iPtr;
}
