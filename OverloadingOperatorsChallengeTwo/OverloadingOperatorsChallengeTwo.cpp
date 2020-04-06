#include "OverloadingOperatorsChallengeTwo.h"
#include <iostream>
#include <cstring>

//No-Args Constructor
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
    :str(source.str)
{
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

//Move Constructor
Mystring::Mystring(Mystring &&source)
    :str(source.str)
{
    source.str = nullptr;
}

//Destructor
Mystring::~Mystring()
{
    delete [] str;
}

//Overloaded Copy Assignment Operator (=)
Mystring &Mystring::operator=(const Mystring &rhs)
{
    if(this == &rhs)
        return *this;
    delete [] this->str;
    str = new char [std::strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);
    return *this;
}

//Overloaded Move Assignment Operator (=)
Mystring &Mystring::operator=(Mystring &&rhs)
{
    if(this == &rhs)
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

//Overloaded Equality Operator (==)
bool operator==(const Mystring &lhs, const Mystring &rhs)
{
    return (std::strcmp(lhs.str, rhs.str) == 0);
}

//Overloaded Not Equal Operator (!=)
bool operator!=(const Mystring &lhs, const Mystring &rhs)
{
    return (std::strcmp(lhs.str, rhs.str) != 0);
}

//Overloaded Less Than Operator (<)
bool operator<(const Mystring &lhs, const Mystring &rhs)
{
    if(lhs.str < rhs.str)
        return true;
    else
        return false;
}

//Overloaded Greater Than Operator (>)
bool operator>(const Mystring &lhs, const Mystring &rhs)
{
    if(lhs.str > rhs.str)
        return true;
    else
        return false;
}

//Overloaded Minus Operator (-) - Global Function
Mystring operator-(const Mystring &obj)
{
    char *buffer = new char[std::strlen(obj.str) + 1];
    std::strcpy(buffer, obj.str);
    for(size_t i {0}; i < std::strlen(buffer); i++)
    {
        buffer[i] = std::tolower(buffer[i]);
    }
    Mystring temp {buffer};
    delete [] buffer;
    return temp;
}

//Overloaded Plus Operator (+) - Global Function
Mystring operator+(const Mystring &lhs, const Mystring &rhs)
{
    char *buffer = new char [std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buffer, lhs.str);
    std::strcat(buffer, rhs.str);
    Mystring temp {buffer};
    delete [] buffer;
    return temp;
}

//Overloaded Plus Equals Operator (+=) - Global Function
Mystring operator+=(Mystring &lhs, const Mystring &rhs)
{
    lhs = lhs + rhs;
    return lhs;
}

//Overloaded Multiplication Operator (*) - Global Function
Mystring operator*(const Mystring &lhs, const int &rhs)
{
    char *buffer = new char [std::strlen(lhs.str) * rhs + 1];
    std::strcpy(buffer, lhs.str);
    for(int i {1}; i < rhs; i++)
    {
        std::strcat(buffer, lhs.str);
    }
    Mystring temp {buffer};
    delete [] buffer;
    return temp;
}

//Overloaded Multiplication Equals Operator (*=) - Global Function
Mystring operator*=(Mystring &lhs, const int & rhs)
{
    lhs = lhs * rhs;
    return lhs;
}

//Overloaded Pre-Increment Operator (++) - Global Function
Mystring operator++(Mystring &obj)
{
    char *buffer = new char [std::strlen(obj.str) + 1];
    std::strcpy(buffer, obj.str);
    for(size_t i {0}; i < std::strlen(buffer); i++)
    {
        buffer[i] = std::toupper(buffer[i]);
    }
    obj = buffer;
    return obj;
}

//Overloaded Post-Increment Operator (++) - Global Function
Mystring operator++(Mystring &obj, int)
{
    Mystring temp {obj.str};
    ++obj;
    return temp;
}

//Overloaded Pre-Decrement Operator (--) - Global Function
Mystring operator--(Mystring &obj)
{
    size_t str_size{std::strlen(obj.str)};
    if(str_size < 1)
    {
        return obj;
    }
    else
    {
        obj.str[str_size - 1] = '\0';
        return obj;
    }
}

//Overloaded Post-Decrement Operator (--) - Global Function
Mystring operator--(Mystring &obj, int)
{
    Mystring temp {obj.str};
    --obj;
    return temp;
}

//Overloaded Insertion Operator (<<)
std::ostream &operator<<(std::ostream &out, const Mystring &rhs)
{
    out << rhs.str; 
    return out;
}

//Overloaded Extraction Operator (>>)
std::istream &operator>>(std::istream &in, Mystring &rhs)
{
    char *buffer = new char [1000];
    in >> buffer;
    rhs = Mystring {buffer};
    delete [] buffer;
    return in;
}

//Getter Functions
int Mystring::get_length() const { return std::strlen(str); }
const char *Mystring::get_str() const { return str; }