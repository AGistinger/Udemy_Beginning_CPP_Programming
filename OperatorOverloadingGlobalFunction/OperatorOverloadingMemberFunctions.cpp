#include "OperatorOverloadingGlobalFunctions.h"
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

//Move Constructor
Mystring::Mystring(Mystring &&source)
    :str(source.str) //Takes the source objects pointer and moves it to the str object
{
    source.str = nullptr; //nulls the source objects pointer after moving it to the str object
    std::cout << "Move constructor used" << std::endl;
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

//Overloaded Equality Operator
/*bool Mystring::operator==(const Mystring &rhs) const
{
    return (std::strcmp(str, rhs.str) == 0);
}*/

//Overloaded Minus Operator (Make Lowercase)
//Mystring Mystring::operator-() const
//{
//    char *buff = new char[std::strlen(str) + 1]; //Allocating memory for a new array to make the new object lowercase
//    std::strcpy(buff, str); //Copies the string in str to new buff array
//    for(size_t i = 0; i < std::strlen(buff); i++) //Makes each of the char in the buff array lowercase
//        buff[i] = std::tolower(buff[i]);
//    Mystring temp {buff}; //Creates a new Mystring object from buff called temp
//    
//    delete [] buff;
//    return temp;
//}

//Display Function    
void Mystring::display() const
{
    std::cout << str << " : " << get_length() << std::endl;
}

//Overloaded Addition Operator (Concatenation)
//Mystring Mystring::operator+(const Mystring &rhs) const
//{
//    char *buff= new char [std::strlen(str) + std::strlen(rhs.str) + 1]; Allocate memory for the this string and the r-value string
//    std::strcpy(buff, str); Copies str string into buff
//    std::strcat(buff, rhs.str); Concatenates the buff string with the r-value string
//    Mystring temp {buff};
//    
//    delete [] buff;
//    return temp;
//}

//Getters    
int Mystring::get_length() const { return strlen(str); }
const char *Mystring::get_str() const { return str; }

//Overloaded Operators in Global Functions
//Equality (Binary)
bool operator==(const Mystring &lhs, const Mystring &rhs)
{
    return (std::strcmp(lhs.str, rhs.str) == 0);
}

//To Lower (Unary)
Mystring operator-(const Mystring &obj)
{
    char *buff = new char [std::strlen(obj.str) + 1];
    std::strcpy(buff, obj.str);
    for(size_t i = 0; i < std::strlen(buff); i++)
        buff[i] = std::tolower(buff[i]);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

//Concatenation (Binary)
Mystring operator+(const Mystring &lhs, const Mystring &rhs)
{
    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}
