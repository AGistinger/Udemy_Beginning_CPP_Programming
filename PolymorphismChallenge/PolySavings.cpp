#include "PolySavings.h"
#include "PolyPrint.h"

//Constructor Savings_Account
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
    if(amount > 0)
    {
        amount += amount * (int_rate/100);
        return Account::deposit(amount);
    }
    else
    {
        std::cout << "Cannot Deposit a Negative Amount" << std::endl;
        return false;
    }
}

//Savings_Account Withdraw - Override
bool Savings_Account::withdraw(double amount)
{
    return Account::withdraw(amount);
}

//Overridden Print Function
void Savings_Account::print(std::ostream &out) const
{
    out.precision(2);
    out << std::fixed;
    out << "[Savings Account: " << name << ", $" << balance << ", " << int_rate << "%]";
}