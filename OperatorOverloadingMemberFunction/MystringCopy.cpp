#include "OperatorOverloadingMemberFunctions.h"
#include <cstring>
#include <iostream>

//No-args Constructor
Mystring::Mystring()
    :str{nullptr}
{
    str = new char[1];
    *str = '\0';
}

//Overloaded Constructor
Mystring::Mystring(const char *s)
    :str{nullptr}
{
    if(s == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
    }
}

//Copy Constructor
Mystring::Mystring(const Mystring &source)
    :str{nullptr}
{
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

//Destructor    
Mystring::~Mystring()
{
    delete [] str;
}

//Overloaded Operator - Copy assignment operator(=)
Mystring &Mystring::operator=(const Mystring &rhs)
{
    std::cout << "Copy assignment" << std::endl;
    if(this == &rhs)
        return *this;
    delete [] this->str;
    str = new char [std::strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);
    return *this;
        
}

//Display Function    
void Mystring::display() const
{
    std::cout << str << " : " << get_length() << std::endl;
}

//Getters    
int Mystring::get_length() const { return strlen(str); }
const char *Mystring::get_str() const { return str; }