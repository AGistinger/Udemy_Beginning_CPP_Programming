#ifndef _INHERITANCECHALLENGETRUST_H_
#define _INHERITANCECHALLENGETRUST_H_
#include "InheritanceChallengeSavings.h"

class Trust_Account : public Savings_Account
{
    friend std::ostream &operator<<(std::ostream &out, const Trust_Account &account);
    
protected:
    int count;

private:
    static constexpr const char *def_name = "Unnamed Trust Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    
public:
    Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate, int count = 0);
    bool deposit(double amount);
    bool withdraw(double amount);
    Trust_Account &operator+=(const double &rhs);
    Trust_Account &operator-=(const double &rhs);
};

#endif //_INHERITANCECHALLENGETRUST_H_