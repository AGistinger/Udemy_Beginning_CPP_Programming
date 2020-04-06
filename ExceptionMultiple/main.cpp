//Exception Handling - Handling Multiple Exceptions
#include  <iostream>
#include <string>

//Global Function - Calculate MPG
double calculate_mpg(int miles, int gallons)
{
    if(gallons == 0)
    {
        throw 0;  //throw 0 error if try to divide by 0
    }
    
    if(miles == 0)
    {
        throw 0;  //throw 0 error if try to divide by 0
    }
    
    if(miles < 0 || gallons < 0)
    {
        throw std::string {"Negative value error"}; //throw string error if try to divide by negative value
    }
    
    return static_cast<double>(miles) / gallons;
}

int main()
{
	//Variables
    int miles {};
    int gallons {};
    double miles_per_gallon {};
    
    //Insertion
    std::cout << "Enter the Miles: ";
    std::cin >> miles;
    std::cout << "Enter the Gallons: ";
    std::cin >> gallons;
    
    //Exception Handling (Multiple)
    try
    {
        miles_per_gallon = calculate_mpg(miles, gallons);
        std::cout << "Result: " << miles_per_gallon << std::endl;
    }
    
    //Catch Handler for int
    catch(int &err)
    {
        std::cerr << "Tried to divide by: " << err << std::endl;
    }
   
    //Catch Handler for std::string
    catch(std::string &err)
    {
        std::cerr << err << std::endl;
    }
    
    //Catch All Handler
    catch(...)
    {
        std::cerr << "Unknown Exception..." << std::endl;
    }
    
    std::cout << "Bye" << std::endl;
	return 0;
}
