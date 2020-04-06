#include "OperatorOverloadingNonMemberFunc.h"
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
    std::cout << "Copy Constructor Used" << std::endl;
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

//Move Constructor
Mystring::Mystring(Mystring &&source)
    :str(source.str)
{
    source.str = nullptr;
    std::cout << "Move Constructor Used" << std::endl;
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

//Overloaded Operator - Move assignment operator (=)
Mystring &Mystring::operator=(Mystring &&rhs)
{
    std::cout << "Using Move Assignment" << std::endl;
    
    if(this == &rhs) //checking for self assignment
        return *this;
    delete [] str;  //delete the string from the current object
    str = rhs.str; //steal the pointer
    rhs.str = nullptr; //null out the old pointer
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

//Overloaded Operator as Global Function Equality (==) Binary
bool operator==(const Mystring &lhs, const Mystring &rhs)
{
    return(std::strcmp(lhs.str, rhs.str) == 0);  //Use string compare function to determine if the two parameters are equal
}

//Overloaded Operator as Global Function Lowercase (-) Unary
Mystring operator-(const Mystring &obj)
{
    char *buff = new char[std::strlen(obj.str) + 1]; //create a pointer to enough space on the heap for the string
    std::strcpy(buff, obj.str); //Use string copy function to copy the string to the pointer
    for(size_t i {0}; i < std::strlen(buff); i++)
        buff[i] = std::tolower(buff[i]); //User to lower function to make all characters in the string lowercase
    Mystring temp {buff}; //Create new Mystring temp object from buffer
    delete [] buff; //Delete pointer
    return temp;  //Return new Mystring object
}

//Overloaded Operator as Global Function Concatenation (+) Binary
Mystring operator+(const Mystring &lhs, const Mystring &rhs)
{
    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1]; //Create a pointer to enough space on the heap for concatenated strings
    std::strcpy(buff, lhs.str); //Copy the first string into the buffer pointer
    std::strcat(buff, rhs.str); //Concatenate the second string into the buffer pointer
    Mystring temp {buff};  //Create new temp Mystring object
    delete [] buff;  //Delete pointer
    return temp;  //Return new Mystring object
}