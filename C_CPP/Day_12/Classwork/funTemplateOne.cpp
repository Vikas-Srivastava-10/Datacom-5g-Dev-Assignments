// Purpose - Write a program to demonstrate a function template in C++ handling arguments of different data types using a single generic function.
#include <iostream>
using namespace std;

template <typename DT>
void fun(DT var){
	cout<<"var: "<<var<<endl;
}

int main(){
	fun(10);// int argument passed
	fun('A');// char argument passed
	fun(10.234f);// Float argument passed
	fun(10.234);// double argument passed
	fun("C Style String");// const char * argument passed
}
