/**
 * @author Daniel Norment
 * @author Augustin Viju
 */

#include <iostream>
#include <string>

using namespace std;

void displayMenu()
{
	cout << "1) Concatenate new string to end" << endl;
	cout << "2) Search for a substring and replace" << endl;
	cout << "3) Enter new string" << endl;
	cout << "0) Quit" << endl;
}

int main()
{
	string str = "";
	string temp = "";
	string temp2 = "";
	int choice;
	do
	{
		displayMenu();
		cout << "Enter an option: ";
		cin >> choice;

		if (choice == 1)
		{
			cout << "Enter a string to concatenate to the end: ";
			cin.ignore();
			getline(cin, temp);
			str += temp;
		}
		else if (choice == 2)
		{
			cout << "Enter the substring to search for: ";
			cin.ignore();
			getline(cin, temp);
			cout << "Enter what to replace it with: ";
			getline(cin, temp2);
			int loc = str.find(temp);
			if (loc >= 0) str.replace(loc, temp2.size(), temp2);
		}
		else if (choice == 3)
		{
			cout << "Enter the new string: ";
			cin.ignore();
			getline(cin, str);
		}
		cout << "Current string: " << str << endl << endl;
	} while (choice >= 1 && choice <= 3);

	return 0;
}
