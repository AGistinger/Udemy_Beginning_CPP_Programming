#ifndef _INHERITANCECHALLENGESAVINGS_H_
#define _INHERITANCECHALLENGESAVINGS_H_
#include "InheritanceChallengeAccount.h"

/* *
 * Savings Account is a type of Account
 * adds an interest rate
 * Inherits Withdraw - same as regular account
 * Deposit:
 *  Amount supplied to deposit will be incremented by (amount * int_rate/100)
 *  and then the updatd amount will be deposited
 * */
 
class Savings_Account : public Account
{
    friend std::ostream &operator<<(std::ostream &out, const Savings_Account &account);
    
private:
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    
protected:
    double int_rate;
    
public:
    Savings_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    bool deposit(double amount);
    Savings_Account &operator+=(const double &rhs);
};

#endif //_INHERITANCECHALLENGESAVINGS_H_