// C-Style Strings
/*
 * Sequence of characteres stored continuously in memory.
 * Implemented as an array of characters.
 * Terminated by a null character (null) - character with a value of zero.
 * 
 * String Literal
 * Sequence of characters in double quotes, "Frank".
 * Constant - cannot change them.
 * Terminated with null character.
 * 
 * Ex1)
 * "C++ is fun\0"
 * 
 * Ex2)
 * char my_name[] {"Frank"}
 * displays as Frank\0
 * my_name[5] = 'y'; // Problem - the string will no longer have a null character, this is a fixed size.
 * 
 * C-Style strings work like Arrays, unable to change the size.
 * 
 * Ex3)
 * char my_name[8] {"Frank"};
 * displays as Frank\0\0\0
 * my_name[5] = 'y'; // OK - the string is still terminated by a null character
 * 
 * */

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    
    char first_name[20] {};
    char last_name[20] {};
    char full_name[20] {};
    char temp[50] {};
    
    cout << "Please enter your first name: ";
    cin >> first_name;
    
    cout << "Please enter your last name: ";
    cin >> last_name;
    cout << "\n-------------------------------\n" << endl;
    
    cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
    cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters.\n" << endl;
    
    strcpy(full_name, first_name); //Copy first_name to full_name
    strcat(full_name, " "); //Concatenate full_name plus a space
    strcat(full_name, last_name); //Concatenate full_name plus last_name
    cout << "Your full name is: " << full_name << endl;
    
    cout << "\n------------------------------\n" << endl;
    cout << "Enter your full name: ";
    cin >> full_name; //Will only read characters up to the space
    
    cout << "Your full name is " << full_name << endl;
    
    cout << "\n------------------------------\n" << endl;
    
    //Using cin.getline function to get all characters
    cout << "Enter your full name: ";
    cin.getline(full_name, 50);
    cout << "Your full name is " << full_name << endl;
    
    cout << "\n------------------------------\n" << endl;
    
    strcpy(temp, full_name);
    if(strcmp(temp,full_name) == 0) {
        cout << temp << " and " << full_name << " are the same" << endl;
    }else{
        cout << temp << " and " << full_name << " are different" << endl;
    }
    
    cout << "\n-------------------------------\n" << endl;
    
    for(size_t i {0}; i <strlen(full_name); i++) {
        if(isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);
    }
    
    cout << "Your full name is " << full_name << endl;
    
    cout << "\n-------------------------------\n" << endl;
    
    if(strcmp(temp,full_name) == 0) {
        cout << temp << " and " << full_name << " are the same" << endl;
    }else{
        cout << temp << " and " << full_name << " are different" << endl;
    }
    
    cout << "\n------------------------------\n" << endl;
    
    cout << "Result of comparing " << temp << " and " << full_name << ": " << strcmp(temp, full_name) << endl;
    cout << "Result of comparing " << full_name << " and " << temp << ": " << strcmp(full_name, temp) << endl;
    
    cout << endl;
    return 0;
}
