//Smart Pointers - Shared Pointers

#include "SmartAccount.h"
#include "SmartChecking.h"
#include "SmartSavings.h"
#include "SmartTrust.h"
#include "SmartPrint.h"

#include  <iostream>
#include <memory>
#include <vector>

//Test Class
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

  //Global function to display shared pointer count
void func(std::shared_ptr<Test> p) 
{
        std::cout << "Use count: " << p.use_count() << std::endl;
}

int main()
{
	
    //use_count - the number of shared_ptr objects
    //managing the heap object
    
    std::shared_ptr<int> p1 {new int {100}};
    std::cout << "Use count: " << p1.use_count() << std::endl;  // 1
    
    std::shared_ptr<int> p2 {p1};  //shared ownership
    std::cout << "Use count: " << p2.use_count() << std::endl;  // 2
    
    p1.reset();  //decrement the use_count; p1 is nulled out
    std::cout << "Use count: " << p1.use_count() << std::endl;  // 0
    std::cout << "Use count: " << p2.use_count() << std::endl;  // 1
    
    std::cout << "\n=========================================================" << std::endl;
    std::shared_ptr<Test> ptr = std::make_shared<Test> (100);
    func(ptr);  //calling the function creates another copy which will  increase the count until the function ends / count : 2
    std::cout << "Use count: " << ptr.use_count() << std::endl;
    {
        std::shared_ptr<Test> ptr1 = ptr;
        std::cout << "Use count: " << ptr.use_count() << std::endl;  // count : 2
        {
            std::shared_ptr<Test> ptr2 = ptr;
            std::cout << "Use count: " << ptr.use_count() << std::endl;  // count : 3
            ptr.reset();  // count : 2
        }
        std::cout << "Use count: " << ptr.use_count() << std::endl;  // count  : 0 (reset)
    }
    
    std::cout << "Use count: " << ptr.use_count() << std::endl; // count : 0 
    
    std::cout << "\n=========================================================" << std::endl;
    //Using base class shared_ptr's
    std::shared_ptr<Account> acc1 = std::make_shared<Trust_Account> ("Larry", 10000, 3.1);
    std::shared_ptr<Account> acc2 = std::make_shared<Checking_Account> ("Moe", 5000);
    std::shared_ptr<Account> acc3 = std::make_shared<Savings_Account> ("Curly", 6000);
    
    //Vector of shared_pointers to account objects
    std::vector<std::shared_ptr<Account> > accounts;
    accounts.push_back(acc1);  //creates copy / count : 2
    accounts.push_back(acc2);  //creates copy / count : 2
    accounts.push_back(acc3);  //creates copy / count  : 2
    
    for(const auto &acc : accounts)
    {
        std::cout << *acc << std::endl;
        std::cout << "Use count: " << acc.use_count() << std::endl;
    }
    
    std::cout << "\n========================================================" << std::endl;
    
	return 0;
}
