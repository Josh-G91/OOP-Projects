//checking.cpp  
#include "checking.h"
const int servicecharge = 10;
const int minimum= 1000;

Checking::Checking()
{
	//Account::Account();
	overdraftProtection = false;
}

Checking::Checking(const Customer&c, double bal,  bool ODP)
{
	Account::Account(bal, c);
	overdraftProtection=ODP;
}

void Checking::makeDeposit(double deposit)
{
	double d = deposit;
	Account::makeDeposit(d);
}

bool Checking::makeWithdrawal (double withdrawal, double balance)
{
	double ret = balance-withdrawal;
		if (ret<0 && !overdraftProtection)
		{
			cout <<"Withdrawal not made -- balance too low and no overdraft protection" <<endl;
			return false;
		}
			Account::makeWithdrawal(withdrawal);
			return true;
	
}

void Checking::adjustBalance()
{
	if (balance<minimum)
		balance-=servicecharge;
	Account::adjustBalance();
}

void Checking::view()
{
		cout <<"Checking Account: " <<endl;
		Account::view(); 
}