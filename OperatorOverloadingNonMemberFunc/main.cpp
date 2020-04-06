// Operator Overloading Non-Member Functions

#include "OperatorOverloadingNonMemberFunc.h"
#include <iostream>

int main() {
    
    Mystring larry {"Larry"};
    larry.display();  //Larry
    
    larry = -larry;
    larry.display();  //larry
    
    std::cout << std::boolalpha << std::endl; //Makes statements true/false instead of 0/1
    Mystring moe {"Moe"};
    Mystring stooge  = larry;  //Create a copy of larry object
    
    std::cout << (larry == moe) << std::endl; //false
    std::cout << (larry == stooge) << std::endl; //true
    
    Mystring stooges = larry + "Moe";
    stooges = "Larry" + moe;  //Ok with global functions
    stooges.display();  //LarryMoe
    
    Mystring two_stooges = moe + " " + "Larry";
    two_stooges.display();  //Moe Larry
    Mystring three_stooges = moe + " " + larry + " "+ "Curly";
    three_stooges.display();  //Moe Larry Curly
    
    return 0;
}
