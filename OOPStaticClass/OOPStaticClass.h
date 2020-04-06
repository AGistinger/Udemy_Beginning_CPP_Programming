#ifndef _OOPSTATICCLASS_H_
#define _OOPSTATICCLASS_H_

#include <string>

class Player
{
    
private:
    static int num_players; //Belongs to class
    std::string name;
    int health;
    int xp;

public:
    //Functions
    static int get_num_players(); //Only has static to static variables
    std::string get_name() {return name;}
    int get_health() {return health;}
    
    //Constructor
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
    //Copy Constructor
    Player(const Player &source);
    //Destructor
    ~Player();
    
};

#endif //_OOPSTATICCLASS_H_