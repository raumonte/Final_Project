#pragma once
#include <iostream>
#include <string>
/*
	This will begin to store a lot of items of variables. Also for declaring functions. 
*/

bool isNotAnswer = true;
bool isPlayerDead = false;
bool isPlayerWin = false;
//This stores the numbers needed for the project.
int randomNumberResult;
int* playerHealth;
int playerNumberInput;
int maxHealth = 100;
int randomNumber;

//This stores the input strings of the player.
std::string playerName;
std::string gamePlayLoop = "y";
std::string playerInput;

// This list is the functions stored to be used in the project.
void BeginningGame();
void ScenarioOne();
void ScenarioTwo();
void ScenarioThree();
void ScenarioFour();
void ForestScenario(); 