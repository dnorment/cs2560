#include "Account.h"

Account::Account(double bal, double rate)
{
	balance = bal;
	interestRate = rate;
	monthlyDeposits = monthlyWithdrawals = monthlyServiceCharges = 0;
}

void Account::deposit(double amt)
{
	balance += amt;
}

void Account::withdraw(double amt)
{
	balance -= amt;
}

void Account::calcInt()
{
	double monthlyRate = interestRate / 1200; //interestRate is a %, not decimal
	balance *= (1 + monthlyRate);
}

void Account::monthlyProc()
{
	balance -= monthlyServiceCharges;
	calcInt();
	monthlyDeposits = monthlyWithdrawals = monthlyServiceCharges = 0;
}