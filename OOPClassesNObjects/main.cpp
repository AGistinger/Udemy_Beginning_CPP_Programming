// OOP - Classes and Objects

/*
 * Classes
 *  -blueprint from which objects are created
 *  -a user-defined data-type
 *  -has attributes (data)
 *  -has methods (functions)
 *  -can hide data and methods
 *  -provides a public interface
 * 
 * Example Classes
 *  -account
 *  -employee
 *  -image
 *  -std::vector
 *  -std::string
 * 
 * Objects
 *  -created from a class
 *  -represents a specific instance of a class
 *  -can create many, many objects
 *  -each has its own identity
 *  -each can use teh defined class methods
 * 
 * Example Account Objects
 *  -Frank's account is an instance of an Account
 *  -Jim's account is an instance of an Account
 *  -Each ahs its own balance, can make deposits, withdrawals, etc.
 * 
 * Ex)
 *  int high_score;
 *  int low_score;
 * 
 *  Account frank_account;
 *  Account jim_account;
 *  
 *  std::vector<int> scores;
 *  std::string name;
 * 
 * DECLARING A CLASS
 * class Class_name
 * {
 *  //declaration(s);
 * };
 * 
 * EX1)
 * class Player
 * {
 *  //attributes
 *  std::string name;
 *  int health;
 *  int xp;
 * 
 *  //methods
 *  void talk(std::string text_to_say);
 *   bool is_dead();
 * };
 * 
 * CREATING OBJECTS
 * EX2)
 * Player frank;
 * Player hero;
 * 
 * //creating a pointer to an object on the heap using new
 * Player *enemy = new Player();
 * delete enemy;
 * 
 * EX3) 
 * class Account
 * {
 *  //attributes
 *  std::string name;
 *  double balance;
 * 
 *  //methods
 *  bool withdraw(double amount);
 *  bool deposit(double amount);
 * };
 * 
 * //Objects from class
 * Account frank_account;
 * Account jim_account;
 * 
 * Account *mary_account = new Account();
 * delete mary_account;
 * 
 * EX4)
 * //Creating an array of accounts
 * Account frank_account;
 * Account jim_account;
 * 
 * Account accounts[] {frank_account, jim_account};
 * 
 * //Creating a vector of accounts
 * std::vector<Account> accounts1 {frank_account};
 * accounts1.push_back(jim_account);
 * 
 * */

#include <iostream>
#include <string>
#include <vector>

class Player 
{
   //attributes
   std::string name {"Player"};
   int health {100};
   int xp {3};
   
   //methods
   void talk(std::string);
   bool is_dead();

};

class Account
{
    //attributes
    std::string name {"Account"};
    double balance {0.0};
    
    //methods
    bool deposit(double);
    bool withdraw(double);
};

int main() 
{
    
    Player frank;
    Player hero;
    
    Player players[] {frank, hero};
    
    std::vector<Player> player_vec {frank};
    player_vec.push_back(hero);
    
    //Creating pointers to players on the heap
    Player *enemy {nullptr};
    enemy = new Player;
    
    delete enemy;
    
    Account frank_account;
    Account jim_account;
    
    
    
    return 0;
}
