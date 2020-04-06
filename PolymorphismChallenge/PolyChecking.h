#ifndef _POLYCHECKING_H_
#define _POLYCHECKING_H_
#include "PolyAccount.h"

//Checking Account
class Checking_Account : public Account 
{
protected:
    double trans_fee;
    
private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_trans_fee = 1.50;
    
public:
    //Constructors/Destructor
    Checking_Account(std::string name = def_name, double balance = def_balance, double trans_fee = def_trans_fee);
    virtual ~Checking_Account() = default;
    
    //Overidden functions
    virtual bool withdraw(double amount) override;
    virtual bool deposit(double amount) override;
    
    //Overridden Function - Print
    virtual void print(std::ostream &out) const override;
    
};

#endif //_POLYCHECKING_H_