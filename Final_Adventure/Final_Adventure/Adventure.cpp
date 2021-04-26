#include "Adventure.h"
#include <iostream>
#include <stdlib.h>  /* srand, rand */
#include <time.h>  
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
	//Reset Game Variables 
	playerHealth = &maxHealth;
	srand(time(NULL));
	randomNumber = rand() % 10 + 1;
	while (playerHealth > 0)
	{
		BeginningGame();
		ScenarioOne();
		ScenarioTwo();
		ScenarioThree();

		if (isPlayerWin == true)
		break;

	}
	
	cout << "Would you like to play again?" << endl;
	
	cout << "Enter Response: ";
	cin >> gamePlayLoop;

	if (gamePlayLoop == "y" || gamePlayLoop == "Y" )
	{
		main();
	}
	else {
		cout << "Thank you for playing!";
	}
}
//this begins the game and lets the player know what is going on.
void BeginningGame() 
{
	isPlayerWin = false;
	isNotAnswer = true;
	
	cout << "Hello player! Welcome to a short little adventure of your own!" << endl;
	
	cout << "\n";
	
	cout << "You will go through a short quest and see if you live! If not you can always play again." << endl;
	
	cout << "\n";
	
	cout << "But let me get your name actually!" << endl;
	
	cout << "\n";
	
	cout << "Enter Name: ";
	//Used to keep the name for awhile
	cin >> playerName;
	
	cout << "Ah! Welcome! " << playerName << " it is nice to see you participate in the game! :D" << endl;
	
	cout << "\n";

	cout << "Well with introductions out of the way. Let me explain what will happen." << endl;

	cout << "\n";

	cout << "So you are going to meet with Venece the tavern of the Drunken Bear." << endl;
	
	cout << "\n";

	cout << "He will give you your quest and explain the danger of the outside." << endl;

	cout << "\n";

	cout << "Once he explains it you are free to do what you want in choices that is." << endl;

	cout << "\n";

	cout << "Okay! Now I will give you your current status and you will meet with the tavern keeper." << endl;

	cout << "\n";
	
	cout << "Player Name : " << playerName << endl;

	cout << "\n";

	cout << "Health : " << *playerHealth << endl;

	cout << "\n";

}
void ScenarioOne()
{
	cout <<"Tavern Keeper: Ah! An adventurer! Welcome to the Drunken Bear! I am Venese, the tavern owner of this fine establishment! What brings you here? A quest maybe?\n" << endl;
	while (isNotAnswer == true)
	{
		cout << "Enter 1 for Yes \n" << endl;

		cout << "Enter 2 for No \n" << endl;

		cout << "Enter Response:";
		cin >> playerNumberInput;
		
		cout << "\n";

		if (playerNumberInput == 1)
		{
			cout << "Venece : Well that sounds great! A lot of adventurers come in to see the quests available. Let me see what I got this time around.\n" << endl;
			
			cout << "Ah! Now this is a special mission here. This was sent by what seems to be a general from the kingdom. Not sure the specifics but you might have to meet with him at the kingdom.\n" << endl;
			
			cout << "Well would you like a drink before you head off? \n" << endl;

			cout << "Enter 1 for Yes" << endl;

			cout << "Enter 2 for No" << endl;

			cout << "Enter Response: ";

			cin >> playerNumberInput;
			if (playerNumberInput == 1)
			{
				cout << "Venece: Ah! That is what I like to hear! \n" << endl;

				cout << "Venece: Here you are! Well once you are done you can head out and seek the general. But be very careful because of the beasts on the road. But you seem to be able to handle yourself. May the gods bless your adventure!\n" << endl;

				break;

			}
			else
			{
				cout << "Venece: Well good luck on your quest adventurer! May the gods bless you with luck on your way there! \n" << endl;
				break;
			}


		}
		
		else if (playerNumberInput == 2)
		{
			cout << "Venece: Interesting are you here to pass by? Oh or are you one of the helpers I requested for? \n" << endl;

			cout << "1: I am just here to pass by. \n" << endl;

			cout << "2: I am here about the job you offered! \n" << endl;

			cout << "Enter Response:";
			cin >> playerNumberInput;

			if (playerNumberInput == 1)
			{
				cout << "Well it is nice to see someone pass by and at least didn't get as many customers considering the location of the area. \n" << endl;
				
				cout << "Well I wish you luck on your journey! May the goddess help you out with your journey.\n" << endl;

				//Transfer to the next scenario
				break;
			}
			
			else
			{
				cout << "Venece: Ah! Wonderful! I didn't think it would be someone like you but I won't complain. \n" << endl;

				cout << playerName << " continues to work with Venece and helps him out on the tavern. They get big enough to warrant a growth elsewhere. \n" << endl;

				// Ask to play again
				isPlayerWin = true;
				break;
			}
		}
		else
		{
			isNotAnswer = true;
		}
	}
}
	
void ScenarioTwo()
{
	cout << playerName << " continues forth after meeting the hospitable tavern owner.You go into the woods towards the kingdom.\n" << endl;

	cout << " You see some people ahead, would you like to approach them? \n" << endl;

	while (isNotAnswer == true)
	{

		cout << "1: Let me see the trouble. \n" << endl;

		cout << "2: I reallt don't want to get into trouble. \n" << endl;

		cout << "Enter Response:";
		cin >> playerNumberInput;

		cout << "\n";

		if (playerNumberInput == 1) 
		{
			cout << "As you approach you see that they are a group of bandits trying to beat a traveling merchant. \n" << endl;

			cout << "Do you try to stop them?\n" << endl;



		}
		else if (playerNumberInput == 2)
		{
			cout << "You choose not to disturb the problem. Sooner or later you see a soldier come by to help." << endl;
			break;
		}
		else
		{
			isNotAnswer = true;
		}
	}
}

void ScenarioThree()
{

}

void ScenarioFour()
{

}

void ForestScenario()
{
	cout << "Name this thing";
}
