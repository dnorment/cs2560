#pragma once

#include <string>

using namespace std;

class Person
{
private:
	string name;
	string email;
	string phone;
public:
	friend istream &operator>>(istream &strm, Person &obj);
};