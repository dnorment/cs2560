/**
 * @author Daniel Norment
 */
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	ofstream outputFile;
	outputFile.open("My City.txt");
	string cityName;
	cout << "Enter the city's name: ";
	getline(cin, cityName);
	outputFile << "City Name: " << cityName << endl;
	
	int population;
	for (int i = 1950; i <= 2010; i += 20)
	{
		cout << "Enter the population in " << i << ": ";
		cin >> population;
		outputFile << i << ": ";
		for (int j = population/1000; j > 0; j--)
		{
			outputFile << "*";
		}
		outputFile << endl;
	}

	outputFile.close();

	return 0;
}
