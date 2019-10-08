/**
 * @author Daniel Norment
 */
#include <iostream>

using namespace std;

void displayWages(int empId[], double wages[], int size)
{
	cout << endl << "Wages:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Employee " << empId[i] << ": $" << wages[i] << endl;
	}
}

int main()
{
	const int NUM_EMPLOYEES = 4;
	int empId[] = { 5658845, 4520125, 7895122, 8777541 };
	int hours[NUM_EMPLOYEES];
	double payRate[NUM_EMPLOYEES];
	double wages[NUM_EMPLOYEES];

	int hour;
	double rate;
	for (int i = 0; i < NUM_EMPLOYEES; i++)
	{
		cout << "Enter hours for employee " << empId[i] << ": ";
		cin >> hour;
		cout << "Enter payrate for employee " << empId[i] << ": ";
		cin >> rate;
		hours[i] = hour;
		payRate[i] = rate;
		wages[i] = payRate[i] * hours[i];
	}

	displayWages(empId, wages, NUM_EMPLOYEES);

	return 0;
}
