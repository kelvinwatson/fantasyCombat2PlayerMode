/******************************************************************************
* Program Filename: functions.cpp
* Author: Kelvin Watson (OSU ID 932540242)
* Date: 3 February, 2015
* Description: (lab5, CS 162) Implementation for functions.h.
* Input:  See individual member functions.
* Output: See individual member functions.
******************************************************************************/
#include "functions.h"
#include "Humanoid.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <iomanip>
using std::setw;
using std::left;
using std::right;
#include <sstream>
using std::istringstream;
#include <string>
using std::string;
#include <cstdlib>
#include <ctime>


/******************************************************************************
* Function: void showIntro()
* Description: Clears the screen and displays the title.
* Parameters:  No parameters.
* Pre-Conditions: Called by main() function.
* Post-Conditions: Displays the title to the console.
******************************************************************************/
void showIntro()
{
  system("clear");
  cout << "******************" << endl;
  cout << "* FANTASY COMBAT *" << endl;
  cout << "******************" << endl;
}


/******************************************************************************
* Function: void showMenu()
* Description: Displays menu of options.
* Parameters:  No parameters.
* Pre-Conditions: Called by main() function.
* Post-Conditions: Displays the menu to the console.
******************************************************************************/
void showMenu()
{
  cout << endl << "Please enter a command: " << endl << endl;
  cout << left << setw(8) << "COMMAND" << left << "DESCRIPTION"
  << endl;
  cout << left << setw(8) << "start" << left << "Start new game" << endl;
  cout << left << setw(8) << "quit" << left << "Exit game" << endl;
  cout << "----------------------" << endl;
}


/******************************************************************************
* Function: string getCommand()
* Description: Gets and validates user command choice.
* Parameters:  No parameters.
* Pre-Conditions: Called by main() function. Takes string input from keyboard.
* Post-Conditions: Returns the user's command choice.
******************************************************************************/
string getCommand()
{
  string choice;
  cout << endl << "Please enter a command from the menu above: ";
  getline(cin,choice);
  while (choice != "start" && choice != "START"
  && choice != "quit" && choice != "QUIT")
  {
    if (choice.empty())
      cout << "Empty command. Please re-enter: ";
    else
      cout << "Invalid command. Please re-enter: ";
    choice.clear();
    getline(cin,choice);
  }
  return choice;
}

/******************************************************************************
* Function: void printStats(Humanoid* character)
* Description: Prints a character's initial stats.
* Parameters: Takes a Humanoid pointer as an argument.
* Pre-Conditions: Called by main() function.
* Post-Conditions: No values returned.
******************************************************************************/
void printStats(Humanoid* character)
{
  cout << "+----------------------------------+" << endl;
  cout << "| Player " << character->getPlayer() << ", " << left << setw(14) 
  << character->getClassName() << right << setw(10) << "|" << endl;
  cout << left << setw(12) << "| armor " << left << setw(2) << 
  character->getArmor() << right << setw(22) << "|" << endl; 
  cout << left << setw(12) << "| strength: " << left << setw(2) 
  << character->getStrength() << right << setw(22) << "|" << endl;
  cout << "+----------------------------------+" << endl;
}

/******************************************************************************
* Function: void printAttack(const double,Humanoid*,Humanoid*)
* Description: Prints the result of an attack
* Parameters: Takes a const double, and two Humanoid pointers.
* Pre-Conditions: Called by main() function.
* Post-Conditions: No values returned. Result of attack printed.
******************************************************************************/
void printAttack(const double strike, Humanoid* attacker, Humanoid* defender)
{
  if (defender->getAchilles()==0.5)  
  { 
    cout << "+-------------------------ATTACK--------------------------+" 
    << endl;
    cout << left << setw(9) << "| Player" << left << setw(2) << 
    attacker->getPlayer() << left << setw(10) << attacker->getClassName() << left 
    << setw(12) << "cuts Player" << left << setw(2) << defender->getPlayer() 
    << left << setw(10) << defender->getClassName() << right << setw(14) 
    << "|" << endl; 
    cout << left << setw(23) << "| Achilles tendon with" << right << setw(3) 
    << strike << left << setw(24) << " points of attack force." << right 
    << setw(9) << "|" << endl;
    cout << "+-------------------------ATTACK--------------------------+" << endl 
    << endl;
  }
  else if (defender->getAchilles()==1)
  { cout << "+-------------------------ATTACK--------------------------+" 
    << endl;
    cout << left << setw(9) << "| Player" << left << setw(2) << 
    attacker->getPlayer() << left << setw(10) << attacker->getClassName() << left 
    << setw(15) << "strikes Player" << left << setw(2) << defender->getPlayer() 
    << left << setw(10) << defender->getClassName() << right << setw(11) << "|" 
    << endl; 
    cout << left << setw(7) << "| with" << right << setw(3) << strike << left 
    << setw(24) << " points of attack force." << right << setw(25) << "|" 
    << endl;
    cout << "+-------------------------ATTACK--------------------------+" 
    << endl << endl;
  }
}


