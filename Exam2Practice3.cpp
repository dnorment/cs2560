/**
 * @author Daniel Norment
 */
#include <iostream>

using namespace std;

int* doubleArray(int array[], int size)
{
	int* newArray = new int[size * 2];
	int* newArrayToo = newArray;
	int* oldArray = array;

	for (int i = 0; i < size; i++)
	{
		*newArrayToo = *oldArray;
		newArrayToo++;
		oldArray++;
	}

	for (int i = size; i < size * 2; i++)
	{
		*newArrayToo = 0;
		newArrayToo++;
	}

	return newArray;
}

int main()
{
	int array[] = { 1, 2, 3, 4 };
	int* newArray = doubleArray(array, 4);

	for (int i = 0; i < 8; i++)
	{
		cout << newArray[i] << endl;
	}

	return 0;
}
