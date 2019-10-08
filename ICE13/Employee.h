#pragma once

#include <string>

using namespace std;

struct HireDate
{
	int day;
	int month;
	int year;
};

class Employee
{
protected:
	string empName;
	int empNum;
	HireDate hireDate;
public:
	Employee();
	Employee(string name, int num, int day, int month, int year);
	string getEmpName();
	int getEmpNum();
	HireDate getHireDate();
	void setEmpName(string name);
	void setEmpNum(int num);
	void setHireDate(int day, int month, int year);
};