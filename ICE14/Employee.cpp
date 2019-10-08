#include "Employee.h"

Employee::Employee(int num, double pay)
{
	employeeNumber = num;
	employeeSalary = pay;
}

int Employee::getEmpNum()
{
	return employeeNumber;
}

double Employee::getEmpSalary()
{
	return employeeSalary;
}