//savings.h
#ifndef SAVINGS_H
#define SAVINGS_H
#include <string>
#include <iostream>
using namespace std;
#include "account.h"

class Savings : public Account
{
protected:
	double interestRate;
public:
	Savings();
	Savings(Customer &c, double bal, double IRate);
	virtual void makeDeposit(double deposit);
	virtual bool makeWithdrawal(double withdrawal, double balance);
	virtual void adjustBalance();
	virtual void view();
};
#endif