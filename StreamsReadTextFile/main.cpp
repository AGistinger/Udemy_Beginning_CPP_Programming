// I/O and Streams - Reading from a Text File

#include  <iostream>
#include <fstream>
#include <iomanip>

int main()
{
	
    std::cout << std::setw(70) << std::left << std::setfill('-') << "---Reading from a File Example 1" << std::endl;
    std::cout <<std::setfill(' ') <<  std::endl;
    
    //Reading File Example 1
    //If you are on windows you will need to use two \\ in the file name to open the file C:\\dir\\dir
    //If you are on windows you can use "test.txt" use current direction for Codelite you have to ../ to go one level above
    
    //Variables/Objects
    std::ifstream in_file;
    in_file.open("../test.txt");
    std::string line;
    int num;
    double total;
    
    //Check if in_file is open and then read data from it
    if(!in_file.is_open())
    {
        std::cerr << "Problem Opening File" << std::endl;
        return 1;
    }
    else
    {
        in_file >> line >> num >> total;
        std::cout << line << std::endl;
        std::cout << num << std::endl;
        std::cout << total << std::endl;
    }
    
    in_file.close();
    std::cout << std::endl;
    
    //Reading file Example 2
    //Using a while loop to go through multiple lines of data
    
    std::cout << std::setw(70) << std::left << std::setfill('-') << "---Reading from a File Example 2" << std::endl;
    std::cout <<std::setfill(' ') <<  std::endl;
    
    //Variables/Objects
    std::ifstream file_two;
    file_two.open("../Test2.txt");
    std::string name;
    int num_two;
    double total_two;
    
    if(!file_two.is_open())
    {
        std::cerr << "Problem opening file" << std::endl;
    }
    while(!file_two.eof())  //or you can use while(file_two >> name >> num_two >> total_two)
    {
        file_two >> name >> num_two >> total_two;
        
        std::cout << std::setw(10) << std::left << name
                          << std::setw(10) << num_two
                          << std::setw(10) << total_two << std::endl;
    }
    
    file_two.close();
    std::cout << std::endl;
    
	return 0;
}
