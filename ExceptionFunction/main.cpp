//Exception Handling - Throwing an Exception from a Function
#include  <iostream>

//Global Function
double calculate_mpg(int miles, int gallons)
{
    if(gallons == 0)
    {
        throw 0;  //throw exception
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
    
    //Calculation - (Try Block) will look for catch handler
    try
    {
        miles_per_gallon = calculate_mpg(miles, gallons);
        std::cout << "Result: " << miles_per_gallon << std::endl;
    }
    
    //Catch Handler
    catch(int &err)
    {
        std::cerr << "Tried to Divide by: " << err << std::endl;
    }
    
    //End
    std::cout << "Bye" << std::endl;
	return 0;
}
