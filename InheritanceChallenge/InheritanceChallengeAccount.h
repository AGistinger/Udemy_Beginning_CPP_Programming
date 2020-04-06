#ifndef _INHERITANCECHALLENGEACCOUNT_H_
#define _INHERITANCECHALLENGEACCOUNT_H_
#include <iostream>
#include <string>

class Account
{
    friend std::ostream &operator<<(std::ostream &out, const Account &account);
    
private:
    //Constants that are available only to the class, providing default parameter values
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
    
protected:
    std::string name;
    double balance;
    
public:
    Account(std::string name = def_name, double balance = def_balance);
    Account &operator+=(const double &rhs);
    Account &operator-=(const double &rhs);
    bool deposit(double amount);
    bool withdraw(double amount);
    double get_balance() const;
    std::string get_name() const;
};

#endif //_INHERITANCECHALLENGEACCOUNT_H_