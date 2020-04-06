#ifndef _INHERITANCEREDEFINEMETHODSACCOUNT_H
#define _INHERITANCEREDEFINEMETHODSACCOUNT_H
#include <iostream>

//Simple Account class
class Account
{
    friend std::ostream &operator<<(std::ostream &out, const Account &account);
protected:
    double balance;
public:
    Account();
    Account(double balance);
    void deposit(double amount);
    void withdraw(double amount);
};

#endif //_INHERITANCEREDEFINEMETHODSACCOUNT_H