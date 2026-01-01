#include <iostream>
using namespace std;

class Base{
public:
	void funOne(){cout <<"Base::funOne()"<<endl; }
	void funTwo(){cout <<"Base::funTwo()"<<endl; }
};

class BaseOne:public Base{ };

class BaseTwo:public Base{ };

class Derived: public BaseOne, public BaseTwo{};

int main(){
	Derived d;
	d.BaseOne::funOne();
	d.BaseTwo::funTwo();
}
