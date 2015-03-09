/******************************************************************************
* Program Filename: Humanoid.h
* Author: Kelvin Watson (OSU ID 932540242)
* Date: 7 February, 2015
* Description: (assignment3, CS 162) Interface for Humanoid.cpp. Abstract base
*  base class of five derived classes (Goblin, Barbarian, Reptilian, BlueMen
*  and Shadow). Attributes and behaviors (prototypes) are listed. Note that the 
*  attackOpponent and sixSidedDefense functions are pure virtual functions.
* Input: See implementation (Humanoid.cpp) file.
* Output: See implementation (Humanoid.cpp) file.
******************************************************************************/
#ifndef WATSOKEL_HUMANOID_H
#define WATSOKEL_HUMANOID_H

#include <string>
using std::string;

class Humanoid //abstract class
{
protected:
    string className;
    double armor;
    double strength;
    int player;
    double achilles;
public:
    Humanoid();
    Humanoid(string, double, double, int, double);
    ~Humanoid();
    int rollSixSidedDie();
    int rollTenSidedDie();
    virtual double attackOpponent(Humanoid*)=0;  //pure virtual
    virtual double sixSidedDefense()=0; //pure virtual
    string getClassName();
    double getArmor();
    double getStrength();
    int getPlayer();
    void setAchilles(double);
    double getAchilles() const;
    void setStrength(double);
    double takeDamage(double);

};

#endif
