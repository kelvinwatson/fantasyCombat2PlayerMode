/******************************************************************************
* Program Filename: Humanoid.cpp
* Author: Kelvin Watson (OSU ID 932540242)
* Date: 7 February, 2015
* Description: (lab5, CS 162) Implementation for Humanoid.h. Humanoid is an
*   abstract class.
* Input:  See individual member functions.
* Output: See individual member functions.
******************************************************************************/
#include "Humanoid.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <iomanip>
using std::left;
using std::right;
using std::setw;
#include <cstdlib>
#include <ctime> 

/******************************************************************************
* Function: Humanoid::Humanoid()
* Description: Default constructor.
* Parameters:  No parameters.
* Pre-Conditions: Humanoid/derived class object must be declared in main().
* Post-Conditions: srand function called using time(NULL) parameter.
******************************************************************************/
Humanoid::Humanoid()
{
		srand(time(NULL));
}


/******************************************************************************
* Function: Humanoid::Humanoid(string className, double armor, double strength, 
*  int player, double achilles)
* Description: Parameterized constructor that initializes via member
*  initialization list.
* Parameters: Data members of the Humanoid class.
* Pre-Conditions: Humanoid/derived class object must be declared in main().
* Post-Conditions: Character stats are displayed to the console.
******************************************************************************/
Humanoid::Humanoid(string className, double armor, double strength, int player, 
double achilles) : className(className), armor(armor), strength(strength), 
player(player), achilles(achilles)
{
		srand(time(NULL));
  /*cout << "+----------------------------------+" << endl;
  cout << "| Player " << player << ", " << left << setw(14) << className 
  << right << setw(10) << "|" << endl;
  cout << left << setw(12) << "| armor " << left << setw(2) << armor << right 
  << setw(22) << "|" << endl; 
  cout << left << setw(12) << "| strength: " << left << setw(2) << strength 
  << right << setw(22) << "|" << endl;
  cout << "+----------------------------------+" << endl;*/
}


/******************************************************************************
* Function: Humanoid::~Humanoid()
* Description: Destructor
* Parameters: No parameters
* Pre-Conditions: Humanoid/derived object must be declared in main().
* Post-Conditions: Humanoid object destroyed.
******************************************************************************/
Humanoid::~Humanoid()
{
}


/******************************************************************************
* Function: int Humanoid::rollSixSidedDie()
* Description: Generates a random number between 1 and 6.
* Parameters: No parameters.
* Pre-Conditions: Humanoid object must be declared in main(). srand function
*  should have been called prior to executing function.
* Post-Conditions: Returns a random number between 1 and 6. 
******************************************************************************/
int Humanoid::rollSixSidedDie()
{
		int random = (rand() % 6) + 1;
  return random;
}


/******************************************************************************
* Function: int Humanoid::rollTenSidedDie()
* Description: Generates a random number between 1 and 10.
* Parameters: No parameters.
* Pre-Conditions: Humanoid/derived class object must be declared in main(). 
*  srand function should have been called prior to executing function.
* Post-Conditions: Returns a random number between 1 and 10. 
******************************************************************************/
int Humanoid::rollTenSidedDie()
{
		int random = (rand() % 10) + 1;
  return random;
}


/******************************************************************************
* Function: string Humanoid::getClassName()
* Description: Accessor function, returns the member variable className.
* Parameters: No parameters.
* Pre-Conditions: Humanoid/derived object must be declared in main().
* Post-Conditions: Returns the member variable className. 
******************************************************************************/
string Humanoid::getClassName()
{
		return className;
}


/******************************************************************************
* Function: double Humanoid::getStrength()
* Description: Accessor function, returns the member variable strength.
* Parameters: No parameters.
* Pre-Conditions: Humanoid/derived object must be declared in main().
* Post-Conditions: Returns the member variable strength. 
******************************************************************************/
double Humanoid::getArmor()
{
    return armor;
}

