/**
 * @author Daniel Norment
 */
#include <iostream>

using namespace std;

int main()
{
	int nums[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter a number: ";
		cin >> nums[i];
	}

	cout << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << nums[i] << " is at address " << &*(nums + i) << endl;
	}

	return 0;
}
