#pragma once

#include "Question.h"
#include <vector>

using namespace std;

class Player
{
private:
	int playerId;
	vector<Question*> right;
	vector<Question*> wrong;
public:
	Player(int id);
	int getId();
	void addRight(Question* q);
	void addWrong(Question* q);
	vector<Question*>& getRightAnswers();
	vector<Question*>& getWrongAnswers();
};