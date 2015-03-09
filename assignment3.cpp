/******************************************************************************
* Program Filename: assignment3.cpp
* Author: Kelvin Watson (OSU ID 932540242)
* Date: 7 February, 2015
* Description: (Assignment3 - Fantasy Combat, CS 162). Driver program, plays 
*  out a fantasy combat scenario.
* Input: User inputs either start or quit, and 2 character choices. Enter keys
*  allow the user to play through a combat scenario between two characters.
* Output: Outcomes of attacks and defensive maneuvers are displayed.
******************************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <cstdlib>
#include <ctime>
#include <string>
using std::string;
#include "functions.h"
#include "Humanoid.h"
#include "Goblin.h"
#include "Barbarian.h"
#include "Reptilian.h"
#include "BlueMen.h"
#include "Shadow.h"
		
int main()
{
		showIntro();
		string command;
		do
		{
				command.clear();
				showMenu();
				command = getCommand();
				if (command == "start")
				{
					showCharacters();
					string player1 = getCharacter(1);
					Humanoid* player1Ptr;
					Humanoid* player2Ptr;
					if (player1 == "g") player1Ptr = new Goblin(1); 
					else if (player1 == "b") player1Ptr = new Barbarian(1);
					else if (player1 == "r") player1Ptr = new Reptilian(1);
					else if (player1 == "m") player1Ptr = new BlueMen(1);
					else if (player1 == "s") player1Ptr = new Shadow(1);

					showCharacters();
					string player2 = getCharacter(2);
					if (player2 == "g") player2Ptr = new Goblin(2); 
					else if (player2 == "b") player2Ptr = new Barbarian(2);
					else if (player2 == "r") player2Ptr = new Reptilian(2);
					else if (player2 == "m") player2Ptr = new BlueMen(2);
					else if (player2 == "s") player2Ptr = new Shadow(2);
						
					int attackNow = whichPlayerFirst();
					
					getEnterKey();

					//press enter to proceed
					
					bool slain = false;
							
					if(attackNow==1)//player 1 proceeds first
					{		
							do
							{
									if(slain == false)
									{ 
											cout << "Player 1's attack!" << endl << endl;
											double attack1 = player1Ptr->attackOpponent(player2Ptr);
											printAttack(attack1, player1Ptr, player2Ptr);
                      double defense2 = player2Ptr->takeDamage(attack1);
                      printSixSidedDefense(defense2,player2Ptr);
                      printTakeDamage(attack1,defense2,player2Ptr);
											getEnterKey();
											slain = testSlain(player1Ptr, player2Ptr);
									    if (slain==true)
                        printSlain(player1Ptr,player2Ptr);
                  }
									if(slain == false) 
									{
											cout << "Player 2's retaliation!" << endl << endl;
											double attack2 = player2Ptr->attackOpponent(player1Ptr);
									 	  printAttack(attack2, player2Ptr, player1Ptr);
                      double defense1 = player1Ptr->takeDamage(attack2);
                      printSixSidedDefense(defense1,player1Ptr);
                      printTakeDamage(attack2,defense1,player1Ptr);
                      getEnterKey();
											slain = testSlain(player1Ptr, player2Ptr);
                      if (slain==true)
                        printSlain(player1Ptr,player2Ptr);
									}
							}while(slain == false);
					}
					else if (attackNow == 2)//player 2 attacks first
					{
							do
							{
									if(slain == false)
									{ 
											cout << "Player 2's attack!" << endl << endl;
											double attack2 = player2Ptr->attackOpponent(player1Ptr);
                      printAttack(attack2, player2Ptr, player1Ptr);
                      double defense1 = player1Ptr->takeDamage(attack2);
                      printSixSidedDefense(defense1,player1Ptr);
                      printTakeDamage(attack2,defense1,player1Ptr);
                      getEnterKey();
                      slain = testSlain(player1Ptr, player2Ptr);
                      if (slain==true)
                        printSlain(player1Ptr,player2Ptr);
									}
									if(slain == false)
									{
											cout << "Player 1's retaliation!" << endl << endl;
											double attack1 = player1Ptr->attackOpponent(player2Ptr);
                      printAttack(attack1,player1Ptr,player2Ptr);
                      double defense2 = player2Ptr->takeDamage(attack1);
                      printSixSidedDefense(defense2,player2Ptr);
                      printTakeDamage(attack1,defense2,player2Ptr);
                      getEnterKey();
                      slain = testSlain(player1Ptr, player2Ptr);
									    if (slain==true)
                        printSlain(player1Ptr,player2Ptr);
                  }
							}while (slain == false);	
					}
					delete player1Ptr;
					delete player2Ptr;
				}
				else if (command == "quit")
				{
						cout << "Exiting Fantasy Combat game. Goodbye." << endl;
						exit(EXIT_SUCCESS);
				}
		}while(command != "quit");
		return 0;
}