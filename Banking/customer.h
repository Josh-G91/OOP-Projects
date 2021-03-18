//customer.h  
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
using namespace std;
#include <string>
#include <cmath>


class Customer
{
private:
	string accountID;
	string name;
public:
	Customer();
	Customer(string ID, string n);
	void view();
	Customer operator=(const Customer&c);
};
#endif