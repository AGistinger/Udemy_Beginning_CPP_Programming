//Exceptiong Handler - Creating User-Defined Exception Classes
#include  <iostream>

//User-Defined class for Divide By Zero Exception
class DivideByZeroException
{
    
};

//User-Defined class for Negative Value Exception
class NegativeValueException
{
    
};

//Calcualte MPG Function (global)
double calculate_mpg(int miles, int gallons)
{
    if(gallons == 0)
    {
        throw DivideByZeroException();
    }
    
    if(miles < 0 || gallons < 0)
    {
        throw NegativeValueException();
    }
    
    return static_cast<double>(miles) / gallons;
}

int main()
{
	
    int miles {};
    int gallons {};
    double miles_per_gallon {};
    
    std::cout << "Enter the miles drivien: ";
    std::cin >> miles;
    std::cout << "Enter the gallons used: ";
    std::cin >> gallons;
    
    //Try block
    try
    {
        miles_per_gallon = calculate_mpg(miles, gallons);
        std::cout << "Result: " << miles_per_gallon << std::endl;
    }
    
    //Catch handler for Divide by Zero Exception
    catch(const DivideByZeroException &err)
    {
        std::cout << "Sorry, Can't divide by zero" << std::endl;
    }
    
    //Catch handler for Negative Value Exception
    catch(const NegativeValueException &err)
    {
        std::cout << "Sorry, one of your parameters is negative" << std::endl;
    }
    
    std::cout << "Bye" << std::endl;
    
	return 0;
}
