#pragma once

class Date
{
private:
	int day;
	int month;
public:
	class InvalidDay
	{
	private:
		int num;
	public:
		InvalidDay(int num);
		int getNum();
	};

	class InvalidMonth
	{
	private:
		int num;
	public:
		InvalidMonth(int num);
		int getNum();
	};

	Date(int d, int m);
	int getDay();
	int getMonth();
	void setDay(int d);
	void setMonth(int m);
};