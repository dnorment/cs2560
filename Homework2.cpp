/**
 * @author Daniel Norment
 */

#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void displayMenu()
{
	cout << endl << "Please choose what to do:" << endl;
	cout << " 1) Add a sale" << endl;
	cout << " 2) View sales" << endl;
	cout << " 3) Edit a sale" << endl;
	cout << " 4) Remove a sale" << endl;
	cout << "Enter a number (0 to exit): ";
}

void addSale(vector<string> &items, vector<double> &prices)
{
	string itemName;
	double itemPrice;
	
	cout << endl << "---------- Adding Sales ----------" << endl;
	do
	{
		
		cout << "Enter the name of the item sold (type \"exit\" to stop): ";
		cin.ignore();
		getline(cin, itemName);
		if (itemName != "exit")
		{
			cout << "Enter the price of the item sold: ";
			cin >> itemPrice;

			items.push_back(itemName);
			prices.push_back(itemPrice);
		}
	} while (itemName != "exit");
}

void viewSales(vector<string> &items, vector<double> &prices)
{
	if (items.size() > 0)
	{
		cout << endl << "---------- Current Sales ----------" << endl << fixed << setprecision(2);
		for (int i = 0; i < items.size(); i++)
		{
			cout << i << ") " << items[i] << ": $" << prices[i] << endl;
		}
	}
	else
	{
		cout << endl << "There are no sales to display." << endl;
	}
}

void editSale(vector<string> &items, vector<double> &prices)
{
	if (!items.empty())
	{
		int sale;
		double price;
		cout << endl << "---------- Editing Sales ----------" << endl;
		do 
		{
			cout << "Enter the index of the sale to edit (0-" << items.size() - 1 << ", -1 to exit): ";
			cin >> sale;
			if (sale != -1 && (sale >= 0 || sale < items.size()))
			{
				cout << "Enter the new price of the sale: ";
				cin >> price;
				prices[sale] = price;
			}
		} while (sale != -1 && (sale < 0 || sale >= items.size()));
	}
	else
	{
		cout << endl << "There are no sales to edit." << endl;
	}
	
}

void removeSale(vector<string> &items, vector<double> &prices)
{
	if (!items.empty())
	{
		cout << endl << "---------- Removing Sales ----------" << endl;
		int sale;
		do
		{
			cout << "Enter the index of the sale to edit (0-" << items.size() - 1 << ", -1 to exit): ";
			cin >> sale;
			if (sale != -1 && (sale >= 0 || sale < items.size()))
			{
				items.erase(items.begin() + sale);
				prices.erase(prices.begin() + sale);
			}
		} while (!items.empty() && sale != -1 && (sale < 0 || sale >= items.size()));
	}
	else
	{
		cout << endl << "There are no sales to remove." << endl;
	}
}

int main()
{
	vector<string> items;
	vector<double> prices;

	int choice = -1;
	while (choice != 0)
	{
		displayMenu();
		cin >> choice;

		if (choice > 0 && choice < 5)	//is a valid choice
		{
			switch (choice)
			{
			case 1:
				addSale(items, prices);
				break;
			case 2:
				viewSales(items, prices);
				break;
			case 3:
				editSale(items, prices);
				break;
			case 4:
				removeSale(items, prices);
				break;
			}
		}
	}

	return 0;
}