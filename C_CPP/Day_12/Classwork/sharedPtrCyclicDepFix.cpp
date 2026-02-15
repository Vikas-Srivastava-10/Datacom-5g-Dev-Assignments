// Purpose - Write a program to demonstrate breaking circular references using weak_ptr in C++, allowing objects with mutual references to be properly destroyed.
#include <iostream>
#include <memory>
using namespace std;

struct B;

struct A{
	shared_ptr<B> b;
	~A(){cout<<"~A()"<<endl; }
};

struct B{
	weak_ptr<A> a;// weak pointer
	~B(){cout<<"~B()"<<endl; }
};


int main(){
	shared_ptr<A> objA(new A());
	shared_ptr<B> objB(new B());

	objA->b = objB;
	objB->a = objA;
}//destructors are not called
