#include "Date.h"

Date::Date()
{
	setDate(1, 1, 1970); //default to unix epoch
}

Date::Date(int day, int month, int year)
{
	setDate(day, month, year);
}

void Date::setDate(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

int Date::getDay()
{
	return day;
}

int Date::getMonth()
{
	return month;
}

int Date::getYear()
{
	return year;
}