/**
 * @author Daniel Norment
 * @author Augustin Viju
 */

#include "NumDays.h"

using namespace std;

int main()
{
	NumDays day1 = NumDays(14);
	NumDays day2 = NumDays(50);
	cout << day1 << endl;
	cout << day2 << endl;
	NumDays day3;
	day3 = day1 + day2;
	cout << day3 << endl;
	day3++;
	cout << day3 << endl;
	return 0;
}
