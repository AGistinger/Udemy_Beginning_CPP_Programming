#ifndef _POLYTRUST_H_
#define _POLYTRUST_H_
#include "PolySavings.h"

//Trust Account
class Trust_Account : public Savings_Account
{
protected:
    int count;

private:
    static constexpr const char *def_name = "Unnamed Trust Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.02;
    
public:
    //Constructors/Destructor
    Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate, int count = 0);
    virtual ~Trust_Account() = default;
    
    //Overriden functions
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual void print(std::ostream &out) const override;
};

#endif //_POLYTRUST_H_