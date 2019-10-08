/**
 * @author Daniel Norment
 * @author Augustin Viju
 */

#include "Date.h"
#include <iostream>

using namespace std;

int main()
{
	Date today = Date(29, 11);
	cout << "Today is " << today.getMonth() << "/" << today.getDay() << endl;
	try
	{
		Date in3 = Date(32, 11);
	}
	catch (Date::InvalidDay e)
	{
		cout << e.getNum() << " is not a valid day of the month" << endl;
	}

	try
	{
		Date monthAfterXmas = Date(25, 13);
	}
	catch (Date::InvalidMonth e)
	{
		cout << e.getNum() << " is not a valid month of the year" << endl;
	}
	
}
