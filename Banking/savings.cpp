//savings.cpp  
#include "savings.h"
#include "account.h"
using namespace std;


Savings::Savings()
{
	interestRate=0;
	Account::Account();
}

Savings::Savings(Customer &c, double bal, double IRate)
{
	interestRate=IRate;
	Account::Account(bal, c);
}

void Savings::makeDeposit(double deposit)//calls the base Account class' makeDeposit function, passing the user-supplied deposit amount as a parameter... No return value
{
	//double d =balance + deposit;
 Account::makeDeposit(deposit);
 
}

bool Savings::makeWithdrawal(double withdrawal, double balance)
{
		double ret = balance-withdrawal;
		if (ret<0)
			return false;
			Account::makeWithdrawal(withdrawal);
			return true;
}

void Savings::adjustBalance()
{
		double ret = balance*interestRate; 
		balance+=ret; 
}


void Savings::view()
{
	cout <<"Savings Account" <<endl;
	Account::view(); 
}