#include "InheritanceChallengeChecking.h"
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
        std::cout << "Withdrew: " << amount << " plus " << trans_fee << " Transaction fee" << std::endl;
        return true;
    }
    else
    {
        std::cout << "Insufficient Funds" << std::endl;
        return false;    
    }
}

//Overloaded cout << Operator
std::ostream &operator<<(std::ostream &out, const Checking_Account &account)
{
    out << "[Checking Account: " << account.name << ": " << account.balance << "]";
    return out;
}

//Overloaded -= Operator for Withdrawl
Checking_Account &Checking_Account::operator-=(const double &rhs)
{
    if(this->balance - rhs >= 0)
    {
        this->balance = this->withdraw(rhs);
        return *this;
    }
    else
        std::cout << "Insufficient funds" << std::endl;
    return *this;
}