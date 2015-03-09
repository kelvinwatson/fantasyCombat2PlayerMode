/******************************************************************************
* Program Filename: Barbarian.h
* Author: Kelvin Watson (OSU ID 932540242)
* Date: 7 February, 2015
* Description: (assignment3, CS 162) Interface for Barbarian.cpp. Derived class of
*  the Humanoid class. Attributes and behaviors (prototypes) are listed.
* Input: See implementation (Barbarian.cpp) file.
* Output: See implementation (Barbarian.cpp) file.
******************************************************************************/
#ifndef WATSOKEL_BARBARIAN_H
#define WATSOKEL_BARBARIAN_H

class Barbarian:public Humanoid
{
public:
  Barbarian();
  Barbarian(int);
  ~Barbarian();
  virtual double attackOpponent(Humanoid*);
  virtual double sixSidedDefense();
};

#endif 
