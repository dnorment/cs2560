#include "Employee.h"

Employee::Employee()
{
	Employee("Undefined worker", 0, 1, 1, 1970);
}

Employee::Employee(string name, int num, int day, int month, int year)
{
	empName = name;
	empNum = num;
	hireDate = HireDate { day, month, year };
}

string Employee::getEmpName()
{
	return empName;
}

int Employee::getEmpNum()
{
	return empNum;
}

HireDate Employee::getHireDate()
{
	return hireDate;
}

void Employee::setEmpName(string name)
{
	empName = name;
}

void Employee::setEmpNum(int num)
{
	empNum = num;
}

void Employee::setHireDate(int day, int month, int year)
{
	hireDate = HireDate{ day, month, year };
}