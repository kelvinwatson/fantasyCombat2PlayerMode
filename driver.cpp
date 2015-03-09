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

void time_delay()
{
  clock_t start = clock();
  clock_t end = 0.01*CLOCKS_PER_SEC + start;
  while(clock() < end); //while (clock!=end)
}

int main()
{
  srand(time(NULL));
  double defense1 = 0, defense2 = 0;
  cout << endl << "Running 1000 battles of Goblin VS Goblin...please wait 10 seconds" << endl;
  double accumulatorOne = 0, accumulatorTwo = 0, percentWinsOne = 0, percentWinsTwo = 0;
  for(int i=0; i<1000; i++)
  {
    
    Humanoid* player1Ptr = new Goblin(1);
    time_delay();
    Humanoid* player2Ptr = new Goblin(2);
    bool slain = false;
    do
    {
      if(slain == false)
      { 
        double attack1 = player1Ptr->attackOpponent(player2Ptr);
        defense2 = player2Ptr->takeDamage(attack1);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(slain == false) 
      {
        double attack2 = player2Ptr->attackOpponent(player1Ptr);
        defense1 = player1Ptr->takeDamage(attack2);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(player2Ptr->getStrength() < 0.5)
        accumulatorOne++;
      if(player1Ptr->getStrength() < 0.5)
        accumulatorTwo++;     
    }while(slain == false);  
    delete player1Ptr;
    delete player2Ptr;
  }
  percentWinsOne = accumulatorOne/10;
  percentWinsTwo = accumulatorTwo/10;
  cout << "Goblin1 wins " << percentWinsOne << " percent of the time." << endl;
  cout << "Goblin2 wins " << percentWinsTwo << " percent of the time." << endl;

  cout << endl << "Running 1000 battles of Goblin VS Barbarian...please wait 10 seconds" << endl;
  accumulatorOne = 0, accumulatorTwo = 0, percentWinsOne = 0, percentWinsTwo = 0;
  for(int i=0; i<1000; i++)
  {
    
    Humanoid* player1Ptr = new Goblin(1);
    time_delay();
    Humanoid* player2Ptr = new Barbarian(2);
    bool slain = false;
    do
    {
      if(slain == false)
      { 
        double attack1 = player1Ptr->attackOpponent(player2Ptr);
        defense2 = player2Ptr->takeDamage(attack1);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(slain == false) 
      {
        double attack2 = player2Ptr->attackOpponent(player1Ptr);
        defense1 = player1Ptr->takeDamage(attack2);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(player2Ptr->getStrength() < 0.5)
        accumulatorOne++;
      if(player1Ptr->getStrength() < 0.5)
        accumulatorTwo++;     
    }while(slain == false);  
    delete player1Ptr;
    delete player2Ptr;
  }
  percentWinsOne = accumulatorOne/10;
  percentWinsTwo = accumulatorTwo/10;
  cout << "Goblin wins " << percentWinsOne << " percent of the time." << endl;
  cout << "Barbarian wins " << percentWinsTwo << " percent of the time." << endl;


  cout << endl << "Running 1000 battles of Goblin VS Reptilian...please wait 10 seconds" << endl;
  accumulatorOne = 0, accumulatorTwo = 0, percentWinsOne = 0, percentWinsTwo = 0;
  for(int i=0; i<1000; i++)
  {
    
    Humanoid* player1Ptr = new Goblin(1);
    time_delay();
    Humanoid* player2Ptr = new Reptilian(2);
    bool slain = false;
    do
    {
      if(slain == false)
      { 
        double attack1 = player1Ptr->attackOpponent(player2Ptr);
        defense2 = player2Ptr->takeDamage(attack1);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(slain == false) 
      {
        double attack2 = player2Ptr->attackOpponent(player1Ptr);
        defense1 = player1Ptr->takeDamage(attack2);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(player2Ptr->getStrength() < 0.5)
        accumulatorOne++;
      if(player1Ptr->getStrength() < 0.5)
        accumulatorTwo++;     
    }while(slain == false);  
    delete player1Ptr;
    delete player2Ptr;
  }
  percentWinsOne = accumulatorOne/10;
  percentWinsTwo = accumulatorTwo/10;
  cout << "Goblin wins " << percentWinsOne << " percent of the time." << endl;
  cout << "Reptilian wins " << percentWinsTwo << " percent of the time." << endl;


  cout << endl << "Running 1000 battles of Goblin VS Blue Men...please wait 10 seconds" << endl;
  accumulatorOne = 0, accumulatorTwo = 0, percentWinsOne = 0, percentWinsTwo = 0;
  for(int i=0; i<1000; i++)
  {
    
    Humanoid* player1Ptr = new Goblin(1);
    time_delay();
    Humanoid* player2Ptr = new BlueMen(2);
    bool slain = false;
    do
    {
      if(slain == false)
      { 
        double attack1 = player1Ptr->attackOpponent(player2Ptr);
        defense2 = player2Ptr->takeDamage(attack1);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(slain == false) 
      {
        double attack2 = player2Ptr->attackOpponent(player1Ptr);
        defense1 = player1Ptr->takeDamage(attack2);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(player2Ptr->getStrength() < 0.5)
        accumulatorOne++;
      if(player1Ptr->getStrength() < 0.5)
        accumulatorTwo++;     
    }while(slain == false);  
    delete player1Ptr;
    delete player2Ptr;
  }
  percentWinsOne = accumulatorOne/10;
  percentWinsTwo = accumulatorTwo/10;
  cout << "Goblin wins " << percentWinsOne << " percent of the time." << endl;
  cout << "Blue Men win " << percentWinsTwo << " percent of the time." << endl;

  cout << endl << "Running 1000 battles of Goblin VS Shadow...please wait 10 seconds" << endl;
  accumulatorOne = 0, accumulatorTwo = 0, percentWinsOne = 0, percentWinsTwo = 0;
  for(int i=0; i<1000; i++)
  {
    
    Humanoid* player1Ptr = new Goblin(1);
    time_delay();
    Humanoid* player2Ptr = new Shadow(2);
    bool slain = false;
    do
    {
      if(slain == false)
      { 
        double attack1 = player1Ptr->attackOpponent(player2Ptr);
        defense2 = player2Ptr->takeDamage(attack1);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(slain == false) 
      {
        double attack2 = player2Ptr->attackOpponent(player1Ptr);
        defense1 = player1Ptr->takeDamage(attack2);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(player2Ptr->getStrength() < 0.5)
        accumulatorOne++;
      if(player1Ptr->getStrength() < 0.5)
        accumulatorTwo++;     
    }while(slain == false);  
    delete player1Ptr;
    delete player2Ptr;
  }
  percentWinsOne = accumulatorOne/10;
  percentWinsTwo = accumulatorTwo/10;
  cout << "Goblin wins " << percentWinsOne << " percent of the time." << endl;
  cout << "Shadow wins " << percentWinsTwo << " percent of the time." << endl;

  cout << endl << "Running 1000 battles of Barbarian VS Goblin...please wait 10 seconds" << endl;
  accumulatorOne = 0, accumulatorTwo = 0, percentWinsOne = 0, percentWinsTwo = 0;
  for(int i=0; i<1000; i++)
  {
    
    Humanoid* player1Ptr = new Barbarian(1);
    time_delay();
    Humanoid* player2Ptr = new Goblin(2);
    bool slain = false;
    do
    {
      if(slain == false)
      { 
        double attack1 = player1Ptr->attackOpponent(player2Ptr);
        defense2 = player2Ptr->takeDamage(attack1);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(slain == false) 
      {
        double attack2 = player2Ptr->attackOpponent(player1Ptr);
        defense1 = player1Ptr->takeDamage(attack2);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(player2Ptr->getStrength() < 0.5)
        accumulatorOne++;
      if(player1Ptr->getStrength() < 0.5)
        accumulatorTwo++;     
    }while(slain == false);  
    delete player1Ptr;
    delete player2Ptr;
  }
  percentWinsOne = accumulatorOne/10;
  percentWinsTwo = accumulatorTwo/10;
  cout << "Barbarian wins " << percentWinsOne << " percent of the time." << endl;
  cout << "Goblin wins " << percentWinsTwo << " percent of the time." << endl;

  cout << endl << "Running 1000 battles of Barbarian VS Barbarian...please wait 10 seconds" << endl;
  accumulatorOne = 0, accumulatorTwo = 0, percentWinsOne = 0, percentWinsTwo = 0;
  for(int i=0; i<1000; i++)
  {
    
    Humanoid* player1Ptr = new Barbarian(1);
    time_delay();
    Humanoid* player2Ptr = new Barbarian(2);
    bool slain = false;
    do
    {
      if(slain == false)
      { 
        double attack1 = player1Ptr->attackOpponent(player2Ptr);
        defense2 = player2Ptr->takeDamage(attack1);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(slain == false) 
      {
        double attack2 = player2Ptr->attackOpponent(player1Ptr);
        defense1 = player1Ptr->takeDamage(attack2);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(player2Ptr->getStrength() < 0.5)
        accumulatorOne++;
      if(player1Ptr->getStrength() < 0.5)
        accumulatorTwo++;     
    }while(slain == false);  
    delete player1Ptr;
    delete player2Ptr;
  }
  percentWinsOne = accumulatorOne/10;
  percentWinsTwo = accumulatorTwo/10;
  cout << "Barbarian1 wins " << percentWinsOne << " percent of the time." << endl;
  cout << "Barbarian2 wins " << percentWinsTwo << " percent of the time." << endl;

  cout << endl << "Running 1000 battles of Barbarian VS Reptilian...please wait 10 seconds" << endl;
  accumulatorOne = 0, accumulatorTwo = 0, percentWinsOne = 0, percentWinsTwo = 0;
  for(int i=0; i<1000; i++)
  {
    
    Humanoid* player1Ptr = new Barbarian(1);
    time_delay();
    Humanoid* player2Ptr = new Reptilian(2);
    bool slain = false;
    do
    {
      if(slain == false)
      { 
        double attack1 = player1Ptr->attackOpponent(player2Ptr);
        defense2 = player2Ptr->takeDamage(attack1);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(slain == false) 
      {
        double attack2 = player2Ptr->attackOpponent(player1Ptr);
        defense1 = player1Ptr->takeDamage(attack2);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(player2Ptr->getStrength() < 0.5)
        accumulatorOne++;
      if(player1Ptr->getStrength() < 0.5)
        accumulatorTwo++;     
    }while(slain == false);  
    delete player1Ptr;
    delete player2Ptr;
  }
  percentWinsOne = accumulatorOne/10;
  percentWinsTwo = accumulatorTwo/10;
  cout << "Barbarian wins " << percentWinsOne << " percent of the time." << endl;
  cout << "Reptilian wins " << percentWinsTwo << " percent of the time." << endl;

  cout << endl << "Running 1000 battles of Barbarian VS Blue Men...please wait 10 seconds" << endl;
  accumulatorOne = 0, accumulatorTwo = 0, percentWinsOne = 0, percentWinsTwo = 0;
  for(int i=0; i<1000; i++)
  {
    
    Humanoid* player1Ptr = new Barbarian(1);
    time_delay();
    Humanoid* player2Ptr = new BlueMen(2);
    bool slain = false;
    do
    {
      if(slain == false)
      { 
        double attack1 = player1Ptr->attackOpponent(player2Ptr);
        defense2 = player2Ptr->takeDamage(attack1);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(slain == false) 
      {
        double attack2 = player2Ptr->attackOpponent(player1Ptr);
        defense1 = player1Ptr->takeDamage(attack2);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(player2Ptr->getStrength() < 0.5)
        accumulatorOne++;
      if(player1Ptr->getStrength() < 0.5)
        accumulatorTwo++;     
    }while(slain == false);  
    delete player1Ptr;
    delete player2Ptr;
  }
  percentWinsOne = accumulatorOne/10;
  percentWinsTwo = accumulatorTwo/10;
  cout << "Barbarian wins " << percentWinsOne << " percent of the time." << endl;
  cout << "Blue Men win " << percentWinsTwo << " percent of the time." << endl;

  cout << endl << "Running 1000 battles of Barbarian VS Shadow...please wait 10 seconds" << endl;
  accumulatorOne = 0, accumulatorTwo = 0, percentWinsOne = 0, percentWinsTwo = 0;
  for(int i=0; i<1000; i++)
  {
    
    Humanoid* player1Ptr = new Barbarian(1);
    time_delay();
    Humanoid* player2Ptr = new Shadow(2);
    bool slain = false;
    do
    {
      if(slain == false)
      { 
        double attack1 = player1Ptr->attackOpponent(player2Ptr);
        defense2 = player2Ptr->takeDamage(attack1);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(slain == false) 
      {
        double attack2 = player2Ptr->attackOpponent(player1Ptr);
        defense1 = player1Ptr->takeDamage(attack2);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(player2Ptr->getStrength() < 0.5)
        accumulatorOne++;
      if(player1Ptr->getStrength() < 0.5)
        accumulatorTwo++;     
    }while(slain == false);  
    delete player1Ptr;
    delete player2Ptr;
  }
  percentWinsOne = accumulatorOne/10;
  percentWinsTwo = accumulatorTwo/10;
  cout << "Barbarian wins " << percentWinsOne << " percent of the time." << endl;
  cout << "Shadow wins " << percentWinsTwo << " percent of the time." << endl;

  cout << endl << "Running 1000 battles of Reptilian VS Goblin...please wait 10 seconds" << endl;
  accumulatorOne = 0, accumulatorTwo = 0, percentWinsOne = 0, percentWinsTwo = 0;
  for(int i=0; i<1000; i++)
  {
    
    Humanoid* player1Ptr = new Reptilian(1);
    time_delay();
    Humanoid* player2Ptr = new Goblin(2);
    bool slain = false;
    do
    {
      if(slain == false)
      { 
        double attack1 = player1Ptr->attackOpponent(player2Ptr);
        defense2 = player2Ptr->takeDamage(attack1);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(slain == false) 
      {
        double attack2 = player2Ptr->attackOpponent(player1Ptr);
        defense1 = player1Ptr->takeDamage(attack2);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(player2Ptr->getStrength() < 0.5)
        accumulatorOne++;
      if(player1Ptr->getStrength() < 0.5)
        accumulatorTwo++;     
    }while(slain == false);  
    delete player1Ptr;
    delete player2Ptr;
  }
  percentWinsOne = accumulatorOne/10;
  percentWinsTwo = accumulatorTwo/10;
  cout << "Reptilian wins " << percentWinsOne << " percent of the time." << endl;
  cout << "Goblin wins " << percentWinsTwo << " percent of the time." << endl;

  cout << endl << "Running 1000 battles of Reptilian VS Barbarian...please wait 10 seconds" << endl;
  accumulatorOne = 0, accumulatorTwo = 0, percentWinsOne = 0, percentWinsTwo = 0;
  for(int i=0; i<1000; i++)
  {
    
    Humanoid* player1Ptr = new Reptilian(1);
    time_delay();
    Humanoid* player2Ptr = new Barbarian(2);
    bool slain = false;
    do
    {
      if(slain == false)
      { 
        double attack1 = player1Ptr->attackOpponent(player2Ptr);
        defense2 = player2Ptr->takeDamage(attack1);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(slain == false) 
      {
        double attack2 = player2Ptr->attackOpponent(player1Ptr);
        defense1 = player1Ptr->takeDamage(attack2);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(player2Ptr->getStrength() < 0.5)
        accumulatorOne++;
      if(player1Ptr->getStrength() < 0.5)
        accumulatorTwo++;     
    }while(slain == false);  
    delete player1Ptr;
    delete player2Ptr;
  }
  percentWinsOne = accumulatorOne/10;
  percentWinsTwo = accumulatorTwo/10;
  cout << "Reptilian wins " << percentWinsOne << " percent of the time." << endl;
  cout << "Barbarian wins " << percentWinsTwo << " percent of the time." << endl;

  cout << endl << "Running 1000 battles of Reptilian VS Reptilian...please wait 10 seconds" << endl;
  accumulatorOne = 0, accumulatorTwo = 0, percentWinsOne = 0, percentWinsTwo = 0;
  for(int i=0; i<1000; i++)
  {
    
    Humanoid* player1Ptr = new Reptilian(1);
    time_delay();
    Humanoid* player2Ptr = new Reptilian(2);
    bool slain = false;
    do
    {
      if(slain == false)
      { 
        double attack1 = player1Ptr->attackOpponent(player2Ptr);
        defense2 = player2Ptr->takeDamage(attack1);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(slain == false) 
      {
        double attack2 = player2Ptr->attackOpponent(player1Ptr);
        defense1 = player1Ptr->takeDamage(attack2);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(player2Ptr->getStrength() < 0.5)
        accumulatorOne++;
      if(player1Ptr->getStrength() < 0.5)
        accumulatorTwo++;     
    }while(slain == false);  
    delete player1Ptr;
    delete player2Ptr;
  }
  percentWinsOne = accumulatorOne/10;
  percentWinsTwo = accumulatorTwo/10;
  cout << "Reptilian1 wins " << percentWinsOne << " percent of the time." << endl;
  cout << "Reptilian2 wins " << percentWinsTwo << " percent of the time." << endl;

  cout << endl << "Running 1000 battles of Reptilian VS Blue Men...please wait 10 seconds" << endl;
  accumulatorOne = 0, accumulatorTwo = 0, percentWinsOne = 0, percentWinsTwo = 0;
  for(int i=0; i<1000; i++)
  {
    
    Humanoid* player1Ptr = new Reptilian(1);
    time_delay();
    Humanoid* player2Ptr = new BlueMen(2);
    bool slain = false;
    do
    {
      if(slain == false)
      { 
        double attack1 = player1Ptr->attackOpponent(player2Ptr);
        defense2 = player2Ptr->takeDamage(attack1);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(slain == false) 
      {
        double attack2 = player2Ptr->attackOpponent(player1Ptr);
        defense1 = player1Ptr->takeDamage(attack2);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(player2Ptr->getStrength() < 0.5)
        accumulatorOne++;
      if(player1Ptr->getStrength() < 0.5)
        accumulatorTwo++;     
    }while(slain == false);  
    delete player1Ptr;
    delete player2Ptr;
  }
  percentWinsOne = accumulatorOne/10;
  percentWinsTwo = accumulatorTwo/10;
  cout << "Reptilian wins " << percentWinsOne << " percent of the time." << endl;
  cout << "BlueMen win " << percentWinsTwo << " percent of the time." << endl;

  cout << endl << "Running 1000 battles of Reptilian VS Shadow...please wait 10 seconds" << endl;
  accumulatorOne = 0, accumulatorTwo = 0, percentWinsOne = 0, percentWinsTwo = 0;
  for(int i=0; i<1000; i++)
  {
    
    Humanoid* player1Ptr = new Reptilian(1);
    time_delay();
    Humanoid* player2Ptr = new Shadow(2);
    bool slain = false;
    do
    {
      if(slain == false)
      { 
        double attack1 = player1Ptr->attackOpponent(player2Ptr);
        defense2 = player2Ptr->takeDamage(attack1);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(slain == false) 
      {
        double attack2 = player2Ptr->attackOpponent(player1Ptr);
        defense1 = player1Ptr->takeDamage(attack2);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(player2Ptr->getStrength() < 0.5)
        accumulatorOne++;
      if(player1Ptr->getStrength() < 0.5)
        accumulatorTwo++;     
    }while(slain == false);  
    delete player1Ptr;
    delete player2Ptr;
  }
  percentWinsOne = accumulatorOne/10;
  percentWinsTwo = accumulatorTwo/10;
  cout << "Reptilian wins " << percentWinsOne << " percent of the time." << endl;
  cout << "Shadow wins " << percentWinsTwo << " percent of the time." << endl;

  cout << endl << "Running 1000 battles of Blue Men VS Goblin...please wait 10 seconds" << endl;
  accumulatorOne = 0, accumulatorTwo = 0, percentWinsOne = 0, percentWinsTwo = 0;
  for(int i=0; i<1000; i++)
  {
    
    Humanoid* player1Ptr = new BlueMen(1);
    time_delay();
    Humanoid* player2Ptr = new Goblin(2);
    bool slain = false;
    do
    {
      if(slain == false)
      { 
        double attack1 = player1Ptr->attackOpponent(player2Ptr);
        defense2 = player2Ptr->takeDamage(attack1);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(slain == false) 
      {
        double attack2 = player2Ptr->attackOpponent(player1Ptr);
        defense1 = player1Ptr->takeDamage(attack2);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(player2Ptr->getStrength() < 0.5)
        accumulatorOne++;
      if(player1Ptr->getStrength() < 0.5)
        accumulatorTwo++;     
    }while(slain == false);  
    delete player1Ptr;
    delete player2Ptr;
  }
  percentWinsOne = accumulatorOne/10;
  percentWinsTwo = accumulatorTwo/10;
  cout << "Blue Men win " << percentWinsOne << " percent of the time." << endl;
  cout << "Goblin wins " << percentWinsTwo << " percent of the time." << endl;

  cout << endl << "Running 1000 battles of Blue Men VS Barbarian...please wait 10 seconds" << endl;
  accumulatorOne = 0, accumulatorTwo = 0, percentWinsOne = 0, percentWinsTwo = 0;
  for(int i=0; i<1000; i++)
  {
    
    Humanoid* player1Ptr = new BlueMen(1);
    time_delay();
    Humanoid* player2Ptr = new Barbarian(2);
    bool slain = false;
    do
    {
      if(slain == false)
      { 
        double attack1 = player1Ptr->attackOpponent(player2Ptr);
        defense2 = player2Ptr->takeDamage(attack1);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(slain == false) 
      {
        double attack2 = player2Ptr->attackOpponent(player1Ptr);
        defense1 = player1Ptr->takeDamage(attack2);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(player2Ptr->getStrength() < 0.5)
        accumulatorOne++;
      if(player1Ptr->getStrength() < 0.5)
        accumulatorTwo++;     
    }while(slain == false);  
    delete player1Ptr;
    delete player2Ptr;
  }
  percentWinsOne = accumulatorOne/10;
  percentWinsTwo = accumulatorTwo/10;
  cout << "Blue Men win " << percentWinsOne << " percent of the time." << endl;
  cout << "Barbarian wins " << percentWinsTwo << " percent of the time." << endl;

  cout << endl << "Running 1000 battles of Blue Men VS Reptilian...please wait 10 seconds" << endl;
  accumulatorOne = 0, accumulatorTwo = 0, percentWinsOne = 0, percentWinsTwo = 0;
  for(int i=0; i<1000; i++)
  {
    
    Humanoid* player1Ptr = new BlueMen(1);
    time_delay();
    Humanoid* player2Ptr = new Reptilian(2);
    bool slain = false;
    do
    {
      if(slain == false)
      { 
        double attack1 = player1Ptr->attackOpponent(player2Ptr);
        defense2 = player2Ptr->takeDamage(attack1);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(slain == false) 
      {
        double attack2 = player2Ptr->attackOpponent(player1Ptr);
        defense1 = player1Ptr->takeDamage(attack2);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(player2Ptr->getStrength() < 0.5)
        accumulatorOne++;
      if(player1Ptr->getStrength() < 0.5)
        accumulatorTwo++;     
    }while(slain == false);  
    delete player1Ptr;
    delete player2Ptr;
  }
  percentWinsOne = accumulatorOne/10;
  percentWinsTwo = accumulatorTwo/10;
  cout << "Blue Men win " << percentWinsOne << " percent of the time." << endl;
  cout << "Reptilian wins " << percentWinsTwo << " percent of the time." << endl;

  cout << endl << "Running 1000 battles of Blue Men VS Blue Men...please wait 10 seconds" << endl;
  accumulatorOne = 0, accumulatorTwo = 0, percentWinsOne = 0, percentWinsTwo = 0;
  for(int i=0; i<1000; i++)
  {
    
    Humanoid* player1Ptr = new BlueMen(1);
    time_delay();
    Humanoid* player2Ptr = new Reptilian(2);
    bool slain = false;
    do
    {
      if(slain == false)
      { 
        double attack1 = player1Ptr->attackOpponent(player2Ptr);
        defense2 = player2Ptr->takeDamage(attack1);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(slain == false) 
      {
        double attack2 = player2Ptr->attackOpponent(player1Ptr);
        defense1 = player1Ptr->takeDamage(attack2);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(player2Ptr->getStrength() < 0.5)
        accumulatorOne++;
      if(player1Ptr->getStrength() < 0.5)
        accumulatorTwo++;     
    }while(slain == false);  
    delete player1Ptr;
    delete player2Ptr;
  }
  percentWinsOne = accumulatorOne/10;
  percentWinsTwo = accumulatorTwo/10;
  cout << "Blue Men1 win " << percentWinsOne << " percent of the time." << endl;
  cout << "Blue Men2 win " << percentWinsTwo << " percent of the time." << endl;

  cout << endl << "Running 1000 battles of Blue Men VS Shadow...please wait 10 seconds" << endl;
  accumulatorOne = 0, accumulatorTwo = 0, percentWinsOne = 0, percentWinsTwo = 0;
  for(int i=0; i<1000; i++)
  {
    
    Humanoid* player1Ptr = new BlueMen(1);
    time_delay();
    Humanoid* player2Ptr = new Shadow(2);
    bool slain = false;
    do
    {
      if(slain == false)
      { 
        double attack1 = player1Ptr->attackOpponent(player2Ptr);
        defense2 = player2Ptr->takeDamage(attack1);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(slain == false) 
      {
        double attack2 = player2Ptr->attackOpponent(player1Ptr);
        defense1 = player1Ptr->takeDamage(attack2);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(player2Ptr->getStrength() < 0.5)
        accumulatorOne++;
      if(player1Ptr->getStrength() < 0.5)
        accumulatorTwo++;     
    }while(slain == false);  
    delete player1Ptr;
    delete player2Ptr;
  }
  percentWinsOne = accumulatorOne/10;
  percentWinsTwo = accumulatorTwo/10;
  cout << "Blue Men win " << percentWinsOne << " percent of the time." << endl;
  cout << "Shadow wins " << percentWinsTwo << " percent of the time." << endl;

  cout << endl << "Running 1000 battles of Shadow VS Goblin...please wait 10 seconds" << endl;
  accumulatorOne = 0, accumulatorTwo = 0, percentWinsOne = 0, percentWinsTwo = 0;
  for(int i=0; i<1000; i++)
  {
    
    Humanoid* player1Ptr = new Shadow(1);
    time_delay();
    Humanoid* player2Ptr = new Goblin(2);
    bool slain = false;
    do
    {
      if(slain == false)
      { 
        double attack1 = player1Ptr->attackOpponent(player2Ptr);
        defense2 = player2Ptr->takeDamage(attack1);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(slain == false) 
      {
        double attack2 = player2Ptr->attackOpponent(player1Ptr);
        defense1 = player1Ptr->takeDamage(attack2);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(player2Ptr->getStrength() < 0.5)
        accumulatorOne++;
      if(player1Ptr->getStrength() < 0.5)
        accumulatorTwo++;     
    }while(slain == false);  
    delete player1Ptr;
    delete player2Ptr;
  }
  percentWinsOne = accumulatorOne/10;
  percentWinsTwo = accumulatorTwo/10;
  cout << "Shadow wins " << percentWinsOne << " percent of the time." << endl;
  cout << "Goblin wins " << percentWinsTwo << " percent of the time." << endl;

  cout << endl << "Running 1000 battles of Shadow VS Barbarian...please wait 10 seconds" << endl;
  accumulatorOne = 0, accumulatorTwo = 0, percentWinsOne = 0, percentWinsTwo = 0;
  for(int i=0; i<1000; i++)
  {
    
    Humanoid* player1Ptr = new Shadow(1);
    time_delay();
    Humanoid* player2Ptr = new Barbarian(2);
    bool slain = false;
    do
    {
      if(slain == false)
      { 
        double attack1 = player1Ptr->attackOpponent(player2Ptr);
        defense2 = player2Ptr->takeDamage(attack1);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(slain == false) 
      {
        double attack2 = player2Ptr->attackOpponent(player1Ptr);
        defense1 = player1Ptr->takeDamage(attack2);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(player2Ptr->getStrength() < 0.5)
        accumulatorOne++;
      if(player1Ptr->getStrength() < 0.5)
        accumulatorTwo++;     
    }while(slain == false);  
    delete player1Ptr;
    delete player2Ptr;
  }
  percentWinsOne = accumulatorOne/10;
  percentWinsTwo = accumulatorTwo/10;
  cout << "Shadow wins " << percentWinsOne << " percent of the time." << endl;
  cout << "Barbarian wins " << percentWinsTwo << " percent of the time." << endl;

  cout << endl << "Running 1000 battles of Shadow VS Reptilian...please wait 10 seconds" << endl;
  accumulatorOne = 0, accumulatorTwo = 0, percentWinsOne = 0, percentWinsTwo = 0;
  for(int i=0; i<1000; i++)
  {
    
    Humanoid* player1Ptr = new Shadow(1);
    time_delay();
    Humanoid* player2Ptr = new Reptilian(2);
    bool slain = false;
    do
    {
      if(slain == false)
      { 
        double attack1 = player1Ptr->attackOpponent(player2Ptr);
        defense2 = player2Ptr->takeDamage(attack1);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(slain == false) 
      {
        double attack2 = player2Ptr->attackOpponent(player1Ptr);
        defense1 = player1Ptr->takeDamage(attack2);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(player2Ptr->getStrength() < 0.5)
        accumulatorOne++;
      if(player1Ptr->getStrength() < 0.5)
        accumulatorTwo++;     
    }while(slain == false);  
    delete player1Ptr;
    delete player2Ptr;
  }
  percentWinsOne = accumulatorOne/10;
  percentWinsTwo = accumulatorTwo/10;
  cout << "Shadow wins " << percentWinsOne << " percent of the time." << endl;
  cout << "Reptilian wins " << percentWinsTwo << " percent of the time." << endl;

  cout << endl << "Running 1000 battles of Shadow VS Blue Men...please wait 10 seconds" << endl;
  accumulatorOne = 0, accumulatorTwo = 0, percentWinsOne = 0, percentWinsTwo = 0;
  for(int i=0; i<1000; i++)
  {
    
    Humanoid* player1Ptr = new Shadow(1);
    time_delay();
    Humanoid* player2Ptr = new BlueMen(2);
    bool slain = false;
    do
    {
      if(slain == false)
      { 
        double attack1 = player1Ptr->attackOpponent(player2Ptr);
        defense2 = player2Ptr->takeDamage(attack1);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(slain == false) 
      {
        double attack2 = player2Ptr->attackOpponent(player1Ptr);
        defense1 = player1Ptr->takeDamage(attack2);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(player2Ptr->getStrength() < 0.5)
        accumulatorOne++;
      if(player1Ptr->getStrength() < 0.5)
        accumulatorTwo++;     
    }while(slain == false);  
    delete player1Ptr;
    delete player2Ptr;
  }
  percentWinsOne = accumulatorOne/10;
  percentWinsTwo = accumulatorTwo/10;
  cout << "Shadow wins " << percentWinsOne << " percent of the time." << endl;
  cout << "BlueMen win " << percentWinsTwo << " percent of the time." << endl;

  cout << endl << "Running 1000 battles of Shadow VS Shadow...please wait 10 seconds" << endl;
  accumulatorOne = 0, accumulatorTwo = 0, percentWinsOne = 0, percentWinsTwo = 0;
  for(int i=0; i<1000; i++)
  {
    
    Humanoid* player1Ptr = new Shadow(1);
    time_delay();
    Humanoid* player2Ptr = new Shadow(2);
    bool slain = false;
    do
    {
      if(slain == false)
      { 
        double attack1 = player1Ptr->attackOpponent(player2Ptr);
        defense2 = player2Ptr->takeDamage(attack1);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(slain == false) 
      {
        double attack2 = player2Ptr->attackOpponent(player1Ptr);
        defense1 = player1Ptr->takeDamage(attack2);
        slain = testSlain(player1Ptr, player2Ptr);
      }
      if(player2Ptr->getStrength() < 0.5)
        accumulatorOne++;
      if(player1Ptr->getStrength() < 0.5)
        accumulatorTwo++;     
    }while(slain == false);  
    delete player1Ptr;
    delete player2Ptr;
  }
  percentWinsOne = accumulatorOne/10;
  percentWinsTwo = accumulatorTwo/10;
  cout << "Shadow wins " << percentWinsOne << " percent of the time." << endl;
  cout << "Shadow wins " << percentWinsTwo << " percent of the time." << endl;
 return 0;
}