#ifndef _INHERITANCECHALLENGECHECKING_H_
#define _INHERITANCECHALLENGECHECKING_H_
#include "InheritanceChallengeAccount.h"

class Checking_Account : public Account 
{
    friend std::ostream &operator<<(std::ostream &out, const Checking_Account &account);
    
protected:
    double trans_fee;
    
private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_trans_fee = 1.50;
    
public:
    Checking_Account(std::string name = def_name, double balance = def_balance, double trans_fee = def_trans_fee);
    bool withdraw(double amount);
    Checking_Account &operator-=(const double &rhs);
};

#endif //_INHERITANCECHALLENGECHECKING_H_