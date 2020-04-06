// I/O and Streams - Reading from a Text File - Part 2

#include  <iostream>
#include <fstream>
#include <iomanip>

int main()
{
	
    std::cout << std::setw(70) << std::left << std::setfill('-') << "---Read and display Shakespeare Sonnet 18 Poem using getline" << std::setfill(' ') << std::endl;
    std::cout << std::endl;
    
    //Variables/Objects
    std::ifstream in_file;
    in_file.open("../poem.txt");
    
    //Reading the File
    if(!in_file.is_open())
    {
        std::cerr << "Problem Opening the File" << std::endl;
        return 1;
    }
    std::string line {};
    while(std::getline(in_file, line)) // or while(!in_file.eof())
    {
        std::cout << line << std::endl;
    }
    
    in_file.close();
    std::cout << std::endl;
    
	return 0;
}
