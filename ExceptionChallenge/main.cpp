//Exception Handling - Challenge
#include  <iostream>
#include "Print.h"
#include "Account.h"
#include "AccountUtil.h"
#include "IllegalBalanceException.h"
#include "InsufficientFundsException.h"
#include "InvalidEntryException.h"
#include "Menu.h"
#include <iostream>
#include <vector>

int main()
{
	
    //Display Menu
    char selection {};
    
    try
    {
        do
        {
            menu();
            selection = selection_option();
            execute_choice(selection);
        } 
        while (selection != 'Q');
    }
    
    //Catch Handlers
    catch(const IllegalBalanceException &err)
    {
        std::cerr << "\n" << err.what() << std::endl;
    }
    
    catch(const InsufficientFundsException &err)
    {
        std::cerr <<  "\n" << err.what() << std::endl;
    }
    
    catch(const InvalidEntryException &err)
    {
        std::cerr << err.what() << std::endl;
    }
    
    std::cout << "\nEnding Program..." << std::endl;
    
	return 0;
}
