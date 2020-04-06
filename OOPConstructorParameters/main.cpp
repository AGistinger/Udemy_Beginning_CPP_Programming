// Object Oriented Programming - constructor Pareamters and Default Values

/*
 * Default Constructor Parameters
 * -Can often simplify our code and reduce the number of
 *  overloaded constructors.
 * -Same rules apply as we learned with non-member functions.
 * 
 * Ex) Default Constructor Paramters
 * class Player
 * {
 *  private:
 *      std::string name;
 *      int health;
 *      int xp;
 *  public:
 *      Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
 * };
 * 
 * Ex) Implementation for constructor
 * Player::Player(std::string name_val, int health_val, int xp_val)
 *  : name {name_val}, health {health_val}, xp {xp_val} {
 * }
 * 
 * Player empty; //None, 0, 0
 * Player frank {"Frank"}; //Frank, 0, 0
 * Player hero {"Hero", 100}; //Hero, 100, 0
 * 
 * Doing this way of creating constructors will allow you to minmize the amount
 * of overloaded constructors you will have to create.
 * -If you do try to create no arg constructors using this method
 *  you will get an error as the compiler will not know which constrctor to call.
 * 
 * */

#include <iostream>
#include <string>
#include "OOPConstructorParameters.h"



int main() {
    
    Player empty;
    Player frank {"Frank"};
    Player villain {"Villain", 100, 55};
    Player hero {"Hero", 100};
    Player* enemy = new Player {"Enemy", 100, 20};
    
    std::cout << enemy->get_health() << std::endl;;
    enemy->set_name("Dragon");
    std::cout << enemy->get_name() << std::endl;
    enemy->take_damage(25);
    std::cout << enemy->get_health() << std::endl;
    enemy->heal();
    std::cout << enemy->get_health() << std::endl;
    
    delete enemy;
    
    return 0;
}
