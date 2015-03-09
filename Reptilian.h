/******************************************************************************
* Program Filename: Reptilian.h
* Author: Kelvin Watson (OSU ID 932540242)
* Date: 7 February, 2015
* Description: (assignment3, CS 162) Interface for Reptilian.cpp. Derived class 
*  of the Humanoid class. Attributes and behaviors (prototypes) are listed.
* Input: See implementation (Reptilian.cpp) file.
* Output: See implementation (Reptilian.cpp) file.
******************************************************************************/
#ifndef WATSOKEL_REPTILIAN_H
#define WATSOKEL_REPTILIAN_H

class Reptilian:public Humanoid
{
public:
  Reptilian();
  Reptilian(int);
  ~Reptilian();
  virtual double attackOpponent(Humanoid*);
  virtual double sixSidedDefense();
};

#endif 