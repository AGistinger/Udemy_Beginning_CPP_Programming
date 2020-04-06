// OOP - Accessing Class Members

/*
 * ACCESSING CLASS MEMBERS
 * -We can access
 *      -class attributes
 *      -class methods
 * 
 * -Some class members will not be accessible (more on that later)
 * -We need an object to access instance variables
 * 
 * If we have an object(dot operator)
 * -Using the dot operator
 * 
 * Ex) 
 * Account frank_account;
 * 
 * frank_account.balance;
 * frank_account.deposit(1000.00);
 * 
 * If we have a pointer to an object (member of pointer operator)
 * -Dereference th epointer then use the dot operator
 * Ex)
 * Account *frank_account = new Account();
 * 
 * (*frank_account).balance;
 * (*frank_account).deposit(1000.00);
 * 
 * -Or use the member of pointer operator (arrow operator)
 * Ex)
 * Account *frank_account = new Account();
 * 
 * frank_account->balance;
 * frank_account->deposit(1000.00);
 * 
 * delete frank_account;
 * 
 * */

#include <iostream>
#include <string>

class Player
{
   public:
   //attributes
   std::string name;
   int health;
   int xp;
  
   //methods
   bool is_dead();
   
   void talk(std::string text_to_say)
   {
       std::cout << name << " says: " << text_to_say << std::endl;
   }
  
};

class Account
{
    public:
    //attributes
    std::string name;
    double balance;
    
    //methods
    bool deposit(double bal)
    {
        balance += bal;
        std::cout << "In deposit" << std::endl;
    }
    
    bool withdraw(double bal)
    {
        balance -= bal;
        std::cout << "In withdraw" << std::endl;
    }
};


int main() {
    
    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    
    frank.talk("Hello there!");
    
    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;
    
    enemy->talk("I will destroy you!");
    
    delete enemy;
    
    Account frank_account;
    frank_account.name = "Frank's account";
    frank_account.balance = 5000.0;
    
    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);
    
    Account *mary_account {nullptr};
    mary_account = new Account;
    
    mary_account->name = "Mary's account";
    mary_account->balance = 100;
    mary_account->deposit(250.0);
    mary_account->withdraw(50.0);
    
    delete mary_account;
    
    std::cout << std::endl;
    return 0;
}
