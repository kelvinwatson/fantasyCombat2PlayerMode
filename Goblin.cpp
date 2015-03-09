#include "Humanoid.h"
#include "Goblin.h"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <iomanip>
using std::setw;
using std::left;
using std::right;
#include <string>
using std::string;


/******************************************************************************
* Function: Goblin::Goblin()
* Description: Default constructor.
* Parameters:  No parameters.
* Pre-Conditions: Goblin class object must be declared in main().
* Post-Conditions: Base (Humanoid) constructor called.
******************************************************************************/
Goblin::Goblin()
{  
}


/******************************************************************************
* Function: Goblin::Goblin(int player)
* Description: Parameterized constructor, calls parameterized Humanoid
*   constructor to initialize inherited data members.
* Parameters:  No parameters.
* Pre-Conditions: Goblin class object must be declared in main().
* Post-Conditions: Parameterized base (Humanoid) constructor called to 
*   initialize inherited data members.
******************************************************************************/
Goblin::Goblin(int player) : Humanoid("Goblin", 3, 8, player, 1)
{
}


/******************************************************************************
* Function: Goblin::~Goblin()
* Description: Destructor.
* Parameters: No parameters.
* Pre-Conditions: Goblin must be allocated in main().
* Post-Conditions: Goblin object destroyed.
******************************************************************************/
Goblin::~Goblin()
{
}


/******************************************************************************
* Function: double Goblin::attackOpponent(Humanoid* opponent)
* Description: Calculates the attack based on dice rolls and achilles factor.
* Parameters: Takes a pointer to the base (Humanoid) class as argument.
* Pre-Conditions: Goblin object must be constructed. Humanoid pointer must be
*   passed as an argument.
* Post-Conditions: Returns the calculated attack points.
******************************************************************************/
double Goblin::attackOpponent(Humanoid* opponent)
{
  double hit = achilles * (rollSixSidedDie() + rollSixSidedDie());
  if (hit == 12)
  {
    opponent->setAchilles(0.5);
    /*cout << "+-------------------------ATTACK--------------------------+" << endl;
    cout << left << setw(9) << "| Player" << left << setw(2) << player << left 
    << setw(10) << this->className << left << setw(12) << "cuts Player"  
    << left << setw(2) << opponent->getPlayer() << left << setw(10) 
    << opponent->getClassName() << right << setw(14) << "|" << endl; 
    cout << left << setw(23) << "| Achilles tendon with" << right << setw(3) << hit << left 
    << setw(24) << " points of attack force." << right << setw(9) << "|" 
    << endl;
    cout << "+-------------------------ATTACK--------------------------+" << endl 
    << endl;*/
  }  
  /*else
  {
    cout << "+-------------------------ATTACK--------------------------+" << endl;
    cout << left << setw(9) << "| Player" << left << setw(2) << player << left 
    << setw(10) << this->className << left << setw(15) << "strikes Player"  
    << left << setw(2) << opponent->getPlayer() << left << setw(10) 
    << opponent->getClassName() << right << setw(11) << "|" << endl; 
    cout << left << setw(7) << "| with" << right << setw(3) << hit << left 
    << setw(24) << " points of attack force." << right << setw(25) << "|" 
    << endl;
    cout << "+-------------------------ATTACK--------------------------+" << endl 
    << endl;
  }*/
  return hit;
}

/******************************************************************************
* Function: double Goblin::sixSidedDefense()
* Description: Calculates result of a die roll for defense.
* Parameters: No parameters.
* Pre-Conditions: Goblin object must be constructed.
* Post-Conditions: Returns the defense points.
******************************************************************************/
double Goblin::sixSidedDefense()
{
  double parry = rollSixSidedDie();
  /*cout << "+-------------------------DEFENSE-------------------------+" << endl;
  cout << left << setw(9) << "| Player" << left << setw(2) << player << left << setw(24) << "Goblin blocks the attack" << right << setw(24) << "|" << endl;
  cout << left << setw(8) << "| with " << right << setw(2) << parry << left << setw(19) << " points of defense." << right << setw(30) << "|" << endl;
  cout << "+-------------------------DEFENSE-------------------------+" << endl << endl;
  */
  return parry;
}