/******************************************************************************
* Function: double Humanoid::getStrength()
* Description: Accessor function, returns the member variable strength.
* Parameters: No parameters.
* Pre-Conditions: Humanoid/derived object must be declared in main().
* Post-Conditions: Returns the member variable strength. 
******************************************************************************/
double Humanoid::getStrength()
{
		return strength;		
}


/******************************************************************************
* Function: int Humanoid::getPlayer()
* Description: Accessor function, returns the member variable player.
* Parameters: No parameters.
* Pre-Conditions: Humanoid/derived object must be declared in main().
* Post-Conditions: Returns the member variable player. 
******************************************************************************/
int Humanoid::getPlayer()
{
    return player;
}


/******************************************************************************
* Function: void Humanoid::setAchilles(double achilles)
* Description: Mutator function, sets the member variable achilles.
* Parameters: Takes a double by value as an argument.
* Pre-Conditions: Humanoid/derived object must be declared in main().
* Post-Conditions: Sets the member variable achilles. 
******************************************************************************/
void Humanoid::setAchilles(double achilles)
{
		this->achilles = achilles;
}

/******************************************************************************
* Function: double getAchilles() const
* Description: Accessor function, returns the member variable achilles.
* Parameters: No parameters.
* Pre-Conditions: Humanoid/derived object must be declared in main().
* Post-Conditions: Returns the member variable player. 
******************************************************************************/
double Humanoid::getAchilles() const
{
  return achilles;
}


/******************************************************************************
* Function: void Humanoid::setStrength(double strength)
* Description: Mutator function, sets the member variable achilles.
* Parameters: Takes a double by value as an argument.
* Pre-Conditions: Humanoid/derived object must be declared in main().
* Post-Conditions: Sets the member variable achilles. 
******************************************************************************/
void Humanoid::setStrength(double strength)
{
		this->strength = strength;
}


/******************************************************************************
* Function: void Humanoid::takeDamage(double attack)
* Description: Calculates the damage taken by a character.
* Parameters: Takes a double by value as an argument.
* Pre-Conditions: Humanoid/derived object must be declared in main().
* Post-Conditions: Calculates the damage taken (if any) by a character based on 
*  an opponent's attack, and its own defense roll and armor. 
******************************************************************************/
double Humanoid::takeDamage(double attack)
{
  double defense = sixSidedDefense();
  double damage = attack - defense - armor;
  /*cout << "+-------------------------OUTCOME-------------------------+" << endl;
  cout << left << setw(10) << "| Attack =" << right << setw(3) << attack 
  << left << setw(11) << ", Defense =" << right << setw(3) << defense << left 
  << setw(9) << ", Armor =" << right << setw(3) << armor << left << setw(8) 
  << ", Damage =" << right << setw(4) << damage << right << setw(6) << "|" 
  << endl;*/
  
  if (damage >= 0.5)
  {  
    /*cout << left << setw(9) << "| Player " << left << setw(2) << this->player 
    << left << setw(9) << this->className << left << setw(9) << " was hit!" 
    << right << setw(30) << "|" << endl;
    cout << left << setw(2) << "|" << left << setw(3) << damage << left 
    << setw(39) << " points of damage sustained." << right << setw(15) << "|" 
    << endl;*/
    setStrength(strength - damage);
  }
  else if (damage < 0.5)
  {
    /*cout << left << setw(9) << "| Player " << left << setw(2) << this->player 
    << left << setw(9) << this->className << left << setw(38) 
    << " blocked/evaded the attack! No damage." << right << setw(1) << "|" << endl;*/
  }
  /*cout << left << setw(27) << "| Remaining strength points" << right << setw(4) 
  << this->strength << left << setw(1) << "." << right << setw(27) << "|" 
  << endl;
  cout << "+-------------------------OUTCOME-------------------------+" << endl << endl;*/ //59 chars
  return defense;
}
