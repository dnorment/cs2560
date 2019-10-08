/**
 * @author Daniel Norment
 * @author Augustin Viju
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Address
{
	string city;
	string state;
	int zip;
};

struct Date
{
	int day;
	string month;
	int year;
};

struct Customer
{
	string name;
	Address address;
	int phoneNumber;
	double accountBalance;
	Date lastPayment;
};

int main()
{
	vector<Customer> customers(1);
	int choice;
	do
	{
		cout << endl << "1. Add a new customer" << endl;
		cout << "2. View all customers" << endl;
		cout << "0. Exit" << endl;
		cout << "Please enter a choice: ";
		cin >> choice;

		if (choice == 1)
		{
			string name;
			string city;
			string state;
			int zip;
			int phone;
			double accountBalance;
			int day;
			string month;
			int year;
			cout << "Enter a customer name: ";
			cin.ignore();
			getline(cin, name);
			cout << "Enter the city: ";
			getline(cin, city);
			cout << "Enter the state: ";
			getline(cin, state);
			cout << "Enter the zip code: ";
			cin >> zip;
			cout << "Enter the phone (no dashes): ";
			cin >> phone;
			cout << "Enter the account balance: ";
			cin >> accountBalance;
			cout << "Enter the year of last payment: ";
			cin >> year;
			cout << "Enter the month of last payment: ";
			cin.ignore();
			getline(cin, month);
			cout << "Enter the day of last payment: ";
			cin >> day;
			Address address = {city, state, zip};
			Date date = {day, month, year};
			Customer cust = {name, address, phone, accountBalance, date};
			if (customers[0].name == "")
			{
				customers[0] = cust;
			}
			else
			{
				customers.push_back(cust);
			}
		}

		if (choice == 2)
		{
			if (customers.size() == 0)
			{
				cout << "The system contains no customers" << endl;
			}
			else
			{
				for (unsigned int i = 0; i < customers.size(); i++)
				{
					cout << "Customer" << i + 1 << ": " << customers[i].name << endl;
				}
			}
			
		}
	}
	while (choice != 0);

	return 0;
}
