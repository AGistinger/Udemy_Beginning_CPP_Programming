// Implementing Member Methods

#include <iostream>
#include <string>
#include "Account.h"

int main() {
    
    //Create frank object
    Account frank_account;
    frank_account.set_name("Frank's Account");
    frank_account.set_balance(1000.0);
    
    //Check if deposit 200 is ok
    if(frank_account.deposit(200.0))
    {
        std::cout << "Deposit OK" << std::endl;
    }else
    {
        std::cout << "Deposit not allowed" << std::endl;
    }
    
    //Check if withdrawl of 500 is ok
    if(frank_account.withdraw(500.0))
    {
        std::cout << "Withdrawl OK" << std::endl;
    }else
    {
        std::cout << "Not sufficient funds" << std::endl;
    }
    
    //Check if withdrawl of 1500 is ok
    if(frank_account.withdraw(1500.0))
    {
        std::cout << "Withdrawl OK" << std::endl;
    }else
    {
        std::cout << "Not sufficient funds" << std::endl;
    }
    
    return 0;
}
