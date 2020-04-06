//Object Oriented Programming - Default Constructor

/*
 * The Default Constructor
 * -Does not expect any arguments
 *  -Also called the no-args constructor
 * -If you write no constructors at all for a class
 *  -C++ will generate a Default Constructor that does nothing
 * -Called when you instantiate a new object with no arguments
 * 
 * Ex)
 *  Player frank;
 *  Player *enemy = new Player;
 * 
 * Ex) Account Class - Using default constructor
 * class Account
 * {
 * private:
 *  std::string name;
 *  double balance;
 * public:
 *  bool withdraw(double amount);
 *  bool deposit(double amount);
 * };
 * 
 * Ex) Using the Default Constructor
 * Account frank_account;
 * Account jim_account;
 * 
 * Accout *mary_account = new Account;
 * delete mary_account;
 * 
 * Ex) Account - user-defined no-args constructor
 * class Account
 * {
 * private:
 *  std::string name;
 *  double balance;
 * public:
 *  Account() //User defined no args constructor
 *  {
 *      name = "None";
 *      balance = 0.0;
 *  }
 *  bool withdraw(double amount);
 *  bool deposit(double amount);
 * };
 * 
 * Ex) Account - no default constructor
 * class Account
 * {
 * private:
 *  std::string name;
 *  double balance;
 * public:
 *  Account(std::string name_val, double bal)
 *  {
 *      name = name_val;
 *      balance = bal;
 *  }
 *  bool withdraw(double amount);
 *  bool deposit(double amount);
 * };
 * 
 * */

#include <iostream>
#include <string>
#include "OOPDefaultConstructor.h"


using namespace std;

int main() {
    
    //Creating frank Player object
    Player frank;
    frank.set_name("Frank");
    std::cout << frank.get_name() << std::endl;
    
    Player alex("Alex", 100, 13);
    std::cout << alex.get_name() << std::endl;
    
    Player *enemy = new Player;
    delete enemy;
    
    Player *level_boss = new Player{"Boss", 5000, 10000};
    delete level_boss;
    
    return 0;
}
