//account.h  
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>
#include <cmath>
#include "customer.h"

class Account
{
protected:
	double balance;
	Customer cust;
public:
	Account();
	Account(double bal, const Customer &c);
	virtual void makeDeposit(double deposit);
	virtual bool makeWithdrawal (double withdrawal);
	double getBalance();
	virtual void view();
	virtual void adjustBalance();
};
#endif