#include "stdio.h"
#include <string>
#include <iostream>
using std::string;
class Sales_data
{
public:
	Sales_data(const Sales_data&);
	Sales_data& operator=(const Sales_data&);
	Sales_data(){};
	string bookID;
	
private:
	string bookNo;
	int units_sold;
	double revenue;
};


Sales_data::Sales_data(const Sales_data& orig):bookNo(orig.bookNo),units_sold(orig.units_sold),revenue(orig.revenue){}

Sales_data& Sales_data::operator=(const Sales_data& orig)
{
	bookNo=orig.bookNo;
	units_sold=orig.units_sold;
	revenue=orig.revenue;
	return *this;
}

class UNCopyable
{
private:
	UNCopyable(const UNCopyable&);
	UNCopyable& operator=(const UNCopyable&);
protected:
	UNCopyable(){};
	~UNCopyable(){};

};


class HELLO : private UNCopyable
{
public:
	HELLO(){};
	~HELLO(){};
	
};

int main()
{
	HELLO hello,s2;
	s2=hello;
	Sales_data s1;
	s1.bookID="hello world";
	char s3[]="hello!";
	std::cin>>s3;
	std::cout<<"s1.bookID"<<s1.bookID<<s3;


return 0;
}