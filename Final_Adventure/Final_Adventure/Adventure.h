#pragma once
#include <iostream>
#include <string>
/*
	This will begin to store a lot of items of variables. Also for declaring functions. 
*/

bool isNotAnswer = false;

//This stores the numbers needed for the project.
int randomNumberResult;
int playerHealth = 100;
int playerNumberInput;

//This stores the input strings of the player.
std::string playerName;
std::string gamePlayLoop;
std::string playerInput;

// This list is the functions stored to be used in the project.
void BeginningGame();
void ScenarioOne();