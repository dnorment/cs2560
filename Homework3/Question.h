#pragma once

#include <string>

using namespace std;

class Question
{
private:
	string question;
	string ans_a;
	string ans_b;
	string ans_c;
	string ans_d;
	char answer;
public:
	Question(string question, string a, string b, string c, string d, char answer);
	string getQuestion();
	void printChoices();
	char getAnswer();
};