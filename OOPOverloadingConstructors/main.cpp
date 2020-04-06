// Object Oriented Programming - Overloading Constructors

/*
 * Overlaoding Constructors
 * -Classes can have as many constructors as necessary
 * -Each must have a unique signature
 * -Default constructor is no longer compiler-generated once another constructor is declared
 * 
 * Ex) Overloaded Constructors
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
 * Ex) Implementing Overloaded Constructors
 * Player::Player() {
 *  name = "None";
 *  health = 0;
 *  xp = 0;
 * }
 * 
 * Player::Player(std::string name_val) {
 *  name = name_val;
 *  health = 0;
 *  xp = 0;
 * }
 * 
 * Player::Player(std:;string name_val, int health_val, int xp_val) {
 *  name = name_val;
 *  health = health_val;
 *  xp = xp_val;
 * }
 * 
 * Ex) Creating Objects
 * Player empty; //None, 0, 0
 * Player hero {"Hero"}; //Hero, 0, 0
 * Player villain {"Villain"}; //Villain, 0, 0
 * Player frank {"Frank", 100, 4}; //Frank, 100, 4
 * Player *enemy = new Player("Enemey", 1000, 0); //Enemy, 1000, 0
 * delete enemy;
 * 
 * */

#include <iostream>
#include <string>
#include "OverloadingConstructors.h"

using namespace std;

int main() {
    
    cout << "Hello World" << endl;
    
    return 0;
}
