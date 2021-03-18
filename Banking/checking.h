//checking.h  
#ifndef CHECKING_H
#define CHECKING_H
#include <iostream>
#include <string>
#include <cmath>
#include "account.h"
using namespace std;

class Checking : public Account
{
protected:
	bool overdraftProtection;
public:
	Checking();
	Checking(const Customer&c, double bal,  bool ODP);
	virtual void makeDeposit(double deposit);
	virtual bool makeWithdrawal(double withdrawal, double balance);
	virtual void adjustBalance();
	virtual void view(); 
};
#endif