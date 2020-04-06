// Object Oriented Programming - Friends of a Class

/*
 * Friends of a class
 * -Friend
 *  -A function or class that has access to a private class member
 *  -And, that function of or class is NOT a member of the class it is accessing
 * 
 * -Function
 *  -Can be regular non-member functions
 *  -Can be member methods of another class
 * 
 * -Class
 *  -Another class can have access to private class members
 * 
 * Friends of a class
 * -Friendship must be granted NOT taken
 *  -Declared explicitly in teh class that is granting friendship
 *  -Declared in teh function prototype with the keyword friend
 * 
 * -Friendship is not symmetric
 *  -Must be explicitly granted
 *      -if A is a friend of B
 *      -B is NOT a freind of A
 * 
 * -Friendship is not transitive
 *  -Must be explicitly granted
 *      -If A is a friend of B AND
 *      -B is a friend of C
 *      -Then A is NOT a friend of C
 * 
 * -Friendship is not inherited either
 * 
 * Ex) non-member function
 * In the below example the display_player function has access to
 * everything within the player class:
 * 
 * class Player {
 *  friend void display_player(Player &p);
 *  std::string name;
 *  int health;
 *  int xp;
 * public:
 * 
 * };
 * 
 * The function does not have to use public getter functions to change data.
 * void display_player(Player &p) {
 *  std::cout << p.name << std::endl;
 *  std::cout << p.health << std:;endl;
 *  std::cout << p.xp << std::endl;
 * }
 * display_player may also change private data members
 * 
 * Ex) member function of another class
 * This declares the display_player method of another class as a friend
 * class Player {
 *  friend void Other_class::display_player(Player &p);
 *  std::string name;
 *  int health;
 *  int xp;
 * public:
 * 
 * };
 * 
 * class Other_class {
 * public:
 *  void display_player(Player &p) {
 *      std::cout << p.name << std::endl;
 *      std::cout << p.health << std::endl;
 *      std::cout << p.xp << std::endl;
 *  }
 * }
 * 
 * Ex) Another class as a friend
 * Other class will have access to the Player class private attributes
 * class Player {
 *  friend class Other_class;
 *  std::string name;
 *  int health;
 *  int xp;
 * public:
 * 
 * };
 * 
 * friendships should only be used when it makes sense in the design of your system
 * and even then only the minimal amount of friendships should be granted.
 * 
 * */

#include <iostream>



int main() {
    
    
    
    return 0;
}
