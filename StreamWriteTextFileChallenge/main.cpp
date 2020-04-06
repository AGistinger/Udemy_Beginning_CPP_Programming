//I/O and Streams - Write to a Text File - Challenge

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

//Function Prototypes
bool is_whitespace(std::string line);

int main()
{
	
    //Variables
    std::ifstream play_text {"../romeoandjuliet.txt"};
    std::ofstream edit_txt {"../romeoandjuliet_line_edit.txt"};
    std::string line {};
    int line_num {0};
    const int width {10};
    
    //Check if files are open
    if(!play_text)
    {
        std::cerr << "Error Opening the Input File" << std::endl;
    }
    
    if(!edit_txt)
    {
        std::cerr << "Error Opening the Output File" << std::endl;
    }
    
    //Read the text from the play_text and then send the line nmumber + text to the output file, ignore spaces
    while(std::getline(play_text, line))
    {
        if(is_whitespace(line))
        {
            edit_txt << line << std::endl;
        }
        else
        {
            edit_txt << std::setw(width) << std::left << line_num << std::setw(width) << line << std::endl;
            line_num++;
        }
    }
    
    //Verify File was copied
    std::cout << "File Copied with Line Numbers" << std::endl;
    
    //Close files
    play_text.close();
    edit_txt.close();
    
	return 0;
}

//Function to check for white space
bool is_whitespace(std::string line)
{
    for(auto c : line)
    {
        if(!std::isspace(c))
        {
            return false;
        }
    }
    return true;
}