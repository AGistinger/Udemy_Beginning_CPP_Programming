#ifndef _POLYSAVINGS_H_
#define _POLYSAVINGS_H_
#include "PolyAccount.h"

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
private:
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.01;
    
protected:
    double int_rate;
    
public:
    //Constructors/Destructor
    Savings_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    virtual ~Savings_Account() = default;
    
    //Overidden Deposit function
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    
    //Overidden Print function
    virtual void print(std::ostream &out) const override;
};

#endif //_POLYSAVINGS_H_