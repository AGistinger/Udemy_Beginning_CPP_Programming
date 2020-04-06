#include "PolyChecking.h"
#include <iostream>

//Constructor Checking_Account
Checking_Account::Checking_Account(std::string name, double balance, double trans_fee)
    : Account{name, balance}, trans_fee{trans_fee}
    {
        
    }

//Checking_Account withdrawl method that adds a transaction fee    
bool Checking_Account::withdraw(double amount)
{
    if(Account::withdraw(amount + trans_fee))
    {
        std::cout << "\nWithdrew: " << amount << " plus " << trans_fee << " Transaction fee" << std::endl;
        return true;
    }
    else
    {
        std::cout << "\nInsufficient Funds" << std::endl;
        return false;    
    }
}

//Checking_Account deposit - Override
bool Checking_Account::deposit(double amount)
{
    return Account::deposit(amount);
}

//Overridden Print Function
void Checking_Account::print(std::ostream &out) const
{
    out.precision(2);
    out << std::fixed;
    out << "[Checking Account: " << name << ", $" << balance << "]";
}