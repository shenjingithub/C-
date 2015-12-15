#include "stdio.h"
#include <string>

class transaction
{
public:
	transaction();
	
	virtual void logtransaction() const=0;

};
transaction::transaction()
{
	logtransaction(); 
}

class Buytransaction : public transaction
{
public:
	Buytransaction();
	virtual void logtransaction() const;

};

Buytransaction::Buytransaction()
{

}

void Buytransaction::logtransaction() const
{

	printf("log......");
}

int main()
{
	Buytransaction *bt=new Buytransaction();

	
return 0;
}