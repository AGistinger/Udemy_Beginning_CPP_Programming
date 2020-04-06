// Object Oriented Programming - Delegating Constructors

/*
 * Delegating Constructors
 * -Often teh code for constructors is very similar
 * -Duplicated code can lead to errors
 * -C++ allows delegating constructors
 *  -code for one constructor can call another in the initialization list
 *  -avoids duplicating code
 * 
 * Ex) Delegating Constructors
 * Class Player
 * {
 * private:
 *  std::string name;
 *  int health;
 *  int xp;
 * public:
 *  Player();
 *  Player(std::string name_val);
 *  Player(std:;string name_val, int health_val, int xp_val);
 * };
 * 
 * Player::Player(std::string name_val, int health_val, int xp_val)
 *  : name{name_val}, health{health_val}, xp{xp_val}; {
 * }
 * 
 * Player::Player()
 *  : Player{"None", 0, 0} {
 * }
 * 
 * Player::Player(std::string name_val}
 *  : Player {name_val, 0, 0} {
 * }
 * 
 * */

#include <iostream>
#include <string>
#include "DelegateConstructors.h"

using namespace std;

int main() {
    
    Player empty;
    Player frank {"Frank"};
    Player villain {"Villain", 100, 55};
    Player* level_boss = new Player{"Boss", 1000, 500};
    delete level_boss;
    
    frank.is_dead();
    villain.is_dead();
    villain.damage_taken(90);
    villain.is_dead();
    
    return 0;
}
