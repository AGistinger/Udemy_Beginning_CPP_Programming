//Smart Pointers - Unique Pointer

#include <iostream>
#include <memory>
#include <vector>

#include "SmartAccount.h"
#include "SmartSavings.h"
#include "SmartChecking.h"
#include "SmartTrust.h"
#include "SmartPrintable.h"

class Test
{
private:
    int data;
    
public:
    Test()
        :data{0}
        {
            std::cout << "Test Constructor (" << data << ")" << std::endl;
        }
        
        Test(int data)
            :data{data}
            {
                std::cout << "Test Constructor (" << data << ")" << std::endl;
            }
            
            ~Test()
            {
                std::cout << "Test Destructor (" << data << ")" << std::endl;
            }
};

int main() {
    
    //Raw Pointer
    Test *t1 = new Test  {1000};
    delete t1;
    
    //Unique Pointer
    std::unique_ptr<Test> t2 {new Test {100}};
    
    //Make Unique
    std::unique_ptr<Test> t3 = std::make_unique<Test> (150);
    
    //Unique Pointers
    std::unique_ptr<Test> t4;
    t3 = std::move(t2);
    
    if(!t2)
    {
        std::cout << "t2 is nullptr" << std::endl;
    }
    
    //Unique Pointers with  Accounts
    std::unique_ptr<Account> a1 = std::make_unique<Checking_Account> ("Moe", 5000);
    std::cout << *a1 << std::endl;
    a1->deposit(5000);
    std::cout << *a1 << std::endl;
    
    //Vector of unique pointers to Accounts
    std::vector<std::unique_ptr<Account>> accounts;
    
    accounts.push_back(std::make_unique<Checking_Account> ("James, 1000"));
    accounts.push_back(std::make_unique<Savings_Account>("Billy", 4000, 5.2));
    accounts.push_back(std::make_unique<Trust_Account>("Bobby", 5000, 4.5));
    
    //Range based for loop
    for(const auto &acc : accounts)
    {
        std::cout << *acc << std::endl;
    }
        
    return 0;
}
