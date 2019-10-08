#pragma once

#include <iostream>

using namespace std;

class NumDays
{
private:
	int days;
	int hours;
public:
	NumDays();
	NumDays(int hours);
	void simplify();
	NumDays operator+(const NumDays &right);
	NumDays operator++(int);
	friend ostream &operator<< (ostream &left, NumDays &right);
};