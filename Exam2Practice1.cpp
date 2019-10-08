/**
 * @author Daniel Norment
 */
#include <iostream>
#include <vector>

using namespace std;

struct Player
{
	string name;
	int points;
	int assists;
	int rebounds;
	double salary;
};

struct Coach
{
	string name;
	double salary;
};

struct TeamInfo
{
	string name;
	string city;
	string arena;
};

struct Team
{
	vector<Player> players;
	vector<Coach> coaches;
	TeamInfo details;
};

int main()
{


	return 0;
}
