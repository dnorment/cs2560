#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include <iostream>
#include <string>

using namespace std;

void displayMenu()
{
	cout << endl << " 1) Deposit (savings)" << endl;
	cout << " 2) Deposit (checking)" << endl;
	cout << " 3) Withdraw (savings)" << endl;
	cout << " 4) Withdraw (checking)" << endl;
	cout << " 5) View balance (savings)" << endl;
	cout << " 6) View balance (checking)" << endl;
	cout << " 7) Next month" << endl;
	cout << " 8) Exit" << endl;
}

int main()
{
	cout << "Welcome to my banking program" << endl;

	string input;
	double b, r;

	try
	{
		//initialize SavingsAccount
		cout << endl << "Enter the balance for Savings account: ";
		getline(cin, input);
		b = stod(input);
		cout << "Enter the yearly interest rate % for Savings account: ";
		getline(cin, input);
		r = stod(input);
	}
	catch (std::invalid_argument)
	{
		cout << "Please restart the program and enter valid inputs." << endl;
		return 0;
	}
	SavingsAccount sa = SavingsAccount(b, r);

	try
	{
		//initialize CheckingAccount
		cout << endl << "Enter the balance for Checking account: ";
		getline(cin, input);
		b = stod(input);
		cout << "Enter the yearly interest rate % for Checking account: ";
		getline(cin, input);
		r = stod(input);
	}
	catch (std::invalid_argument)
	{
		cout << "Please restart the program and enter valid inputs." << endl;
		return 0;
	}
	CheckingAccount ca = CheckingAccount(b, r);

	int choice = 0;
	while (choice != 8)
	{
		displayMenu();
		do
		{
			cout << "Please enter a choice (1-8): ";
			getline(cin, input);
			choice = stoi(string(1,input[0]));
		} while (choice < 1 || choice > 8);
		double amt;
		switch (choice)
		{
		case 1: //deposit savings
			do
			{
				cout << "Enter an amount to deposit in savings: ";
				getline(cin, input);
				amt = stod(input);
			} while (amt <= 0);
			sa.deposit(amt);
			break;
		case 2: //deposit checking
			do
			{
				cout << "Enter an amount to deposit in checking: ";
				getline(cin, input);
				amt = stod(input);
			} while (amt <= 0);
			ca.deposit(amt);
			break;
		case 3: //withdraw savings
			do
			{
				cout << "Enter an amount to withdraw from savings: ";
				getline(cin, input);
				amt = stod(input);
			} while (amt <= 0);
			sa.withdraw(amt);
			break;
		case 4: //withdraw checking
			do
			{
				cout << "Enter an amount to withdraw from checking: ";
				getline(cin, input);
				amt = stod(input);
				ca.withdraw(amt);
			} while (amt <= 0);
			break;
		case 5: //view savings
			cout << "There is currently $" << sa.getBalance() << " in savings" << endl;
			break;
		case 6: //view checking
			cout << "There is currently $" << ca.getBalance() << " in checking" << endl;
			break;
		case 7: //pass month
			sa.monthlyProc();
			ca.monthlyProc();
			cout << "It is a new month" << endl;
			break;
		}
	}
	return 0;
}