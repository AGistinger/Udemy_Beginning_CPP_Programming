#ifndef _OOPDEFAULTCONSTRUCTOR_H_
#define _OOPDEFAULTCONSTRUCTOR_H_

#include <string>

class Player
{
    
private:
  std::string name;
  int health;
  int xp;
  
public:
  //Methods
  void set_name(std::string name_val)
  {
      name = name_val;
  }
  
  std::string get_name() 
  {
      return name;
  }
  
  //Constructors
  Player()
  {
      name = "None";
      health = 100;
      xp = 3;
  }
  
  Player(std::string name_val, int health_val, int xp_val)
  { 
      name = name_val;
      health = health_val;
      xp = xp_val;
  }
  
  ~Player()
  {
      std::cout << "Destroying: " << name << std::endl;
  }
  
};

#endif 