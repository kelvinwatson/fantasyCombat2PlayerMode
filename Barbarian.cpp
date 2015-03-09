/******************************************************************************
* Program Filename: Barbarian.cpp
* Author: Kelvin Watson (OSU ID 932540242)
* Date: 7 February, 2015
* Description: (Assignment3, CS 162) Implementation for Barbarian.h. 
*   Derived class of the Humanoid class.
* Input:  See individual member functions.
* Output: See individual member functions.
******************************************************************************/
#include "Humanoid.h"
#include "Barbarian.h"

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
* Function: Barbarian::Barbarian()
* Description: Default constructor.
* Parameters:  No parameters.
* Pre-Conditions: Barbarian class object must be declared in main().
* Post-Conditions: Base (Humanoid) constructor called.
******************************************************************************/
Barbarian::Barbarian()
{  
}


/******************************************************************************
* Function: Barbarian::Barbarian(int player)
* Description: Parameterized constructor, calls parameterized Humanoid
*   constructor to initialize inherited data members.
* Parameters:  No parameters.
* Pre-Conditions: Barbarian class object must be declared in main().
* Post-Conditions: Parameterized base (Humanoid) constructor called to 
*   initialize inherited data members.
******************************************************************************/
Barbarian::Barbarian(int player) : Humanoid("Barbarian", 0, 12, player, 1)
{
}


/******************************************************************************
* Function: Barbarian::~Barbarian()
* Description: Destructor.
* Parameters: No parameters.
* Pre-Conditions: BlueMen must be allocated in main().
* Post-Conditions: BlueMen object destroyed.
******************************************************************************/
Barbarian::~Barbarian()
{
}


/******************************************************************************
* Function: double Barbarian::attackOpponent(Humanoid* opponent)
* Description: Calculates the attack based on dice rolls and achilles factor.
* Parameters: Takes a pointer to the base (Humanoid) class as argument.
* Pre-Conditions: Barbarian object must be constructed. Humanoid pointer must 
*   be passed as an argument.
* Post-Conditions: Returns the calculated attack points.
******************************************************************************/
double Barbarian::attackOpponent(Humanoid* opponent)
{
  double hit = achilles * (rollSixSidedDie() + rollSixSidedDie());  
  /*if (achilles == 0.5)
  {
    cout << "+-------------------------ATTACK--------------------------+" << endl;
    cout << left << setw(9) << "| Player" << left << setw(2) << player << left << setw(10) << this->className << left << setw(30) << "has a damaged Achilles tendon." << right << setw(10) << "|" << endl;
    cout << left << setw(9) << "| Player" << left << setw(2) << player << left << setw(10) << this->className << left << setw(15) << "slashes Player"  
    << left << setw(2) << opponent->getPlayer() << left << setw(20) << opponent->getClassName() << right << setw(1) <<"|" << endl; 
    cout << left << setw(7) << "| with" << right << setw(2) << hit << left << setw(24) << " points of attack force." << right << setw(26) << "|" << endl;
    cout << "+-------------------------ATTACK--------------------------+" << endl << endl;
  
  }
  else  
  {  
    cout << "+-------------------------ATTACK--------------------------+" << endl;
    cout << left << setw(9) << "| Player" << left << setw(2) << player << left << setw(10) << this->className << left << setw(15) << "slashes Player"  
    << left << setw(2) << opponent->getPlayer() << left << setw(20) << opponent->getClassName() << right << setw(1)  << "|" << endl; 
    cout << left << setw(7) << "| with" << right << setw(2) << hit << left << setw(24) << " points of attack force." << right << setw(26) << "|" << endl;
    cout << "+-------------------------ATTACK--------------------------+" << endl << endl;
  }*/
  return hit;
}


/******************************************************************************
* Function: double Barbarian::sixSidedDefense()
* Description: Calculates result of two consecutive dice rolls for defense.
* Parameters: No parameters.
* Pre-Conditions: Barbarian object must be constructed.
* Post-Conditions: Returns the defense points.
******************************************************************************/
double Barbarian::sixSidedDefense()
{
  double parry = rollSixSidedDie() + rollSixSidedDie();
  /*cout << "+-------------------------DEFENSE-------------------------+" << endl;
  cout << left << setw(9) << "| Player" << left << setw(2) << player << left << setw(27) << "Barbarian blocks the attack" << right << setw(21) << "|" << endl;
  cout << left << setw(8) << "| with " << right << setw(2) << parry << left << setw(19) << " points of defense." << right << setw(30) << "|" << endl;
  cout << "+-------------------------DEFENSE-------------------------+" << endl << endl;*/
  return parry;
}