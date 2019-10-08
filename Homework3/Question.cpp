#include "Question.h"
#include <iostream>

using namespace std;

Question::Question(string question, string a, string b, string c, string d, char ans)
{
	this->question = question;
	this->ans_a = a;
	this->ans_b = b;
	this->ans_c = c;
	this->ans_d = d;
	this->answer = ans;
}

string Question::getQuestion()
{
	return question;
}

void Question::printChoices()
{
	cout << "  " << ans_a << endl;
	cout << "  " << ans_b << endl;
	cout << "  " << ans_c << endl;
	cout << "  " << ans_d << endl;
}


char Question::getAnswer()
{
	return answer;
}