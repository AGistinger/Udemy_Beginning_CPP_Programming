#ifndef _POLYACCOUNT_H_
#define _POLYACCOUNT_H_
#include "PolyPrint.h"
#include <iostream>
#include <string>

//Abstract Base Account Class 
class Account : public I_Printable
{
private:
    //Constants that are available only to the class, providing default parameter values
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
    
protected:
    std::string name;
    double balance;
    
public:
    //Constructors/Destructors
    Account(std::string name = def_name, double balance = def_balance);
    virtual ~Account() = default;
    
    //Functions
    virtual bool deposit(double amount) = 0;
    virtual bool withdraw(double amount) = 0;
    virtual double get_balance() const;
    virtual std::string get_name() const;
    virtual void print(std::ostream &out) const override;
};

#endif //_POLYACCOUNT_H_