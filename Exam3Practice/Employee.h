#pragma once

#include <string>

using namespace std;

class Employee
{
private:
	string name;
	string id;
public:
	Employee();
	void setName(string n);
	void setId(string id);
	class InvalidLengthException {};
};