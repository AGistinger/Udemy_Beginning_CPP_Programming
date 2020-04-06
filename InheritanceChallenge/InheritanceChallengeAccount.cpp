#include "InheritanceChallengeAccount.h"

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

//Overloaded << Operator to display Account
std::ostream &operator<<(std::ostream &out, const Account &account)
{
    out << "[Account: " << account.name << ": " << account.balance << "]";
    return out;
}

//Overloaded += Operator for Deposit
Account &Account::operator+=(const double &rhs)
{
    if(rhs < 0)
        std::cout << "Cannot deposit negative value" << std::endl;
    else
        this->balance = balance + rhs;
    return *this;
}

//Overloaded -= Operator for Withdrawl
Account &Account::operator-=(const double &rhs)
{
    if(this->balance - rhs >= 0)
    {
        this->balance = balance - rhs;
        return *this;
    }
    else
        std::cout << "Insufficient funds" << std::endl;
    return *this;
}

std::string Account::get_name() const
{
    return name;
}