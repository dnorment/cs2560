#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee()
{
	cout << "Enter name: ";
	string n;
	getline(cin, n);
	setName(n);
	cout << "Enter Id: ";
	getline(cin, n);
	if (n.length() > 6)
	{
		throw InvalidLengthException();
	}
	else
	{
		setId(n);
	}
}

void Employee::setName(string n)
{
	name = n;
}

void Employee::setId(string id)
{
	this->id = id;
}