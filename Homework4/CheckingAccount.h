#pragma once

#include "Account.h"

class CheckingAccount : public Account
{
public:
	CheckingAccount(double bal, double rate);
	void withdraw(double amt);
	void monthlyProc();
};