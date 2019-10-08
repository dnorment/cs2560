/**
 * @author Daniel Norment
 */
#include <iostream>

using namespace std;

void totalAverage(int &a, int &b)
{
	a = a + b; //a = total
	b = a / 2; //b = average
}

int main()
{
	int a, b;
	cout << "Enter two numbers: ";
	cin >> a >> b;
	totalAverage(a, b);
	cout << "Total: " << a << endl;
	cout << "Average: " << b << endl;
	return 0;
}
