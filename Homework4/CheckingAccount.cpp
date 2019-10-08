#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(double bal, double rate) : Account(bal, rate) {}

void CheckingAccount::withdraw(double amt)
{
	if (amt > balance)
	{
		monthlyServiceCharges += 15;
	}
	else
	{
		Account::withdraw(amt);
	}
}

void CheckingAccount::monthlyProc()
{
	monthlyServiceCharges += 5;
	monthlyServiceCharges += 0.1 * monthlyWithdrawals;
	Account::monthlyProc();
}