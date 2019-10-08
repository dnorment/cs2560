#include "Date.h"

Date::InvalidMonth::InvalidMonth(int num)
{
	this->num = num;
}

int Date::InvalidMonth::getNum()
{
	return num;
}

Date::InvalidDay::InvalidDay(int num)
{
	this->num = num;
}

int Date::InvalidDay::getNum()
{
	return num;
}

Date::Date(int d, int m)
{
	if (d < 1 || d > 31)
	{
		throw InvalidDay(d);
	}
	else
	{
		day = d;
	}

	if (m < 1 || m > 12)
	{
		throw InvalidMonth(m);
	}
	else
	{
		month = m;
	}
}

int Date::getDay()
{
	return day;
}

int Date::getMonth()
{
	return month;
}

void Date::setDay(int d)
{
	Date(d, month);
}

void Date::setMonth(int m)
{
	Date(day, m);
}