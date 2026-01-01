#include <cstdio>
using namespace std;

void fun();
void funOne();

using FPTR = void (*)();

void funCaller(FPTR);

int main(){
	funCaller(fun);	
	funCaller(&funOne);
}

void fun(){
	printf("fun() called\n");
}

void funOne(){
	printf("funOne() called\n");
}

void funCaller(FPTR ptr){
	ptr();
}
