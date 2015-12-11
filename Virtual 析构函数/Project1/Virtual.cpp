#include "stdio.h"

class Base
{
public:
	Base(){}
	virtual ~Base()
	//Base()
	{
		printf("delete Base!\n");
	}
	virtual void dosomething()
	{
		printf("Base do something\n");
	}

};
class derived : public Base
{
public:
	derived(){}
	~derived()
	{
		printf("delete derived!\n");
	}
	virtual void dosomething()
	{
		printf("derived do something\n");
	}


};

int main()
{
	derived *p1=new derived();
	p1->dosomething();
	delete p1;

	Base *p2=new derived();
	p2->dosomething();
	delete p2;
	while(1);
	return 0;
}