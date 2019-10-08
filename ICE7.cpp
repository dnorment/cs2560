/**
 * @author Daniel Norment
 * @author Augustin Viju
 */

#include <iostream>
#include <string>

using namespace std;

bool validateUser(string user)
{
	bool valid = false;
	if (isdigit(user[0]))
	{
		return valid;
	}

	for (int i = 0; i < int(user.length()); i++)
	{
		valid = valid && isalnum(user[i]);
	}
	return valid;
}

bool validatePass(string pw)
{
	bool valid = false;
	bool hasNon = false;
	bool hasUpper = false;
	bool hasLower = false;
	bool hasNumber = false;
	bool hasConsecutive = false;
	char cons = '0';
	char prevcons = '1';
	int consecutive = 0;
	for (int i = 0; i < int(pw.length()); i++)
	{
		hasNon = hasNon || !isalnum(pw[i]);
		hasUpper = hasUpper || isupper(pw[i]);
		hasLower = hasLower || islower(pw[i]);
		hasNumber = hasNumber || isdigit(pw[i]);
		prevcons = cons;
		cons = pw[i];
		if (cons = prevcons)
		{
			consecutive++;
			if (consecutive > 2)
			{
				hasConsecutive = true;
			}
		}
		else
		{
			consecutive = 0;
		}
	}
	valid = hasNon && hasUpper && hasLower && hasNumber && !hasConsecutive;
	return valid;
}

int main()
{
	string user, pw;

	do {
		cout << "Enter a valid username: ";
		cin >> user;
	} while (!validateUser(user));

	do {
		cout << "Enter a password: ";
		cin >> pw;
	} while (!validatePass(pw));



	return 0;
}
