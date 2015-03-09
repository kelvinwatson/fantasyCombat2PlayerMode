/******************************************************************************
* Program Filename: Shadow.h
* Author: Kelvin Watson (OSU ID 932540242)
* Date: 7 February, 2015
* Description: (assignment3, CS 162) Interface for Shadow.cpp. Derived class of
*  the Humanoid class. Attributes and behaviors (prototypes) are listed.
* Input: See implementation (Shadow.cpp) file.
* Output: See implementation (Shadow.cpp) file.
******************************************************************************/
#ifndef WATSOKEL_SHADOW_H
#define WATSOKEL_SHADOW_H

class Shadow:public Humanoid
{
public:
  Shadow();
  Shadow(int);
  ~Shadow();
  virtual double attackOpponent(Humanoid*);
  virtual double sixSidedDefense();
};

#endif