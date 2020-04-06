// OOP Constructor Initialization Lists

/*
 * Constructor Initialization Lists
 * -So far, all data member values have been set in the constructor body
 * -Constructor Initialization Lists
 *  -Are more efficient
 *  -Initialization list immediately follows the paramter list
 *  -Initializes the data members as the object is created!
 *  -Order of initialization is the order of declaration in the class
 * 
 * Ex) Constructor Initialization Lists
 * Class Player
 * {
 * private:
 *  std::string name;
 *  int health;
 *  int xp;
 * public:
 *  Player();
 *  Player(std::string name_val);
 *  Player(std::string name_val, int health_val, int xp_val);
 * };
 * 
 * Player::Player() 
 *  : name{"None"}, health{0}, xp{0} {
 * 
 *  }
 * 
 * Player::Player(std::string name_val)
 *  : name{name_val}, health{0}, xp{0} {
 * 
 *  }
 * 
 * Player::Player(std::string name_val, int health_val, int xp_val)
 *  : name{name_val}, health{health_val}, xp{xp_val} {
 * 
 *  }
 * 
 * */

#include <iostream>
#include <string>
#include "InitializeLists.h"

using namespace std;

int main() {
    
    Player empty;
    Player frank{"Frank"};
    Player villain {"Villain", 100, 55};
    
    Player *boss = new Player{"Boss", 1000, 5000};
    delete boss;
    
    return 0;
}
