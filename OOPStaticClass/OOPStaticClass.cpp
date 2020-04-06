#include "OOPStaticClass.h"
#include <iostream>
#include <string>

int Player::num_players{0};

//Define Constructor
Player::Player(std::string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val}
    {
        ++num_players;
    }
    
//Define Copy Constructor
Player::Player(const Player &source)
    :Player {source.name, source.health, source.xp}
    {
        
    }
    
//Define Destructor
Player::~Player() 
{
    --num_players;
}

//Define Functions
int Player::get_num_players()
{
    return num_players;
}