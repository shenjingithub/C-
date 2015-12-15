#include"stdio.h"
#include<string>
#include<iostream>
using namespace std;
class bitmap
{
public:
	bitmap(string&);
	~bitmap(){};
private:
	string* v;

};
bitmap::bitmap(string& p): v(&p)
{

};
 class widget
 {
 public:
	 widget(bitmap& p):bp(&p){};
	 ~widget();
	 widget& operator=(const widget&);
	 void print();

 private:

	 bitmap* bp;
 
 };

 widget::~widget()
 {
	 delete bp;
 
 }
 void widget::print()
 {
	printf("helloworld!");
 
 }
 widget& widget::operator=(const widget& wd)
 {
	 
	 bitmap* borig=bp;
	 bp=new bitmap(*wd.bp);
	 delete borig;
	 return *this;
 
 }
 void logcall(const string& name)
 {
	cout<<name<<endl;
 }
 class data
 {
 
 
 };
 class Customer
 {
 public:
	 Customer(){};
	 Customer(const string name):name(name){};
	~Customer(){};
	 Customer(const Customer&);
	 Customer& operator=(const Customer&);

 
 private:
	 std::string name;
	 data last;
 
 };

 

 Customer::Customer(const Customer& rch) :name(rch.name)
 {
	 logcall("Customer Copy constructor");
 }
 Customer& Customer::operator=(const Customer& rch)
 {
	 logcall("Customer Copy assignment operator");
	 name=rch.name;
	return *this;
 }

 class Customerchild : public Customer
 {
 public:
	 Customerchild(int i,string h1):priority(i),Customer(h1){};
	 ~Customerchild(){};
	 Customerchild(const Customerchild&);
	 Customerchild& operator=(const Customerchild&);
 
 private:
	 int priority;
 };
 
 Customerchild::Customerchild(const Customerchild& rch):priority(rch.priority),Customer(rch)
 {
 }
 Customerchild& Customerchild::operator=(const Customerchild& rch)
 {
	 priority=rch.priority;
	 Customer::operator=(rch);
	 return *this;
 }

 int main()
 {
	 string s1="shenjin";
	 Customer *c1;
	 Customer c2(s1);
	 c1=new Customer(string("hello"));
	 *c1=c2;
	 Customerchild c12(0,s1);
	 Customerchild c22(1,string(""));
	 c22=c12;
	 Customerchild c32(c12);
	 while(1);
	 
	 

	return 0;
 }