#ifndef _OOPCONSTRUCTORDESTRUCTOR_H_
#define _OOPCONSTRUCTORDESTRUCTOR_H_
#include <string>

//Creating class for Player
class Player
{
//attributes  
private:
    std::string name;
    int health;
    int xp;
//methods    
public:
    void set_name(std::string name_val)
    {
        name = name_val;
    }
    
    //Overloaded Constructors
    Player()
    {
        std::cout << "No args constructor called" << std::endl;
    }
    
    Player(std::string name) 
    {
        std::cout << "String arg constructor called" << std::endl;
    }
    
    Player(std::string name, int health, int xp)
    {
        std::cout << "Three args constructor called" << std::endl;
    }
    
    ~Player()
    {
        std::cout << "Destructor called for " << name << std::endl;
    }
  
    
};

#endif // _OOPCONSTRUCTORDESTRUCTOR_H_