/******************************************************************************
* Program Filename: Reptilian.cpp
* Author: Kelvin Watson (OSU ID 932540242)
* Date: 7 February, 2015
* Description: (Assignment3, CS 162) Implementation for Reptilian.h. 
*   Derived class of the Humanoid class.
* Input:  See individual member functions.
* Output: See individual member functions.
******************************************************************************/
#include "Humanoid.h"
#include "Reptilian.h"
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
* Function: Reptilian::Reptilian()
* Description: Default constructor.
* Parameters:  No parameters.
* Pre-Conditions: Reptilian class object must be declared in main().
* Post-Conditions: Base (Humanoid) constructor called.
******************************************************************************/
Reptilian::Reptilian()
{  
}


/******************************************************************************
* Function: Reptilian::Reptilian(int player)
* Description: Parameterized constructor, calls parameterized Humanoid
*   constructor to initialize inherited data members.
* Parameters:  No parameters.
* Pre-Conditions: Reptilian class object must be declared in main().
* Post-Conditions: Parameterized base (Humanoid) constructor called to 
*   initialize inherited data members.
******************************************************************************/
Reptilian::Reptilian(int player) : Humanoid("Reptilian", 7, 18, player, 1)
{
}


/******************************************************************************
* Function: Reptilian::~Reptilian()
* Description: Destructor.
* Parameters: No parameters.
* Pre-Conditions: Reptilian must be allocated in main().
* Post-Conditions: Reptilian object destroyed.
******************************************************************************/
Reptilian::~Reptilian()
{
}


/******************************************************************************
* Function: double Reptilian::attackOpponent(Humanoid* opponent)
* Description: Calculates the attack based on dice rolls and achilles factor.
* Parameters: Takes a pointer to the base (Humanoid) class as argument.
* Pre-Conditions: Reptilian object must be constructed. Humanoid pointer must 
*   be passed as an argument.
* Post-Conditions: Returns the calculated attack points.
******************************************************************************/
double Reptilian::attackOpponent(Humanoid* opponent)
{ 
  double hit = achilles * (rollSixSidedDie() + rollSixSidedDie() + rollSixSidedDie());  
  /*cout << "+-------------------------ATTACK--------------------------+" << endl;
  cout << left << setw(9) << "| Player" << left << setw(2) << player << left << setw(10) << this->className << left << setw(15) << "strikes Player"  
  << left << setw(2) << opponent->getPlayer() << left << setw(20) << opponent->getClassName() << "|" << endl; 
  cout << left << setw(7) << "| with" << right << setw(2) << hit << left << setw(24) << " points of attack force." << right << setw(26) << "|" << endl;
  cout << "+-------------------------ATTACK--------------------------+" << endl << endl;*/
  return hit;
}


/******************************************************************************
* Function: double Reptilian::sixSidedDefense()
* Description: Calculates result of a die roll for defense.
* Parameters: No parameters.
* Pre-Conditions: Reptilian object must be constructed.
* Post-Conditions: Returns the defense points.
******************************************************************************/
double Reptilian::sixSidedDefense()
{
  double parry = rollSixSidedDie();
  /*cout << "+-------------------------DEFENSE-------------------------+" << endl;
  cout << left << setw(9) << "| Player" << left << setw(2) << player << left << setw(27) << "Reptilian blocks the attack" << right << setw(21) << "|" << endl;
  cout << left << setw(8) << "| with " << right << setw(2) << parry << left << setw(19) << " points of defense." << right << setw(30) << "|" << endl;
  cout << "+-------------------------DEFENSE-------------------------+" << endl << endl;*/
  return parry;
}