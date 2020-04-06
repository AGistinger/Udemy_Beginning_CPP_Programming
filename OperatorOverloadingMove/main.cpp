// Operator Overloading - Move

#include <iostream>
#include "OperatorOverloadingMove.h"

using namespace std;

int main() {
    
    Mystring a {"Hello"}; //Overloaded constructor
    a = Mystring {"Hola"}; //Overloaded constructor then move assignment
    a = "Bonjour";  //Overloaded constructor then move assignment
    
    Mystring empty; //no-args constructor
    Mystring larry ("Larry");   //overloaded constructor
    Mystring stooge {larry};    //copy constructor
    Mystring stooges;   //no-args constructor
    
    empty = stooge; //copy assignment operator, stooge is an l-value
    
    empty = "Funny";    //move assignment operator, "Funny" is an r-value
    
    empty.display();
    larry.display();
    stooge.display();
    empty.display();
    
    return 0;
}
