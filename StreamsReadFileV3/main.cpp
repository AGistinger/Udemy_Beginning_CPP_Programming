// I/O and Streams - Reading from a Text File - Part 3

#include  <iostream>
#include <fstream>
#include <iomanip>

int main()
{
	
    std::cout << std::setw(70) << std::left << std::setfill('-') << "-Read and display Shakespeare Sonnet 18 Poem, Unformatted using getline" << std::setfill(' ') << std::endl;
    std::cout << std::endl;
    
    //Variables/Objects
    std::ifstream in_file;
    in_file.open("../poem.txt");
    
    if(!in_file.is_open())
    {
        std::cerr << "Problem Opening the File" << std::endl;
        return 1;
    }
    char c {};
    while(in_file.get(c))
    {
        std::cout << c;
    }
    
    std::cout << std::endl;
    in_file.close();
    std::cout << std::endl;
    
	return 0;
}
