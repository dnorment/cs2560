/**
 * @author Daniel Norment
 */

#include "Player.h"
#include <iostream>

int main()
{
	//declare 10 question instances
	/*C*/Question q1 = Question("What is the capital of California?", "A: Salty Shores", "B: Dusty Divet", "C: Sacramento", "D: Tilted Towers", 'C');
	/*B*/Question q2 = Question("Where is Cal Poly Pomona located?", "A: Irvine", "B: Pomona", "C: Berkeley", "D: Loot Lake", 'B');
	/*C*/Question q3 = Question("Does the CSU Chancellor really keep costs to a minimum?", "A: Yes", "B: Yes", "C: No", "D: Yes", 'C');
	/*A*/Question q4 = Question("What takes one programmer to do in one hour takes two programmers to do in: ", "A: 2 hours", "B: 30 minutes", "C: 1 hour", "D: 4 hours", 'A');
	/*D*/Question q5 = Question("What grade will I get on this project?", "A: D", "B: C", "C: B", "D: A++", 'D');
	/*D*/Question q6 = Question("What is the worst platform to make a game in? (hint: Minecraft)", "A: C++", "B: Unity", "C: Unreal Engine", "D: Java", 'D');
	/*A*/Question q7 = Question("What time is it?", "A: Modelo time", "B: The Unix Epoch", "C: Soup time", "D: Borgar", 'A');
	/*A*/Question q8 = Question("Who is the current host of Pew News?", "A: Poppy Harlow", "B: Gloria Borger", "C: Pewdiepie", "D: Brad 2", 'A');
	/*C*/Question q9 = Question("Who is the best student in CS?", "A: Augustin", "B: Daniel", "C: Val", "D: Min", 'C');
	/*B*/Question q10 = Question("Who is the host of Family Feud?", "A: Steve Rogers", "B: Steve Harvey", "C: Steve Westgate", "D: Steve Richards", 'B');

	//initialize question* vector and populate with question memory locations
	vector<Question*> questions = vector<Question*>();
	questions.push_back(&q1);
	questions.push_back(&q2);
	questions.push_back(&q3);
	questions.push_back(&q4);
	questions.push_back(&q5);
	questions.push_back(&q6);
	questions.push_back(&q7);
	questions.push_back(&q8);
	questions.push_back(&q9);
	questions.push_back(&q10);

	//get number of players and create populated player vector
	int numPlayers;
	do {
		cout << "Enter the number of players: ";
	} while (!(cin >> numPlayers) || numPlayers <= 0 );
	vector<Player> players = vector<Player>();
	for (int i = 0; i < numPlayers; i++)
	{
		players.push_back(Player(i+1));
	}

	//ask first 5 questions
	char ans;
	cout << "Enter all answers as upper/lowercase a, b, c, or d." << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "Question " << i + 1 << ": " << questions[i]->getQuestion() << endl;
		questions[i]->printChoices();
		for (Player &p : players)
		{
			//get player's answer
			do {
				cout << "Player " << p.getId() << "'s answer: ";
				string input;
				cin >> input;
				ans = input[0];
				ans = toupper(ans);
			} while (ans != 'A' && ans != 'B' && ans != 'C' && ans != 'D');

			//add to right/wrong vector
			if (ans == questions[i]->getAnswer())
			{
				p.addRight(questions[i]);

			}
			else
			{
				p.addWrong(questions[i]);
			}
		}
	}

	//print out answers from players
	for (Player &p : players)
	{
		//print answers
		cout << endl << "Player " << p.getId() << "'s right answers: " << endl;
		vector<Question*> &right = p.getRightAnswers();
		vector<Question*> &wrong = p.getWrongAnswers();
		for (Question* &q : right)
		{
			cout << "    " << q->getQuestion() << endl;
		}
		cout << endl << "Player " << p.getId() << "'s wrong answers: " << endl;
		for (Question* &q : wrong)
		{
			cout << "    " << q->getQuestion() << endl;
		}

		//clear right/wrong vectors
		right.clear();
		wrong.clear();
	}

	//check if want to play again
	do
	{
		cout << endl << "Replay with different questions? Y/N: ";
		string input;
		cin >> input;
		ans = input[0];
		ans = toupper(ans);
	} while (ans != 'Y' && ans != 'N');
	if (ans == 'N') return 0; //exit if N

	//ask next 5 questions
	for (int i = 5; i < 10; i++)
	{
		cout << "Question " << i + 1 << ": " << questions[i]->getQuestion() << endl;
		questions[i]->printChoices();
		for (Player &p : players)
		{
			//get player's answer
			do {
				cout << "Player " << p.getId() << "'s answer: ";
				string input;
				cin >> input;
				ans = input[0];
				ans = toupper(ans);
			} while (ans != 'A' && ans != 'B' && ans != 'C' && ans != 'D');

			//add to right/wrong vector
			if (ans == questions[i]->getAnswer())
			{
				p.addRight(questions[i]);
			}
			else
			{
				p.addWrong(questions[i]);
			}
		}
	}

	//print out answers from players
	for (Player &p : players)
	{
		//print answers
		cout << endl << "Player " << p.getId() << "'s right answers: " << endl;
		vector<Question*> &right = p.getRightAnswers();
		vector<Question*> &wrong = p.getWrongAnswers();
		for (Question* &q : right)
		{
			cout << "    " << q->getQuestion() << endl;
		}
		cout << endl << "Player " << p.getId() << "'s wrong answers: " << endl;
		for (Question* &q : wrong)
		{
			cout << "    " << q->getQuestion() << endl;
		}

		//clear right/wrong vectors
		right.clear();
		wrong.clear();
	}

	return 0;
}