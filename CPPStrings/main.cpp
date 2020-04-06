// C++ - Strings
/*
 * std::string is a Class in the Standard Template Library (STL)
 * #include <string>
 * std namespace
 * continuous in memory
 * dynamic in size
 * work with input and output streams
 * lots of useful member functions
 * our familiar operators can be used (+, =, <=, etc)
 * can be easily converted to C-Style Strings if needed
 * safer
 * 
 * Ex1) DECLARING C++ STRINGS
 * string s1; //Empty
 * string s2 {"Frank"}; //Frank
 * string s3 {s2}; //Frank
 * string s4 {"Frank", 3}; //Fra
 * string s5 {s3, 0, 2}; //Fr
 * string s6 (3, 'X'); //XXX
 * 
 * Ex2) ASSIGNING
 * string s1;
 * s1 = "C++ Rocks!";
 * string s2 {"Hello"};
 * s2 = s1;
 * 
 * Ex3) Concatenating C++ strings
 * string part1 {"C++"};
 * string part2 {"is a powerful"};
 * 
 * string sentence;
 * 
 * sentence = part1 + " " part2 + " language";
 * 
 * Ex4) ACCESSING CHARACTERS USING [] and at() METHODS
 * string s1;
 * string s2 {"Frank"};
 * 
 * cout << s2[0] << endl; //F
 * cout << s2.at(0) << endl; //F
 * 
 * s2[0] = 'f'; //frank
 * s2.at(0) = 'p'; //prank
 * 
 * Ex5) USING FOR LOOP TO PRINT INDIVIDUAL CHARACTERS
 * string s1 {"Frank"};
 * 
 * for(char c : s1) 
 *  cout << c << endl;
 * 
 * Ex6) SUBSTRINGS
 * Extracts a substring from a std::string
 *      object.substr(start_index, length)
 * string s1 {"This is a test"};
 * 
 * cout << s1.substr(0,4); //This
 * cout << s1.substr(5,2); //is
 * cout << s1.substr(10,4); //test
 * 
 * Ex7) FIND SUBSTRING
 * Returns the index of a substring in a std::string
 *      object.find(search_string)
 * string s1 {"This is a test"};
 * 
 * cout << s1.find("This"); //0
 * cout << s1.find("is"); //2
 * cout << s1.find("test"); //10
 * cout << s1.find('e'); //11
 * cout << s1.find("is", 4); //5
 * cout << s1.find("XX"); //string::npos
 * 
 * Ex8) ERASE AND CLEAR
 * Removes a substring of characters from a std::string
 *      object.erase(start_index, length)
 * 
 * string s1 {"This is a test"};
 * 
 * cout << s1.erase(0,5); //is a test
 * cout << s1.erase(5,4); //is a
 * cout << s1.clear(); //empty string
 * 
 * Ex9) LENGTH METHOD
 * string s1 {"Frank"};
 * 
 * cout << s1.length() << endl; //5
 * 
 * s1 += " James";
 * cout << s1 << endl; //Frank James
 * 
 * Ex10) INPUT AND OUTPUT STRINGS getline()
 * getline(cin, s1); //Read entire line until \n
 * cout << s1 << endl;
 * 
 * */

#include <iostream>
#include <string> //Important

using namespace std; //or use std::

int main() {
    
    string s0; //This is initialized
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1}; //Apple
    string s6 {s1, 0, 3}; //App
    string s7 (10, 'X'); //XXXXXXXXXX
    
    cout << s0 << endl; //No garbage
    cout << s0.length() << endl; //empty string
    
    //Initialization
    cout << "\nInitialization" << "\n-------------------------" << endl;
    cout << "s1 is initialized to: " << s1 << endl;
    cout << "s2 is initialized to: " << s2 << endl;
    cout << "s3 is initialized to: " << s3 << endl;
    cout << "s4 is initialized to: " << s4 << endl;
    cout << "s5 is initialized to: " << s5 << endl;
    cout << "s6 is initialized to: " << s6 << endl;
    cout << "s7 is initialized to: " << s7 << endl;
    
    //Comparison
    cout << "\nComparison" << "\n---------------------------" << endl;
    cout << boolalpha;
    cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl; //True Apple == Apple
    cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl; // False Apple != Banana
    cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl; //True Apple != Banana
    cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl; //True Apple < Banana
    cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl; //True Banana > Apple
    cout << s4 << " < " << s5 << ": " << (s4 < s5) << endl; //False apple > Apple
    cout << s1 << " == " << "Apple" << ": " << (s1 == "Apple") << endl; //True Apple == Apple
    
    //Assignment
    cout << "\nAssignment" << "\n------------------------------" << endl;
    s1 = "Watermelon";
    cout << "s1 is now: " << s1 << endl; //Watermelon
    
    s2 = s1;
    cout << "s2 is now: " << s2 << endl; //Watermelon
    
    s3 = "Frank";
    cout << "s3 is now: " << s3 << endl; //Frank
    
    s3[0] == 'C'; //Crank
    cout << "s3 change first letter to 'C': " << s3 << endl; //Crank
    s3.at(0) = 'P';
    cout << "s3 change first letter to 'P': " << s3 << endl; //Prank
    
    //Concatenation
    cout << "\nConcatenation" << "\n----------------------------" << endl;
    s3 = "Watermelon";
    s3 = s5 + " and " + s2 + " juice"; //Apple and Banana Juice
    cout << "s3 is now: " << s3 << endl;
    
    //For Loop
    cout << "\nFor Loop" << "\n----------------------------------" << endl;
    s1 = "Apple";
    for(size_t i {0}; i <s1.length(); i++) {
        cout << s1.at(i);
    }
    cout << endl;
    
    //Range-based For Loop
    cout << "\nRange-based For Loop" << "\n-------------------------------" << endl;
    for(char c : s1) {
        cout << c;
    }
    cout << endl;
    
    //Substring
    cout << "\nSubstring" << "\n--------------------------------" << endl;
    s1 = "This is a test";
    
    cout << s1.substr(0,4) << endl; //This
    cout << s1.substr(5,2) << endl; //is
    cout << s1.substr(10,4) << endl; //test
    
    //Erase
    cout << "\nErase" << "\n----------------------------------" << endl;
    s1 = "This is a test";
    s1.erase(0,5); //Erase "This" from s1 results in "is a test"
    cout << "s1 is now: " << s1 << endl; 
    
    //Getline
    cout << "\nGetline" << "\n--------------------------------" << endl;
    
    string full_name {};
    
    cout << "Enter your full name: ";
    getline(cin, full_name);
    
    cout << "Your full name is: " << full_name << endl;
    
    //Find
    cout << "\nFind" << "\n---------------------------------" << endl;
    
    s1 = "The secret word is Boo";
    string word {};
    
    cout << "Enter the word to find: ";
    cin >> word;
    
    size_t position = s1.find(word);
    if(position != string::npos) {
        cout << "Found " << word << " at position: " << position << endl;
    }else{
        cout << "Sorry, " << word << " not found" << endl;
    }
    
    
    cout << endl;
    return 0;
}
