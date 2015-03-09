/******************************************************************************
* Program Filename: functions.h
* Author: Kelvin Watson (OSU ID 932540242)
* Date: 7 February, 2015
* Description: (assignment3, CS 162) Interface for functions.cpp. Attributes 
*     and behaviors (prototypes) are listed.
* Input: See implementation (functions.cpp) file.
* Output: See implementation (functions.cpp) file.
******************************************************************************/
#ifndef WATSOKEL_FUNCTIONS_H
#define WATSOKEL_FUNCTIONS_H

#include <string>
using std::string;

#include "Humanoid.h"

void showIntro();
void showMenu();
string getCommand();
void printStats(Humanoid*);
void printAttack(const double,Humanoid*,Humanoid*);
void printSixSidedDefense(const double,Humanoid*);
void printTakeDamage(const double, const double, Humanoid*);
void getEnterKey();
void showCharacters();
string getCharacter(int);
int whichPlayerFirst();
bool testSlain(Humanoid*,Humanoid*);
void printSlain(Humanoid*,Humanoid*);

#endif