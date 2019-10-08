#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(double bal, double rate) : Account(bal, rate)
{
	status = bal >= 25;
}

void SavingsAccount::withdraw(double amt)
{
	if (status) Account::withdraw(amt);
}

void SavingsAccount::deposit(double amt)
{
	Account::deposit(amt);
	if (balance >= 25) status = true;
}

void SavingsAccount::monthlyProc()
{
	//add $1 charge per withdrawal over 3
	if (monthlyWithdrawals > 3)	monthlyServiceCharges += monthlyWithdrawals - 3;
	Account::monthlyProc();
}