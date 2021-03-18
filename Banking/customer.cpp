//customer.cpp 
#include "customer.h"

Customer::Customer()
{
	accountID="";
		name= "";
}

Customer::Customer(string ID, string n)
{
	accountID=ID;
	name=n;
}

void Customer::view()
{
	cout<<"Name: " <<name <<endl;
	cout <<"Account #: " <<accountID <<endl;
}

Customer Customer::operator=(const Customer&c)
{
	Customer temp = *this;
	temp.accountID= c.accountID;
	temp.name = c.name;

	return temp;
}