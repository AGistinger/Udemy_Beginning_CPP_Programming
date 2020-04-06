// Object Oriented Programming - Copy Constructor

/*
 * Copy Constructor
 * -When objects are copied C++ must create a new object from an existing object
 * -When is a copy of an object made?
 *  -passing object by value as a parameter
 *  -returning an object from a function by value
 *  -constructor one object based on another of the same class
 * -C++ must have a way of accomplishing this so it provides a compiler-defined
 *  copy constructor if you don't
 * 
 * Ex) Pass object by-value
 * Player hero {"Hero", 100, 20};
 * 
 * void display_player(Player p) {
 *  //p is a copy of hero in this example
 *  //use p
 *  //Destructor for p will be called
 * }
 * 
 * display_player(hero);
 * 
 * Ex) Return object by value
 * Player enemy;
 * 
 * Player create_super_enemy() {
 *  Player an_enemy{"Super Enemy", 1000, 1000};
 *  return an_enemy; //A COPY of an_enemy is returned;
 * }
 * 
 * enemy = create_super_enemy();
 * 
 * Ex) Construct one object based on another
 * 
 * Player hero {"Hero", 100, 100};
 * Player another_hero {hero}; //A COPY of hero is made
 * 
 * Copy Constructor
 * -If you don't provide you rown way of copying objects by value then
 *  the compiler provides a default way of copying objects
 * -Copies the values of each data membber to the new object
 *  -default memberwise copy
 * -Perfectly fine in many cases
 * -Beware if you have a pointer data member
 *  -Pointer will be copied
 *  -Not what it is pointing to
 *  -Shallow vs Deep copy - more later
 * 
 * Best Practices:
 * -Provide a copy constructor when your class ahs raw pointer members
 * -Provide the copy constructor with a const reference parameter
 * -Use STL classes as they already provide copy constructors
 * -Avoid using raw pointer data memberes if possible
 * 
 * Ex) Declaring the Copy Constructor
 * Type::Type(const Type &source);
 * Player::PLayer(const Player &source);
 * Account::Account(const Account &source);
 * 
 * Ex) Implement the Copy Constructor
 * Type::Type(const Type &source) {
 *  //code or initialization list to copy the object
 * }
 * 
 * Ex) Implementing the Copy Constrcutor
 * Player
 * 
 * Player::Player(const Player &source)
 *  : name{source.name}, health{source.health}, xp{source.xp} {
 * }
 * 
 * Ex) Implementing the Copy Constructor
 * Account
 * 
 * Account::Account(const Account &source)
 *  :name{source.name}, balance{source.balance} {
 * }
 * 
 * */

#include <iostream>
#include <string>

//Class definition for Plyaer
class Player
{
private:
   //Attributes
   std::string name;
   int health;
   int xp;
   
public:
   //Methods/Functions
   std::string get_name(){return name;}
   int get_health() {return health;}
   int get_xp(){return xp;}
   void display_player(Player p);
   
   //Constructor with default parameters
   Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
   
   //Copy Constructor Prototype
   Player(const Player &source);
   
   //Destructor
   ~Player(){std::cout << "Destructor called for: " << name << std::endl;}
};

//Constructor Defined
Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}
    {
        std::cout << "Three-args constructor for " + name << std::endl;
    }

//Copy Constructor Defined
Player::Player(const Player &source)
    //: name{source.name}, health{source.health}, xp{source.xp}
    //Delegating to create constructor
    : Player{source.name, source.health, source.xp}
    {
        std::cout << "Copy Constructor - made copy of: " << source.name << std::endl;
    }
//Define display player function
void display_player(Player p) 
    {
        std::cout << "Name: " << p.get_name() << std::endl;
        std::cout << "Health: " << p.get_health() <<std::endl;
        std::cout << "XP: " << p.get_xp() << std::endl;
    }

int main() {
    
    Player empty{"XXXXXX", 100, 50};
    
    //Creating a copy of empty and then calling the display_player function
    Player my_new_object{empty};
    display_player(empty);
    
    Player frank{"Frank"};
    Player hero{"Hero", 100};
    Player villain{"Villain", 100, 53};
    
    return 0;
}
