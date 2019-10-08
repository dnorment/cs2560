/**
 * @author Daniel Norment
 */
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	int gals = 0;
	int miles = 0;
	cout << "How many gallons of gas can your car hold? ";
	cin >> gals;
	cout << "How many miles can your car drive on a full tank? ";
	cin >> miles;
	double mpg = static_cast<double>(miles) / gals;

	cout << fixed << setprecision(1);

	cout << "------------------------" << endl;
	cout << "Miles Per Tank: " << setw(8) << miles << endl;
	cout << "Gallons Per Tank: " << setw(6) << gals << endl;
	cout << "Miles Per Gallon: " << setw(6) << mpg << endl << endl;
	return 0;
}
