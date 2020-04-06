#ifndef _DELEGATECONSTRUCTORS_H_
#define _DELEGATECONSTRUCTORS_H_

#include <string>

class Player{
    
private:
    std::string name;
    int health;
    int xp;
    
public:
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
    
    std::string get_name();
    void set_name(std::string n);
    bool is_dead();
    void damage_taken(int damage);
  
};

#endif 