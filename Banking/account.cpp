//account.cpp 
#include "account.h"
using namespace std;

Account::Account()
{
	balance = 0;
	Customer::Customer();
}

Account::Account(double bal, const Customer& c)
{
	balance = bal;
	Customer cust = c;
}

void Account::makeDeposit(double deposit)
{
	balance += deposit;
}

bool Account::makeWithdrawal(double withdrawal)
{
	balance-=withdrawal;
	return true;
}

double Account::getBalance()
{
	return balance;
}

void Account::view()
{
	cust.view();
	cout <<"Balance: $" <<balance <<endl;
}

void Account::adjustBalance()
{}