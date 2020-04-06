// Object Oriented Programming - Static Class Members

/*
 * Static Class Members 
 * -Class data members can be declared as static
 *  -A single data member that belongs to the class, not the objects
 *  -Useful to store class-wide information
 * 
 * -Class functions can be declared as static
 *  -Independent of any objects
 *  -Can be called using the class name
 * 
 * Ex) Player class-static members
 * class Player {
 * private:
 *  static int num_players;
 * public:
 *  static int get_num_players();
 * };
 * 
 * Ex) Player class-initialize the static data
 * (Typically in Player.cpp)
 * #include "Player.h"
 * int Player::nm_players = 0;
 * 
 * Ex) Player class-implement static method
 * int Player::get_num_players() {
 *  return num_players;
 * }
 * 
 * Ex) Player class-update the constructor
 * Player::Player(std::string name_val, int health_val, int xp_val)
 *  :name{name_val}, health{health_val}, xp{xp_val}
 * {
 *      ++num_players;
 * }
 * 
 * Ex) Player class-Destructor
 * Player::~Player() {
 *  --num_players;
 * }
 * 
 * Ex) Main.cpp
 * void display_active_players() {
 *  std::cout << "Active players: " << Player::get_num_players() << std::endl;
 * }
 * 
 * int main() {
 *  display_active_players();
 *  
 *  Player obj1 {"Frank"};
 *  display_active_players();
 * }
 * 
 * */

#include "OOPStaticClass.h"
#include <iostream>
#include <string>

void display_active_players()
{
    std::cout << "Active players: " << Player::get_num_players() << std::endl;
}

int main() {
    
    display_active_players();
    
    Player hero {"Hero"};
    display_active_players();
    
    //Frank will go out of scope at the end of block and be deleted
    {
        Player frank {"Frank"};
        display_active_players();
    }
    
    display_active_players();
    
    Player *enemy = new Player{"Enemy", 100, 100};
    display_active_players();
    delete enemy;
    display_active_players();    
    
    return 0;
}
