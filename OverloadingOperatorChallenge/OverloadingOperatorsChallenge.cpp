#include "OverloadingOperatorsChallenge.h"
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
bool Mystring::operator==(const Mystring &rhs) const
{
    return (std::strcmp(str, rhs.str) == 0);
}

//Overloaded Not Equal Operator (!=)
bool Mystring::operator!=(const Mystring &rhs) const
{
    return (std::strcmp(str, rhs.str) != 0);
}

//Overloaded Less Than Operator (<)
bool Mystring::operator<(const Mystring &rhs) const
{
    if(this->str < rhs.str)
        return true;
    else
        return false;
}

//Overloaded Greater Than Operator (>)
bool Mystring::operator>(const Mystring &rhs) const
{
    if(this->str > rhs.str)
        return true;
    else
        return false;
}

//Overloaded Minus Operator (-)
Mystring Mystring::operator-() const
{
    char *buffer = new char[std::strlen(str) + 1];
    std::strcpy(buffer, str);
    for(size_t i {0}; i < std::strlen(buffer); i++)
    {
        buffer[i] = std::tolower(buffer[i]);
    }
    Mystring temp {buffer};
    delete [] buffer;
    return temp;
}

//Overloaded Plus Operator (+)
Mystring Mystring::operator+(const Mystring &rhs) const
{
    char *buffer = new char [std::strlen(str) + std::strlen(rhs.str) + 1];
    std::strcpy(buffer, str);
    std::strcat(buffer, rhs.str);
    Mystring temp {buffer};
    delete [] buffer;
    return temp;
}

//Overloaded Plus Equals Operator (+=)
Mystring &Mystring::operator+=(const Mystring &rhs)
{
    *this = *this + rhs;
    return *this;
}

//Overloaded Multiplication Operator (*)
Mystring Mystring::operator*(const int &rhs) const
{
    char *buffer = new char [std::strlen(this->str) * rhs + 1];
    std::strcpy(buffer, this->str);
    for(int i {1}; i < rhs; i++)
    {
        std::strcat(buffer, this->str);
    }
    Mystring temp {buffer};
    delete [] buffer;
    return temp;
}

//Overloaded Multiplication Equals Operator (*=)
Mystring &Mystring::operator*=(const int & rhs)
{
    *this = *this * rhs;
    return *this;
}

//Overloaded Pre-Increment Operator (++)
Mystring &Mystring::operator++()
{
    char *buffer = new char [std::strlen(this->str) + 1];
    std::strcpy(buffer, this->str);
    delete [] (this->str);
    for(size_t i {0}; i < std::strlen(buffer); i++)
    {
        buffer[i] = std::toupper(buffer[i]);
    }
    this->str = buffer;
    return *this;
}

//Overloaded Post-Increment Operator (++)
Mystring Mystring::operator++(int)
{
    Mystring temp {*this};
    operator++();
    return temp;
}

//Overloaded Pre-Decrement Operator (--)
Mystring &Mystring::operator--()
{
    size_t str_size{std::strlen(this->str)};
    if(str_size < 1)
    {
        return *this;
    }
    else
    {
        this->str[str_size - 1] = '\0';
        char* buffer = new char[str_size - 1];
        strncpy(buffer, this->str, str_size);
        delete [] (this->str);
        this->str = buffer;
        return *this;
    }
}

//Overloaded Post-Decrement Operator (--)
Mystring Mystring::operator--(int)
{
    Mystring temp{*this};
    operator--();
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

