# Fantasy Combat (2 Player Version)
Created by: Kelvin Watson<br>
Date: 11 February 2015<br>
Description: Two players can select one of five Humanoid class characters (Goblin, Barbarian, Reptilian, Blue Men, or Shadow) to engage in battle.

##Design Features
- object-oriented design, Humanoid super class with derived classes (Goblin, Barbarian, Reptilian, Blue Men, Shadow)
- characters are dynamically allocated (instantiated)
- all derived characters differ in the strength of their attacks, defensive maneuvers and armor. 
- Goblins have a 1/6 chance of cutting an opponent's Achilles tendon, reduce their attack by 50%
- Shadow has a 50% chance of evading an attack
- attack strength and defense points are calculated at random through seeding of srand function with time(NULL) and calling rand() functions
- at each stage of the battle, attack points, defense points, and remaining strengths points are printed to the console
- driver.cpp runs 1000 battles between each pair of characters to determine rough percentages of wins between character combinations
  
##Citations
1. Gaddis, Tony, Walters, Judy, and Muganda, Godfrey. Starting Out With C++: Early Objects. 8th Edition. Boston: Pearson, 2014. Print.
2. [http://en.wikipedia.org/wiki/Goblin_(Dungeons_%26_Dragons)](http://en.wikipedia.org/wiki/Goblin_(Dungeons_%26_Dragons))
3. [http://en.wikipedia.org/wiki/List_of_reptilian_humanoids](http://en.wikipedia.org/wiki/List_of_reptilian_humanoids)
4. [http://wiki.belegarth.com/Nac_mac_feegle](http://wiki.belegarth.com/Nac_mac_feegle)