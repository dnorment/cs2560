#pragma once

#include "Employee.h"
#include <string>

class ProductionWorker : public Employee
{
private:
	int shift;
	double payRate;
public:
	ProductionWorker();
	ProductionWorker(string name, int num, int day, int month, int year, int shift, double rate);
	int getShift();
	double getPayRate();
	void setShift(int num);
	void setPayRate(double rate);
};