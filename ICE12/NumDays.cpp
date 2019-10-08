#include "NumDays.h"

NumDays::NumDays()
{
	this->days = 0;
	this->hours = 0;
}

NumDays::NumDays(int hours)
{
	this->hours = hours;
	this->days = 0;
	this->simplify();
}

void NumDays::simplify()
{

	this->days = days + hours / 24;
	this->hours = hours % 24;
	
}

NumDays NumDays::operator+(const NumDays &right)
{
	NumDays temp;
	temp.days = days + right.days;
	temp.hours = hours + right.hours;
	temp.simplify();
	return temp;
}

NumDays NumDays::operator++(int)
{
	NumDays temp(hours);
	hours++;
	simplify();
	return temp;
}

ostream &operator<< (ostream &left, NumDays &right)
{
	left << right.days << " days, " << right.hours << " hours";
	return left;
}