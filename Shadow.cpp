/******************************************************************************
* Program Filename: Shadow.cpp
* Author: Kelvin Watson (OSU ID 932540242)
* Date: 7 February, 2015
* Description: (Assignment3, CS 162) Implementation for Shadow.h, 
*   derived class of the Humanoid class.
* Input:  See individual member functions.
* Output: See individual member functions.
******************************************************************************/
#include "Humanoid.h"
#include "Shadow.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <iomanip>
using std::left;
using std::right;
using std::setw;
#include <string>
using std::string;

/******************************************************************************
* Function: Shadow::Shadow()
* Description: Default constructor.
* Parameters:  No parameters.
* Pre-Conditions: Shadow class object must be declared in main().
* Post-Conditions: Base (Humanoid) constructor called.
******************************************************************************/
Shadow::Shadow()
{  
}


/******************************************************************************
* Function: Shadow::Shadow(int player)
* Description: Parameterized constructor, calls parameterized Humanoid
*   constructor to initialize inherited data members.
* Parameters:  No parameters.
* Pre-Conditions: Shadow class object must be declared in main().
* Post-Conditions: Parameterized base (Humanoid) constructor called to 
*   initialize inherited data members.
******************************************************************************/
Shadow::Shadow(int player) : Humanoid("Shadow", 0, 12, player, 1)
{
}


/******************************************************************************
* Function: Shadow::~Shadow()
* Description: Destructor.
* Parameters: No parameters.
* Pre-Conditions: Shadow must be allocated in main().
* Post-Conditions: Shadow object destroyed.
******************************************************************************/
Shadow::~Shadow()
{
}


/******************************************************************************
* Function: double Shadow::attackOpponent(Humanoid* opponent)
* Description: Calculates the attack based on dice rolls and achilles factor.
* Parameters: Takes a pointer to the base (Humanoid) class as argument.
* Pre-Conditions: Shadow object must be constructed. Humanoid pointer must be
*   passed as an argument.
* Post-Conditions: Returns the calculated attack points.
******************************************************************************/
double Shadow::attackOpponent(Humanoid* opponent)
{
  double hit = achilles * (rollTenSidedDie() + rollTenSidedDie());  
  if (achilles == 0.5)
  {
    /*cout << "+-------------------------ATTACK--------------------------+" << endl;
    cout << left << setw(9) << "| Player" << left << setw(2) << player << left << setw(10) << this->className << left << setw(30) << "has a damaged Achilles tendon." << right << setw(10) << "|" << endl;
    cout << left << setw(9) << "| Player" << left << setw(2) << player << left << setw(10) << this->className << left << setw(15) << "strikes Player"  
    << left << setw(2) << opponent->getPlayer() << left << setw(20) << opponent->getClassName() << right << setw(1) <<"|" << endl; 
    cout << left << setw(7) << "| with" << right << setw(2) << hit << left << setw(24) << " points of attack force." << right << setw(26) << "|" << endl;
    cout << "+-------------------------ATTACK--------------------------+" << endl << endl; */
  }
  else  
  {  
    /*cout << "+-------------------------ATTACK--------------------------+" << endl;
    cout << left << setw(9) << "| Player" << left << setw(2) << player << left << setw(10) << this->className << left << setw(15) << "strikes Player"  
    << left << setw(2) << opponent->getPlayer() << left << setw(20) << opponent->getClassName() << right << setw(1)  << "|" << endl; 
    cout << left << setw(7) << "| with" << right << setw(2) << hit << left << setw(24) << " points of attack force." << right << setw(26) << "|" << endl;
    cout << "+-------------------------ATTACK--------------------------+" << endl << endl; */
  }
  return hit;
}

/******************************************************************************
* Function: double Shadow::sixSidedDefense()
* Description: Randomly generates either 1 or 2, which is used to determine
*   if the Shadow has manipulated perception or not.
* Parameters: No parameters.
* Pre-Conditions: Shadow object must be constructed.
* Post-Conditions: Returns a defense of 99 if Shadow has evaded the attack,
*   or the result of a dice roll for defense.
******************************************************************************/
double Shadow::sixSidedDefense()
{
  int manipulate = rand()%2;
  if(manipulate==0)
  {
    /*cout << "+-------------------------DEFENSE-------------------------+" << endl;
    cout << left << setw(9) << "| Player" << left << setw(2) << player << left << setw(29) << "Shadow manipulates perception" << right << setw(19) << "|" << endl;
    cout << left << setw(8) << "| and evades the attack. Shadow sustains no damage." << right << setw(30) << "|" << endl;
    cout << "+-------------------------DEFENSE-------------------------+" << endl << endl;*/
    return 99;
  }
  else
  {
    double parry = rollSixSidedDie();
    /*cout << "+-------------------------DEFENSE-------------------------+" << endl;
    cout << left << setw(9) << "| Player" << left << setw(2) << player << left << setw(27) << "Shadow blocks the attack" << right << setw(21) << "|" << endl;
    cout << left << setw(8) << "| with " << right << setw(2) << parry << left << setw(19) << " points of defense." << right << setw(30) << "|" << endl;
    cout << "+-------------------------DEFENSE-------------------------+" << endl << endl;*/
    return parry;
  }
}