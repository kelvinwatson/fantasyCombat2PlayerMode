/******************************************************************************
* Program Filename: BlueMen.h
* Author: Kelvin Watson (OSU ID 932540242)
* Date: 7 February, 2015
* Description: (assignment3, CS 162) Interface for BlueMen.cpp. Derived class of
*  the Humanoid class. Attributes and behaviors (prototypes) are listed.
* Input: See implementation (BlueMen.cpp) file.
* Output: See implementation (BlueMen.cpp) file.
******************************************************************************/
#ifndef WATSOKEL_BLUEMEN_H
#define WATSOKEL_BLUEMEN_H

class BlueMen:public Humanoid
{
public:
  BlueMen();
  BlueMen(int);
  ~BlueMen();
  virtual double attackOpponent(Humanoid*);
  virtual double sixSidedDefense();
};

#endif