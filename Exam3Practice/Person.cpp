#include "Person.h"
#include <iostream>

using namespace std;

istream &operator>>(istream &strm, Person &obj)
{
	cout << "Name: ";
	getline(strm, obj.name);
	cout << "Email: ";
	getline(strm, obj.email);
	cout << "Phone: ";
	getline(strm, obj.phone);
	return strm;
}