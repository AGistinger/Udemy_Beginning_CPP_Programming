// I/O and Streams - Using String Streams

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <limits> //*New*

int main()
{
    //(Input Example) Takes a input stream object and extract the information from the info string to the name, num, and total variables
	int num {};
    double total {};
    std::string name {};
    
    std::string info {"Moe 100 1234.5"};
    std::istringstream iss {info};
    
    iss >> name >> num >> total;
    
    std::cout << std::setw(10) << std::left << name
              << std::setw(5) << num
              << std::setw(10) << total << std::endl;
              
    std::cout << "\n-------------------------------------------------------------" << std::endl;
    
    //(Output Example) Takes a output stream object (string stream class has its own string buffer) and writes to the stream (stores info in string buffer/method .str())
    std::ostringstream oss {};
    oss << std::setw(10) << std::left << name
        <<std::setw(5) << num
        << std::setw(10) << total << std::endl;
    std::cout << oss.str() << std::endl;
    
    //(Data Validation) Checks if the string the user entered is an integer
    std::cout << "\n---Data Validation-------------------------------------------" << std::endl;
    
    int value {};
    std::string entry {};
    bool done = false;
    
    do
    {
        std::cout << "Please enter an integer: ";
        std::cin >> entry;
        
        //isstringstream - string buffer that contains a sequence of characters
        std::istringstream validator {entry};
        
        if(validator >> value)
        {
            done = true;
        }
        else
        {
            std::cout << "Sorry, that's not an integer" << std::endl;
            
            //discard the input buffer (std::cin, grab integer and ignore everything in stream up to new line)
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    while(!done);
    
    std::cout << "You entered the integer: " << value << std::endl;
    
    std::cout << std::endl;
    
	return 0;
}
