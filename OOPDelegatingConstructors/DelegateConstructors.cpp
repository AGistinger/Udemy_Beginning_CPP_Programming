#include "DelegateConstructors.h"
#include <string>
#include <iostream>

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}
{
    std::cout << "Three-arg constructor" << std::endl;
}
    
Player::Player()
    :Player {"None", 0, 0}
{
   std::cout << "No-args constructor" << std::endl;     
} 

Player::Player(std::string name_val)
    :Player{name_val, 0, 0}
{
    std::cout <<"One-arg constructor" << std::endl;
}
    
std::string Player::get_name()
{
    return name;
}

void Player::set_name(std::string n)
{
    name = n;
}

bool Player::is_dead() 
{
    if(health == 0) {
        std::cout << name << " is dead" << std::endl;
        return true;
    }
    else
    {
        std::cout << name << " has " << health << " health points remaining" << std::endl;
        return false;
    }
}

void Player::damage_taken(int damage)
{
    health-= damage;
}
