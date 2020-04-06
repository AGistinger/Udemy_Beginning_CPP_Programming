#include "SmartTest.h"

//Empty Constructor
SmartTest::SmartTest()
    :data{0}
    {
        std::cout << "Test constructor(" << data << ")" << std::endl;
    }

//Overloaded Constructor
SmartTest::SmartTest(int data)
    :data{data}
    {
        std::cout << "Test constructor(" << data << ")" << std::endl;
    }
    
//Get Data Function
SmartTest::int get_data() const
{
    return data;
}

//Deconstructor
SmartTest::~Test()
{
    std::cout << "Test deconstructor (" << data << ")" << std::endl;
}