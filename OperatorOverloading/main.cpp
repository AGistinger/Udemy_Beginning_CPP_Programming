// Operator Overloading - What is Operator Overloading?

#include "Mystring.h"
#include <iostream>

int main() {
    
    Mystring empty; //no-args constructor
    Mystring larry ("Larry"); //overloaded constructor
    Mystring stooge {larry}; //copy constructor
    
    empty.display();
    larry.display();
    stooge.display();
    
    return 0;
}
