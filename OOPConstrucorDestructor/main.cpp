// Object Oriented Programming - Constructor and Destructor

/*
 * Constructors
 * -Special member method
 * -Invoked during object creation
 * -Useful for initialization
 * -Same name as the class
 * -No return type is specified
 * -Can be overloaded
 * 
 * Ex)
 * Class Player
 * {
 * private:
 *  std::string name;
 *  int health;
 *  int xp;
 * public:
 * //Overloaded Constructors
 * Player();
 * Player(std::string name);
 * Player(std::string name, int health, int xp);
 * };
 * 
 * Ex)
 * Class Account
 * {
 * private:
 *  std::string name;
 *  double balance;
 * public:
 *  //Constructors
 *  Account();
 *  Account(std::string name, double balance);
 *  Account(double balance);
 * };
 * 
 * Destructor
 * -Special member method
 * -Same name as the class proceeded with a tilde(~)
 * -Invoked automatically when an opbject is destroyed
 * -No return type and no parameters
 * -Only 1 destructor is allowed per class - cannot be overloaded!
 * -Useful to release memory and other resources
 * 
 * Ex)
 * Class Player
 * {
 * private:
 *  std::string name;
 *  int health;
 *  int xp;
 * public:
 *  Player();
 *  Player(std::string name);
 *  Player(std::string name, int health, int xp);
 * //Destructor
 *  ~Player();
 * };
 * 
 * Ex)
 * Class Account
 * {
 * private:
 *  std::string name;
 *  double balance;
 * public:
 *  Account();
 *  Account(std::string name, double balance);
 *  Account(std::string name);
 *  Account(double balance);
 * //Destructor
 *  ~Account();
 * };
 * 
 * Ex) Creating Objects
 * 
 * {
 *  Player slayer;
 *  Player frank {"Frank", 100, 4};
 *  Player hero {"Hero"};
 *  Player villain {"Villain"};
 *  //use the objects
 * } //4 destructors called
 * 
 * Player *enemy = new PLayer("Enemy", 1000, 0);
 * delete enemy; //destructor called
 * 
 * */

#include <iostream>
#include <string>
#include "OOPConstructorDestructor.h"

int main() {
    
    {
        Player slayer;
        slayer.set_name("Slayer");
    }
    
    {
        Player frank;
        frank.set_name("Frank");
        Player hero;
        hero.set_name("Hero");
        Player villain("Villain", 100, 12);
        villain.set_name("Villain");
    }
    
    Player *enemy = new Player;
    enemy -> set_name("Enemy");
    
    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss -> set_name("Level Boss");
    
    delete enemy;
    delete level_boss;
    
    return 0;
}
