#ifndef _INHERITANCEDERIVINGCLASSES_H_
#define _INHERITANCEDERIVINGCLASSES_H_
#include <string>

class Account
{
public:
    double balance;
    std::string name;
    void deposit(double amount);
    void withdraw(double amount);
    Account();
    ~Account();
};

#endif //_INHERITANCEDERIVINGCLASSES_H_