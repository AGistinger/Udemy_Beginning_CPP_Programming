//Operator Overloading - Copy

#include <iostream>
#include <vector>
#include "MystringCopy.h"


int main() {
    
    Mystring a {"Hello"}; //overloaded constructor
    Mystring b;   //no-args constructor
    b = a;    //copy assignment b.operator = (a)
    
    b = "This is a test"; //b.operator = ("This is a test");
    
    Mystring empty; //no-args constructor
    Mystring larry {"Larry"};   //overloaded constructor
    Mystring stooge {larry};    //copy constructor
    Mystring stooges;   //no-args constructor
    
    empty = stooge; //copy assignment operator
    
    empty.display();    //Larry : 5
    larry.display();    //Larry : 5
    stooge.display();   //Larry : 5
    empty.display();    //Larry : 5
    
    stooges = "Larry, Moe, and Curly";
    stooges.display();  //Larry, Moe, and Curly  21
    
    std::vector<Mystring> stooges_vec;
    stooges_vec.push_back("Larry");
    stooges_vec.push_back("Moe");
    stooges_vec.push_back("Curly");
    
    //Will display Larry Moe Curly on separate lines
    std::cout << "===Loop1===========================" << std::endl;
    for(const Mystring &s : stooges_vec)
    {
        s.display();
    }
    
    //Will change all the items in stooges_vec to chagned
    std::cout << "===Loop2============================" << std::endl;
    for(Mystring &s : stooges_vec)
    {
        s = "Changed";
    }
    
    std::cout << "===Loop3============================" << std::endl;
    for(const Mystring &s : stooges_vec)
    {
        s.display();
    }
    
    return 0;
}
