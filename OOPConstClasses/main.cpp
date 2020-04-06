// Object Oriented Programming - Using const with classes

/*
 * Using const with classes
 * -Pass arguments to class member methods as const
 * -We can also create const objects
 * -What happens if we call member functions on const objects?
 * -const-correctness
 * 
 * Ex) Creating a const object
 *  -villain is a const object so it's attributes cannot change
 *      const Player villain {"Villain", 100, 55};
 * 
 * What happens when we call member methods on a const object?
 *  const Player villain {"Villain", 100, 55};
 *  void display_player_name(const Player &p) {
 *      cout << p.get_name() << endl;
 *  }
 * 
 * display_player_name(villain); //Error
 * 
 * Using const with classes
 * Ex) const methods
 * 
 * class Player {
 * private:
 *  //attributes
 * public:
 *  std::string get_name() const;
 *  //methods
 * };
 * 
 * Ex) const-correctness
 * const Player villain {"Villain", 100, 55};
 * villain.set_name("Nice guy"); //Error
 * std::cout << villain.get_name() << std::endl; //OK
 * 
 * Even with adding const at the end of the method name, you will get an error if the code in the method tries to
 * modify the const object.
 * 
 * */

#include <iostream>
#include <string>

class Player
{
    
private:
    std::string name {};
    int health {};
    int xp {};
    
public:
    //Methods
    std::string get_name() const //this is stating this is a getter/read only cannot modify
    {
        return name;
    }
    
    void set_name(std::string name_val) 
    {
        name = name_val;
    }
    
    //Overloaded Constructors
    Player();
    Player(std::string mame_val);
    Player(std::string name_val, int health_val, int xp_val);
};

Player::Player()
    : Player{"None", 0, 0}
    {
        
    }
    
Player::Player(std::string name_val)
    : Player{name_val, 0, 0}
    {
        
    }

Player::Player(std::string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val}
    {
        
    }
    
void display_player_name(const Player &p)
{
    std::cout << p.get_name() << std::endl;
}


int main() {
    
    const Player villain {"Villain", 100, 55};
    Player hero {"Hero", 100, 15};
    
    std::cout << villain.get_name() << std::endl;
    std::cout << hero.get_name() << std::endl;
    display_player_name(villain);
    display_player_name(hero);
    
    return 0;
}
