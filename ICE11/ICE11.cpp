/**
 * @author Daniel Norment
 * did not submit
 */

#include "Date.h"
#include <iostream>

using namespace std;

int main()
{
	Date date1 = Date(21, 3, 1998);
	Date date2 = Date();

	cout << "Date 1: " << date1.getMonth() << "/" << date1.getDay() << "/" << date1.getYear() << endl;
	cout << "Date 2: " << date2.getMonth() << "/" << date2.getDay() << "/" << date2.getYear() << endl;
	date2.setDate(25, 12, 2016);
	cout << "Date 2: " << date2.getMonth() << "/" << date2.getDay() << "/" << date2.getYear() << endl;

	return 0;
}