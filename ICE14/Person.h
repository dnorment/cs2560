#include <string>

using namespace std;

class Person
{
protected:
	string name;
	string email;
	int phoneNumber;
public:
	Person(string n, string e, int p);
	string getName();
	string getEmail();
	int getPhoneNum();
};