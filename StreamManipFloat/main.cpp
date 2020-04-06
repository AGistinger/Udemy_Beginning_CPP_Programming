// I/O and Streams / Stream Manipulators - Floating Point

#include  <iostream>
#include <iomanip>

int main()
{
	
    double num1 {123456789.987654321};
    double num2 {1234.5678};
    double num3 {1234.0};
    
    //Using default settings
    std::cout << "\n---Defaults--------------------------------------------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    
    //Note how since we can't display in precison 2, that scientific notation is used
    std::cout << std::setprecision(2);
    std::cout << "\n---Precision 2---------------------------------------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    
    //Using precision 5
    std::cout << std::setprecision(5);
    std::cout << "\n---Precision 5---------------------------------------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    
    //Using precision 9
    std::cout << std::setprecision(9);
    std::cout << "\n---Precision 9----------------------------------------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    
    //Using precision 3 and fixed
    std::cout << std::setprecision(3) << std::fixed;
    std::cout << "\n---Precision 3 and fixed-----------------------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    
    //Using precision 3, fixed, and scientific notation
    std::cout << std::setprecision(3) << std::scientific;
    std::cout << "\n---Precision, fixed, and scientific--------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    
    //Using precision 3, fixed, scientific notation, and uppercase
    std::cout << std::setprecision(3) << std::scientific << std::uppercase;
    std::cout << "\n---Precision, fixed, scientific, and uppercase------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    
    //Show '+' for positive numbers
    std::cout << std::setprecision(3) << std::fixed << std::showpos;
    std::cout << "\n---Showing + for Positive Numbers----------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    
    //Back to defaults
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << std::resetiosflags(std::ios::showpos);
    
    //Show trailing zeros up to precision 10
    std::cout << std::setprecision(10) << std::showpoint;
    std::cout << "\n---Precision 10, showpoint-----------------------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    
    //Back to defalts
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << std::resetiosflags(std::ios::showpos);
    std::cout << std::resetiosflags(std::ios::showpoint);
    std::cout << std::setprecision(6);
    
    std::cout << "\n---Back to defaults------------------------------" << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    
	return 0;
}
