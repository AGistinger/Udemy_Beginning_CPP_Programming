#include "InheritanceChallengeSavings.h"

Savings_Account::Savings_Account(std::string name, double balance, double int_rate)
    :Account{name, balance}, int_rate{int_rate}
    {
    
    }
/* *
 * Deposit:
 *  Amount supplied to deposit will be incremented by (amount * int_rate/100)
 *  and then the updated amoutn will be deposited
 * */
bool Savings_Account::deposit(double amount)
{
    amount += amount * (int_rate/100);
    return Account::deposit(amount);
}

//Overloaded Operator for << Display
std::ostream &operator<<(std::ostream &out, const Savings_Account &account)
{
    out << "[Savings Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%]";
    return out;
}

//Overloaded += Operator for Deposit
Savings_Account &Savings_Account::operator+=(const double &rhs)
{
    if(rhs < 0)
        std::cout << "Cannot deposit negative value" << std::endl;
    else
        this->balance = this->deposit(rhs);
    return *this;
}