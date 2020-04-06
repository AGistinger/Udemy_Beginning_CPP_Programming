#ifndef _INHERITANCEREDEFINEMETHODSSAVINGS_H
#define _INHERITANCEREDEFINEMETHODSSAVINGS_H
#include "InheritanceRedefineMethodsAccount.h"

//Savings Account class
//Deposit method increments the amount to be deposited by amount * int_rate percentage!
//So a 1000 deposit at 5% interest rate will deposit 1000 + 50 = 1050
//Withdraw method does not need specialized

class Savings_Account : public Account
{
    friend std::ostream &operator<<(std::ostream &out, const Savings_Account &account);
protected:
    double int_rate;
public:
    Savings_Account();
    Savings_Account(double balance, double int_rate);
    void deposit(double amount);
    //withdraw is inherited
};

#endif //_INHERITANCEREDEFINEMETHODSSAVINGS_H