/**
 * @author Daniel Norment
 * @author Augustin Viju
 */

#include <iostream>

using namespace std;

int* duplicateArray(int arr[], int SIZE)
{
	int* aptr = new int[SIZE];	//create new array on heap

	for (int i = 0; i < SIZE; i++)
	{
		*(aptr + i) = *(arr + i);	//copy values from old array to new array
	}

	delete [] arr;	//delete old array, not used after

	return aptr;
}

int main()
{
	const int ARRAY_SIZE = 16;
	int* arr = new int[ARRAY_SIZE];	//create array on heap

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		*(arr + i) = i; //fill array with indices value
	}

	int* arr2 = duplicateArray(arr, ARRAY_SIZE); //get duplicate array pointer

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << *(arr2 + i) << " ";	//print out values from duplicated array
	}

	delete [] arr2;	//delete new array, not used after

	return 0;
}
