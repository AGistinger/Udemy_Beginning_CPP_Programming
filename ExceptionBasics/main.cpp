//Exception Handling - Basics - Divide by Zero

#include  <iostream>

int main()
{
	//Variables
    int miles {};
    int gallons {};
    double miles_per_gallon {};
    
    //Insertion
    std::cout << "Enter the miles: ";
    std::cin >> miles;
    std::cout << "Enter the gallons: ";
    std::cin >> gallons;
    
    //Calculation
    try //will try to execute code block and throw an error if i can't
    {
        if(gallons == 0)
        {
            throw 0;  //error thrown if gallons is equal to 0
        }
        miles_per_gallon = static_cast< double>(miles) / gallons;
        std::cout << "Result: " << miles_per_gallon << std::endl;
    }
    
    catch(int &err)  //catch block that is executed if error is thrown by try block
    {
        std::cerr << "Sorry, you can't divide by: " << err << std::endl;
    }
    
    std::cout << "Bye" << std::endl;
	return 0;
}
