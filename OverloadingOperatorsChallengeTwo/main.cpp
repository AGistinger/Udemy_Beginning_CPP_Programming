//Overloading Operators Challenge Non-Member Functions

#include "OverloadingOperatorsChallengeTwo.h"
#include <iostream>
#include <cstring>

int main() {
    
    std::cout << std::boolalpha << std::endl;
    Mystring a {"frank"};
    Mystring b {"frank"};
    
    std::cout << (a == b) << std::endl; //true
    std::cout << (a != b) << std::endl; //false
    
    b = "george";
    std::cout << (a == b) << std::endl; //false
    std::cout << (a != b) << std::endl; //true
    std::cout << (a < b) << std::endl; //true
    std::cout << (a > b) << std::endl; //false
    
    Mystring s1 {"FRANK"};
    s1 = -s1;
    std::cout << s1 << std::endl; //frank
    
    s1 = s1 + "*****";
    std::cout << s1 << std::endl; //frank*****
    
    s1 += "-----";
    std::cout << s1 << std::endl; //frank*****------
    
    Mystring s2 {"12345"};
    s1 = s2 * 3;
    std::cout << s1 << std::endl; //123451234512345
    
    Mystring s3 {"abcdef"};
    s3 *= 5;
    std::cout << s3 << std::endl; //abcdefabcdefabcdefabcdefabcdef
    
    Mystring s = "Frank";
    Mystring result = ++s;
    std::cout << s << std::endl; //FRANK
    std::cout << result << std::endl; //FRANK
    
    Mystring name = "Adrianne";
    Mystring post = name++;
    std::cout << name << std::endl; //ADRIANNE
    std::cout << post << std::endl; //Adrianne
    
    Mystring w = "Frank";
    Mystring x = --w;
    std::cout << w << std::endl; //Fran
    std::cout << x << std::endl; //Fran
    --x;
    std::cout << x << std::endl; //Fra
    --x;
    std::cout << x << std::endl; //Fr
    --x;
    std::cout << x << std::endl; //F
    --x;
    std::cout << x << std::endl; //'\0'
    --x;
    std::cout << x << std::endl; //'\0'
    
    Mystring y = "Adrianne";
    Mystring z = y--;
    std::cout << y << std::endl; //Adriann
    std::cout << z << std::endl; //Adrianne
    
    return 0;
}