/******************************************************************************
* Function: void printTakeDamage(Humanoid*)
* Description: Prints the result of a defense maneuver.
* Parameters: Takes a const double as an argument.
* Pre-Conditions: Called by main() function.
* Post-Conditions: No values returned. Result of defensive action printed.
******************************************************************************/
void printSixSidedDefense(const double block, Humanoid* defender)
{
  if (block==99)
  {
    cout << "+-------------------------DEFENSE-------------------------+" << endl;
    cout << left << setw(9) << "| Player" << left << setw(2) << defender->getPlayer() << left << setw(9) << defender->getClassName() << setw(23) << " manipulates perception" << right << setw(16) << "|" << endl;
    cout << left << setw(24) << "| and evades the attack." << setw(9) << defender->getClassName() << setw(20) << " sustains no damage." << right << setw(6) << "|" << endl;
    cout << "+-------------------------DEFENSE-------------------------+" << endl << endl;
  }
  else
  {
    cout << "+-------------------------DEFENSE-------------------------+" << endl;
    cout << left << setw(9) << "| Player" << left << setw(2) << defender->getPlayer() << left << setw(9) << defender->getClassName() << setw(18) << " blocks the attack" << right << setw(21) << "|" << endl;
    cout << left << setw(8) << "| with " << right << setw(2) << block << left << setw(19) << " points of defense." << right << setw(30) << "|" << endl;
    cout << "+-------------------------DEFENSE-------------------------+" << endl << endl;
  }
 }

/******************************************************************************
* Function: void printTakeDamage(Humanoid*)
* Description: Prints the result of a defense maneuver.
* Parameters: Takes a const double and a Humanoid pointer as an argument.
* Pre-Conditions: Called by main() function.
* Post-Conditions: No values returned. Result of defensive action printed.
******************************************************************************/
void printTakeDamage(const double strike, const double block, Humanoid* defender)
{
  double shielding = defender->getArmor();
  double damage = strike - block - shielding;
  cout << "+-------------------------OUTCOME-------------------------+" << endl;
  cout << left << setw(10) << "| Attack =" << right << setw(3) << strike 
  << left << setw(11) << ", Defense =" << right << setw(3) << block << left 
  << setw(9) << ", Armor =" << right << setw(3) << shielding << left << setw(8) 
  << ", Damage =" << right << setw(4) << damage << right 
  << setw(6) << "|" << endl;
  if (damage >= 0.5)
  {  
    cout << left << setw(9) << "| Player " << left << setw(2) << defender->getPlayer() 
    << left << setw(9) << defender->getClassName() << left << setw(9) << " was hit!" 
    << right << setw(30) << "|" << endl;
    cout << left << setw(2) << "|" << left << setw(3) << damage << left 
    << setw(39) << " points of damage sustained." << right << setw(15) << "|" 
    << endl;
  }
  else if (damage < 0.5)
  {
    cout << left << setw(9) << "| Player " << left << setw(2) << defender->getPlayer() 
    << left << setw(9) << defender->getClassName() << left << setw(38) 
    << " blocked/evaded the attack! No damage." << right << setw(1) << "|" << endl;
  }
  cout << left << setw(27) << "| Remaining strength points" << right << setw(4) 
  << defender->getStrength() << left << setw(1) << "." << right << setw(27) << "|" 
  << endl;
  cout << "+-------------------------OUTCOME-------------------------+" << endl << endl;
}


