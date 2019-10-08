/**
 * @author Daniel Norment
 */
#include <iostream>
#include <string>

using namespace std;

int getNum()
{
	string num;
	bool isNum;
	do {
		isNum = true;
		cout << "Please enter a number: ";
		getline(cin, num);
		for (int i = 0; i < num.length(); i++)
		{
			if (!isdigit(num[i]))
			{
				isNum = false;
			}
		}

	} while (!isNum);
	return stoi(num);
}

int main()
{
	cout << getNum() << endl;

	return 0;
}
