// Object-Oriented Programming - Public & Private

/*
 * CLASS MEMBER ACCESS MODIFIERS
 * 
 * Public
 *  -accessible everywhere
 * 
 * Private
 *  -accessible only by members or friends of the class
 * 
 * Protected
 *  -used with inheritance
 * 
 * Ex) Public
 * class Class_name
 * {
 *  public:
 *  //declaration(s);
 * };
 * 
 * Ex) Private
 * class Class_Name
 * {
 *  private:
 *  //declaration(s);
 * };
 * 
 * Ex) Protected
 * class Class_Name
 * {
 *  protected:
 *  //declaration(s);
 * };
 * 
 * Ex) Declaring a Class
 * class Player
 * {
 *  private:
 *      std::string name;
 *      int health;
 *      int xp;
 *  public:
 *      void talk(std::string text_to_say);
 *      bool is_dead();
 * };
 * 
 * Ex) Creating Objects
 * Player frank;
 * frank.name = "Frank"; //Compiler error(private)
 * frank.health = 1000; //Compiler error (private)
 * frank.talk("Ready to battle"); //OK (public)
 * 
 * Player *enemy = new Player();
 * enemy ->xp = 100; //Compiler error (private)
 * enmey ->talk("I will hunt you down"); //OK (public)
 * 
 * delete enemy;
 * 
 * Ex) Declaring a Class
 * class Account
 * {
 *  private:
 *      std::string name;
 *      double balance;
 *  public:
 *      bool withdraw(double amount);
 *      bool deposit(double amount);
 * };
 * 
 * Ex) Creating Objects
 * Account frank_account;
 * frank_account.balance = 100000000.00 //Compiler error (private)
 * frank.deposit(10000000.0); //OK (public)
 * frank.name = "Frank's Account"; //Compiler error (private)
 * 
 * Account *mary_account = new Account();
 * mary_account->balance = 10000.0; //Compiler error (private)
 * mary_account->withdraw(10000.0) //OK (Private)
 * delete mary_account;
 * 
 * */
 
#include <iostream>
#include <string>

class Player
{
private:
    //attributes
    std::string name {"Player"};
    int health;
    int xp;
    
public:
    //methods
    void talk(std::string text_to_say)
    {
        std::cout << name << " says: " << text_to_say << std::endl;
    }
    
    bool is_dead();
};


int main() {
    
    Player frank;
    //frank.name = "Frank"; //Error (private)
    //std::cout << frank.health << std::endl; //Error (private)
    frank.talk("Hello there"); // OK (public)
    
    return 0;
}
