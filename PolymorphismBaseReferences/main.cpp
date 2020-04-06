//Polymorphsim - Using Base Class References

#include <iostream>

//Account
class Account
{
protected:
    double balance;
public:
    virtual ~Account() {}
    virtual void withdraw(double amount)
    {
        std::cout << "Account::Withdraw" << std::endl;
    }

};

//Checking
class Checking : public Account 
{
public:
    virtual ~Checking() {}
    virtual void withdraw(double amount) override
    {
        std::cout << "Checking::Withdraw" << std::endl;
    }
};

//Savings
class Savings : public Account
{
public:
    virtual ~Savings() {}
    virtual void withdraw(double amount) override
    {
        std::cout << "Savings::Withdraw" << std::endl;
    }
};

//Trust
class Trust : public Account
{
public:
    virtual ~Trust() {}
    virtual void withdraw(double amount) override
    {
        std::cout << "Trust::Withdraw" << std::endl;
    }
};

//Withdraw Global Function
void do_withdraw(Account &account, double amount)
{
    account.withdraw(amount);
}

int main() {
    
    Account a;
    Account &ref = a;
    ref.withdraw(1000);  //In Account::withdraw
    
    Trust t;
    Account &ref1 = t;
    ref1.withdraw(1000);  //In Trust::withdraw
    
    Account a1;
    Savings a2;
    Checking a3;
    Trust a4;
    
    do_withdraw(a1, 1000);  //In Account::withdraw
    do_withdraw(a2, 2000);  //In Savings::withdraw
    do_withdraw(a3, 3000);  //In Checking::withdraw
    do_withdraw(a4, 4000);  //In Trust::withdraw

    return 0;
}
