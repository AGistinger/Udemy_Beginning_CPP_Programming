#include "InheritanceChallengeTrust.h"

//Constructor Trust_Account
Trust_Account::Trust_Account(std::string name, double balance, double int_rate, int count)
    :Savings_Account{name, balance, int_rate}, count{count}
    {
        
    }

//Deposit Method for Trust_Account that adds a $50 bonus for depositing $5000 or more    
bool Trust_Account::deposit(double amount)
{
    if(amount >= 5000)
    {
        amount += 50;
        return Savings_Account::deposit(amount);
    }
    else
    {
        return Savings_Account::deposit(amount);
    }
}

//Withdraw Method for Trust_Account that only allows you to withdrawl 20% of balance and only 3 times per year
bool Trust_Account::withdraw(double amount)
{
    if(amount < (balance * .2) && (count < 3))
    {
        count++;
        return Account::withdraw(amount);
    }
    else if(count >= 3)
    {
        std::cout << "Sorry you have made too many withdrawls this year" << std::endl;
        return false;
    }
    else if(amount > (balance * .2))
    {
        std::cout << "Sorry the amount you can withdrawl has to be less than 20% of your balance" << std::endl;
        return false;
    }
    else
        return false;
}

//Overloaded << Operator to display Trust
std::ostream &operator<<(std::ostream &out, const Trust_Account &account)
{
    out << "[Trust Account: " << account.name << ": " << account.balance << ": " << account.int_rate << "]";
    return out;
}

//Overloaded += Operator for Deposit
Trust_Account &Trust_Account::operator+=(const double &rhs)
{
    if(rhs < 0)
        std::cout << "Cannot deposit negative value" << std::endl;
    else
        this->balance = this->deposit(rhs);
    return *this;
}

//Overloaded -= Operator for Withdrawl
Trust_Account &Trust_Account::operator-=(const double &rhs)
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