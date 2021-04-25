#include "Adventure.h"
#include <iostream>
/*
	This project is a quick RPG like adventure.
	-Have the players name.
	-Randomize success of encounters.
	-Have a few scenarios of an encounter with a staisying ending.
	-Player input
	-having sounds (for the mean time just use \n for the mean time)
*/
using namespace std;
int main() {
	BeginningGame();
	ScenarioOne();
	///cin >> gamePlayLoop;
	while (gamePlayLoop == "Y" || gamePlayLoop == "y") 
	{

	}
	if (gamePlayLoop == "u" )
	{
		cout << "Hello!" <<  endl;
	}
}
void BeginningGame() 
{
	cout << "Hello player! Welcome to a short little adventure of your own!" << endl;
	cout << "Let us begin the game by asking you. What is your name?" << endl;
	cin >> playerName;
	cout << "Well it is nice to meet you " << playerName << ". Before I let you go. Let me explain." << endl;
	cout << "Let me tell you how much health you have at this moment." << endl;
	cout << playerName << ": " << playerHealth << endl;
	cout << "Now that you know your health. Remember to be very careful when it comes to encounters." << endl;
	cout << "Some will hurt you and others may take you by surprise." << endl;
	cout << "For now " << playerName << " you are given a quest from a local tavern." << endl;
	cout << "I will let him explain the scenario." << endl;
}
void ScenarioOne() {
	cout << "Hello traveler! Welcome to the Drunkin Bear! You came here for the quest I presume?" << endl;
	cout << "Let me explain the situation" << endl;
	while (isNotAnswer == false)
	{
		cout << "These are the choices" << endl;
		cin >> playerNumberInput;
		if ( playerNumberInput == 1)
		{
			cout << "Well that was a choice" << endl;
			isNotAnswer = true;

		}
		if (playerNumberInput > 5)
		{
			cout << "Well then" << playerName << " you might've not heard me the first time but let me explain again." << endl;
			isNotAnswer = false;
		}
	}
	cout << " Congrats on the choice!" << endl;


}