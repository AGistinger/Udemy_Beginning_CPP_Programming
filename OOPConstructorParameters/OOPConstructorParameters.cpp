#include <iostream>
#include <string>
#include "OOPConstructorParameters.h"

//Constructor to create the Player object
Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}
    {
        std::cout << "Three-args constructor" << std::endl;
    }

//Method to get player name    
std::string Player::get_name()
    {
        return name;
    }

//Method to set player name    
void Player::set_name(std::string n)
    {
        name = n;
    }

//Method to get player health    
int Player::get_health()
    {
        return health;
    }
//Method to have player take damage    
void Player::take_damage(int damage)
    {
        health-= damage;
    }
//Method to have player heal    
void Player::heal()
    {
        do
        {
            health+=5;
        }
        while (health < 100);
    }
    
