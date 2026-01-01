#include <iostream>
using namespace std;
class Base{
public:
	virtual	void funOne(){cout<<"Base::funOne()"<<endl; }
	virtual	void funTwo(){cout<<"Base::funTwo()"<<endl; }
	virtual	void funThree(){cout<<"Base::funThree()"<<endl; }
};
class Derived:public Base{
public:
	void funOne(){cout<<"Derived::funOne()"<<endl; }
	void funTwo(){cout<<"Derived::funTwo()"<<endl; }
	void funThree(){cout<<"Derived::funThree()"<<endl; }
};
using FPTR = void (*)();
void demoFun(Base *bPtr){ //Raw function call through pointers //Internal working
	long *vPtr = (long *)(bPtr);
	FPTR *vTable = ((FPTR *)*vPtr);
	vTable[0]();
	vTable[1]();
	vTable[2]();
	cout<<"******************************************\n";
}
void demoVirtFun(Base *bPtr){//normal function call achieving polymorphism
	bPtr->funOne();
	bPtr->funTwo();
	bPtr->funThree();
	cout<<"------------------------------------------\n";
}
int main(){
	Base bObj;
	Derived dObj;
	demoVirtFun(&bObj);
	demoVirtFun(&dObj);
}
