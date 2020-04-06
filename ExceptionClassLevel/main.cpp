//Exception Handling - Class Level Exceptions
#include  <iostream>
#include <memory>
#include "Account.h"
#include "Checking.h"
#include "Savings.h"
#include "Trust.h"
#include "AccountUtil.h"
#include "IllegalBalanceException.h"

int main()
{
	
    try
    {
        //unique pointer to base class
        std::unique_ptr<Account> moes_account = std::make_unique<Checking_Account>("Moe" , - 10);
        std::cout << *moes_account << std::endl;
    }
    
    catch(const IllegalBalanceException &err)
    {
        std::cerr << "Couldn't create account - negative balance" << std::endl;
    }
    
    std::cout << "Program completed successfuly" <<  std::endl;
    
	return 0;
}
