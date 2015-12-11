#include "stdio.h"
#include <string>
using std::string;
class Sales_data
{
public:
	Sales_data(const Sales_data&);
	Sales_data& operator=(const Sales_data&);
	
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
}