// I/O and Streams - Writing to a Text File

#include <iostream>
#include <fstream>
#include <string>

int main()
{
	
    /* Creating an Output file */
    //Create an output file object (append to file)
    std::ofstream out_file {"../output.txt", std::ios::app};
    
    //Check if the file is open
    if(!out_file)
    {
        std::cerr << "Error creating file" << std::endl;
        return 1;
    }
    
    //Creating a line object for the user to enter information into
    std::string line {};
    std::cout << "Enter something to write to the file: ";
    std::getline(std::cin, line);
    
    //Read the entered line into outfile
    out_file << line << std::endl;
    
    //Close the file
    out_file.close();
    
    /*  Copy File 1  */
    //Creating input and output file objects
    std::ifstream in_file {"../poem.txt"};
    std::ofstream copy_file {"../poem_out.txt"};
    
    //Check if files are open
    if(!in_file)
    {
        std::cerr << "Error opening input file" << std::endl;
        return 1;
    }
    
    if(!copy_file)
    {
        std::cerr << "Error opening output file" << std::endl;
        return 1;
    }
    
    //Get information from the input file into the output file
    std::string copy_line {};
    while(std::getline(in_file, copy_line))
    {
        copy_file << copy_line << std::endl;
    }
    
    //State file has been copied
    std::cout << "File Copied" << std::endl;
    
    //Close files
    in_file.close();
    copy_file.close();
    
    /*  Copy File 2 - with get/put */
    //Creqating input and output file objects
    std::ifstream copy_from {"../poem.txt"};
    std::ofstream copy_to {"../poem_copy_v2.txt"};
    
    //Check if files are open
    if(!copy_from)
    {
        std::cerr << "Error opening input file" << std::endl;
        return 1;
    }
    
    if(!copy_to)
    {
        std::cerr << "Error opening output file" << std::endl;
        return 1;
    }
    
    //Go through the input file and copy each character to the output file
    char c;
    while(copy_from.get(c)) //read a character
    {
        copy_to.put(c);  //write the character
    }
    
    //Printing out file is copied
    std::cout << "File copied by character" << std::endl;
    
    //Close files
    copy_from.close();
    copy_to.close();   
    
	return 0;
}
