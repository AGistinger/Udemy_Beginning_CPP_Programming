#ifndef _INHERITANCEDERIVINGCLASSESSUB_H_
#define _INHERITANCEDERIVINGCLASSESSUB_H_
#include "InheritanceDerivingClasses.h"

class Savings_Account: public Account
{
public:
    double int_rate;
    Savings_Account();
    ~Savings_Account();
    void deposit(double amount);
    void withdraw(double amount);
};

#endif //_INHERITANCEDERIVINGCLASSES_H_