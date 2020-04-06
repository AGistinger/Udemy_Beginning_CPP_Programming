//Smart Pointers - Custom Deleters

#include  <iostream>
#include <memory>

class Test 
{
private: 
    int data;
    
public:
    //Constructors/Destructor
    Test()
    : data{0}
    {
        std::cout << "\tTest Constructor (" << data << ")" << std::endl;
    }
    
    Test(int data)
    : data{data}
    {
        std::cout << "\tTest Constructor (" << data << ")" << std::endl;
    }
    
    ~Test()
    {
        std::cout << "\tTest Destructor (" << data << ")" << std::endl;
    }
};

//Custom Deleter Function
void my_deleter(Test *ptr)
{
    std::cout << "\tUsing my custom function deleter" << std::endl;
    delete ptr;
}

int main()
{
	
    {
        //Using a function - can't use make_shared when using a custom deleter
        std::shared_ptr<Test> ptr1 { new Test {100}, my_deleter};
    }
    
    std::cout << "============================================" << std::endl;
    {
        //Using a Lamda expression, creates a closure object, instead of calling a function the written code executes, code written where it's used
        std::shared_ptr<Test> ptr2 (new Test {1000}, 
            [] (Test *ptr) 
            {
                std::cout << "\tUsing my custom lamda deleter" << std::endl;
                delete ptr;
            });
    }
    
	return 0;
}
