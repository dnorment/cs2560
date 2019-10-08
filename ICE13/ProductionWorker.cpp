#include "ProductionWorker.h"

using namespace std;

ProductionWorker::ProductionWorker() : Employee()
{
	shift = 1;
	payRate = 0.0;
}


ProductionWorker::ProductionWorker(string name, int num, int day, int month, int year, int shift, double rate) : Employee(name, num, day, month, year)
{
	this->shift = shift;
	payRate = rate;
}

int ProductionWorker::getShift()
{
	return shift;
}

double ProductionWorker::getPayRate()
{
	return payRate;
}

void ProductionWorker::setShift(int num)
{
	shift = num;
}

void ProductionWorker::setPayRate(double rate)
{
	payRate = rate;
}