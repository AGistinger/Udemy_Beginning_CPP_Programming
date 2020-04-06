// I/O and Streams - Reading From a File - Challenge V2
#include  <iostream>
#include <fstream>
#include <string>

int main()
{
    //Variables
    std::ifstream romeo_play{"../romeoandjuliet.txt"};
    std::string search_string {};
    std::string play_text {};
    size_t total_count {};
    size_t count {};
    
    //Ask User for Input
    std::cout << "Enter the substring to Search for: ";
    std::cin >> search_string;
    
    //Open the file, read the file into a variable, compare user entry to file, increment the total count and found count
    if(!romeo_play.is_open())
    {
        std::cerr << "Problem Opening the File" << std::endl;
        return 1;
    }
    while(romeo_play >> play_text)
    {
        total_count++;
        if(play_text.find(search_string) != std::string::npos)
        {
            count++;
        }
    }
    
    //Display Results
    std::cout << total_count << " words were searched..." << std::endl;
    std::cout << search_string << " was found " << count << " times" << std::endl;
    
    //Close File
    romeo_play.close();
	
	return 0;
}
