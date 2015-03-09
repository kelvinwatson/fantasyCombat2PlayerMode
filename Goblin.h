/******************************************************************************
* Program Filename: Globin.h
* Author: Kelvin Watson (OSU ID 932540242)
* Date: 7 February, 2015
* Description: (assignment3, CS 162) Interface for Globin.cpp. Derived class of
*  the Humanoid class. Attributes and behaviors (prototypes) are listed.
* Input: See implementation (Globin.cpp) file.
* Output: See implementation (Globin.cpp) file.
******************************************************************************/
#ifndef WATSOKEL_GOBLIN_H
#define WATSOKEL_GOBLIN_H

#include "Humanoid.h"

class Goblin:public Humanoid
{
public:
  Goblin();
  Goblin(int);
  ~Goblin();
  virtual double attackOpponent(Humanoid*);
  virtual double sixSidedDefense();
};

#endif 
