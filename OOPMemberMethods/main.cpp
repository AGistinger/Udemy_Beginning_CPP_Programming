// Object-Oriented Programming - Implenting Member Methods

/*
 * Implementing Member Methods
 * -Very similar to how we implemented functions
 * -Member methods have access to member attributes
 *  -so you don't need to pass them as arguments!
 * -Can be implemented inside the class declaration
 *  -implicitly inline
 * -Can be implemented outside the class declaration
 *  -need to use Class_name::method_name
 * -Can separate specification from implementation
 *  -.h file for the class declaration
 *  -.cpp file for the class implementation
 * 
 * Implementing Methods inside Class Declaration
 * Ex)
 * class Account 
 * {
 * private:
 *  double balance;
 * 
 * public:
 *  void set_balance(double bal)
 *  {
 *      balance = bal;
 *  }
 * 
 *  double get_balance()
 *  {
 *      return balance;
 *  }
 * };
 * 
 * Implementing Methods outside the Class Declaration
 * Ex)
 * class Account
 * {
 * private:
 *  double balance;
 * 
 * public:
 *  void set_balance(double bal);
 *  double get_balance();
 * };
 * 
 * void Account::set_balance(double bal)
 * {
 *  balance = bal;
 * }
 * 
 * double Account::get_balance()
 * {
 *  return balance;
 * }
 * 
 * Ex) Separating Specification from Implementation
 * Account.h //includer header file
 * class Account 
 * {
 * private:
 *  double balance;
 * 
 * public:
 *  void set_balance(double bal);
 *  double get_balance();
 * };
 * 
 * Ex) INCLUDE GUARDS
 * -This garentees that the file will only be included once
 * 
 * #ifndef _ACCOUNT_H_
 * #define _ACCOUNT_H_
 * 
 * //Account class declaration
 * 
 * #endif
 * 
 * Ex) INCLUDE GUARDS Account.h
 * Account.h
 * 
 * #ifndef _ACCOUNT_H_
 * #define _ACCOUNT_H_
 * 
 * class Account
 * {
 * private:
 *  double balance;
 * 
 * public:
 *  void set_balance(double bal);
 *  double get_balance();
 * };
 * 
 * #endif
 * 
 * Ex) Pragma 
 * Account.h
 * 
 * #pragma once
 * 
 * class Account 
 * {
 * private:
 *  double balance;
 * 
 * public:
 *  void set_balance(double bal);
 *  double get_balance();
 * };
 * 
 * Ex) Account.cpp
 * #include "Account.h" //include header file local to the project
 * 
 * void Account::set_balance(double_bal)
 * {
 *  balance = bal;
 * }
 * 
 * double Account::get_balance()
 * {
 *  return balance;
 * }
 * 
 * Ex) Using in Main.cpp
 * #include <iostream>
 * #include "Account.h"
 * 
 * int main() 
 * {
 *  Account frank_account;
 *  frank_account.set_balance(1000.00);
 *  double bal = frank_account.get_balance();
 * 
 *  std::cout << bal << std::endl; //1000.00
 *  return 0;
 * }
 * 
 * */

#include <iostream>
#include <string>

class Account
{
private:
    //attributes
    std::string name;
    double balance;
    
public:
    //methods - declared inline
    void set_balance(double bal) {balance = bal;}
    double get_balance() {return balance;}
    
    //methods will be declared outside of the class declaration
    void set_name(std::string n);
    std::string get_name();
    
    bool deposit(double amount);
    bool withdraw(double amount);
};

void Account::set_name(std::string n)
{
    name = n;
}

std::string Account::get_name()
{
    return name;
}

bool Account::deposit(double amount)
{
    //if verify amount
    balance+=amount;
    return true;
}

bool Account::withdraw(double amount)
{
    if(balance-amount >=0)
    {
        balance-=amount;
        return true;
    }
    else
    {
        return false;
    }
}

int main() {
    
    Account frank_account;
    frank_account.set_name("Frank's Account");
    frank_account.set_balance(1000.0);
    
    if(frank_account.deposit(200.0))
    {
        std::cout << "Deposit OK" << std::endl;
    }else
    {
        std::cout << "Deposit not allowed" << std::endl;
    }
    
    if(frank_account.withdraw(500.0))
    {
        std::cout << "Withdrawl OK" << std::endl;
    }else
    {
        std::cout << "Not sufficient funds" << std::endl;
    }
    
    if(frank_account.withdraw(1500.0))
    {
        std::cout << "Withdrawl OK" << std::endl;
    }else
    {
        std::cout << "Not sufficient funds" << std::endl;
    }
    
    return 0;
}
