#pragma once

#include "Account.h"

class SavingsAccount : public Account
{
protected:
	bool status;
public:
	SavingsAccount(double bal, double rate);
	void withdraw(double amt);
	void deposit(double amt);
	void monthlyProc();
	bool isActive() { return status; }
};