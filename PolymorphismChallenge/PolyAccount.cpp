#include "PolyAccount.h"

//Account Constructor
Account::Account(std::string name, double balance)
    :name{name}, balance{balance}
    {
        
    }
    
//Deposit Method    
bool Account::deposit(double amount)
{
    if(amount < 0)
        return false;
    else
    {
        balance += amount;
        return true;
    }
}

//Withdraw Method
bool Account::withdraw(double amount)
{
    if(balance - amount >= 0)
    {
        balance -= amount;
        return true;
    }
    else
        return false;
}

//Get Balance Method
double Account::get_balance() const
{
    return balance;
}

std::string Account::get_name() const
{
    return name;
}

//Print Override
void Account::print(std::ostream &out) const
{
    out.precision(2);
    out << std::fixed;
    out << "[Account: " << name << ", $" << balance << "]";
}