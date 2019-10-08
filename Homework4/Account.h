#pragma once

class Account
{
protected:
	double balance;
	int monthlyDeposits;
	int monthlyWithdrawals;
	double interestRate;
	double monthlyServiceCharges;
public:
	Account(double balance, double interestRate);
	virtual void deposit(double amt);
	virtual void withdraw(double amt);
	void calcInt();
	virtual void monthlyProc();
	double getBalance() { return balance; }
};