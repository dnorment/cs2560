#include "Person.h"

Person::Person(string n, string e, int p)
{
	name = n;
	email = e;
	phoneNumber = p;
}

string Person::getName()
{
	return name;
}

string Person::getEmail()
{
	return email;
}

int Person::getPhoneNum()
{
	return phoneNumber;
}