/******************************************************************************
* Function: void getEnterKey()
* Description: Reads and validates the enter key.
* Parameters:  No parameters.
* Pre-Conditions: Called by main() function. Takes user input from keyboard.
* Post-Conditions: No values returned.
******************************************************************************/
void getEnterKey()
{
  string key;
  cout << "Press the <ENTER> key to proceed" << endl;
  getline(cin,key);
  while (!key.empty())
  {
    cout << "Invalid key. Please press the <ENTER> key: ";
    key.clear();
    getline(cin,key);
  }
}

/******************************************************************************
* Function: void showCharacters()
* Description: Displays character menu.
* Parameters:  No parameters.
* Pre-Conditions: Called by main() function.
* Post-Conditions: No values returned. Displays menu to console.
******************************************************************************/
void showCharacters()
{
  cout << "-----------------------------------------------------" << endl << endl;
  cout << left << setw(4) << "KEY" << left << setw(11) << "CHARACTER" << left << "ABILITIES" << endl; 
  cout << left << setw(4) << "g" << left << setw(11) << "Goblin" << "Can cut opponent's Achilles Tendon" << endl;
  cout << left << setw(4) << "b" << left << setw(11) << "Barbarian" << "Wields a sword but no armor"<< endl;
  cout << left << setw(4) << "r" << left << setw(11) << "Reptilian" << "Tough skin but slow" << endl;
  cout << left << setw(4) << "m" << left << setw(11) << "Blue Men" << "Small and difficult to hit"<< endl;
  cout << left << setw(4) << "s" << left << setw(11) << "The Shadow" << "Can manipulate perception" << endl;
  cout << "-----------------------------------------------------" << endl;
}


/******************************************************************************
* Function: string getCharacter(int playerNum)
* Description: Gets and validates string input.
* Parameters: Takes the player number (1 or 2) as a parameter.
* Pre-Conditions: Called by main() function.
* Post-Conditions: Returns the choice of character.
******************************************************************************/
string getCharacter(int playerNum)
{
  string choice;
  cout << endl << "Player " << playerNum << ", please choose a character: ";
  getline(cin,choice);
  while (choice != "g" && choice != "G" && choice != "b" && choice != "B"
  && choice != "r" && choice != "R" && choice != "m" && choice != "M" 
  && choice != "s" && choice != "S")
  {
    if (choice.empty())
      cout << "You did not enter a character. Please re-enter: ";
    else
      cout << "Invalid character. Please re-enter: ";
    choice.clear();
    getline(cin,choice);
  }
  return choice;
}


/******************************************************************************
* Function: int whichPlayerFirst()
* Description: Determines which player attacks first.
* Parameters: No parameters.
* Pre-Conditions: Called by main() function.
* Post-Conditions: Returns either 1 or 2.
******************************************************************************/
int whichPlayerFirst()
{
  cout << "Determining which player will attack first..." << endl;
  srand(time(NULL));
  int random = rand()%2;
  if (random == 0)
    return 1;
  else 
    return 2;
}


/******************************************************************************
* Function: bool testSlain(Humanoid* player1, Humanoid* player2)
* Description: Tests whether or not players have strength below 0.5.
* Parameters: Accepts two pointers to Humanoid class.
* Pre-Conditions: Called by main() function. 
* Post-Conditions: Returns true (character slain) or false (no character slain)
******************************************************************************/
bool testSlain(Humanoid* player1, Humanoid* player2)
{
  bool slain = false;
  if (player1->getStrength() < 0.5) //test for slain characters
    slain = true;
  if (player2->getStrength() < 0.5)    
    slain = true;
  return slain;
}


/******************************************************************************
* Function: void printSlain(Humanoid* player1,Humanoid* player2)
* Description: Tests whether or not players have strength below 0.5 and prints
*   the result to console.
* Parameters: Accepts two pointers to Humanoid class.
* Pre-Conditions: Called by main() function. 
* Post-Conditions: Prints which player was slain or victorious.
******************************************************************************/
void printSlain(Humanoid* player1,Humanoid* player2)
{
  bool slain = false;
  if (player1->getStrength() < 0.5) //test for slain characters
  {
    slain = true;
    cout << "Player 1 " << player1->getClassName() << " slain." << endl;
    cout << "Player 2 " << player2->getClassName() << " victorious!" << endl;
   }
  if (player2->getStrength() < 0.5)
  {
    slain = true;
    cout << "Player 2 " << player2->getClassName() << " slain." << endl;
    cout << "Player 1 " << player1->getClassName() << " victorious!" << endl;
  } 
}
