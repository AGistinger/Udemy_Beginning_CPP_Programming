#ifndef _OOPCONSTRUCTORPARAMETERS_H_
#define _OOPCONSTRUCTORPARAMETERS_H_

#include <string>

class Player{
private:
    //Attributes
    std::string name;
    int health;
    int xp;
    
public:
    //Constructor with default parameters
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
    
    //Methods
    std::string get_name();
    void set_name(std::string n);
    int get_health();
    void take_damage(int damage);
    void heal();
  
};

#endif 