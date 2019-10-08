#include "Player.h"
#include <iostream>

using namespace std;

Player::Player(int id)
{
	this->right = vector<Question*>();
	this->wrong = vector<Question*>();
	this->playerId = id;
}

int Player::getId()
{
	return playerId;
}

void Player::addRight(Question* q)
{
	right.push_back(q);
}

void Player::addWrong(Question* q)
{
	wrong.push_back(q);
}

vector<Question*>& Player::getRightAnswers()
{
	return right;
}

vector<Question*>& Player::getWrongAnswers()
{
	return wrong;
}