#include "OperatorOverloadingStreamOperators.h"
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

//Overloaded Equality Operator - compare (==) Binary
bool Mystring::operator==(const Mystring &rhs) const
{
  return(std::strcmp(str, rhs.str) == 0);  //returns true or false based on the strcmp function
}

//Overloaded Minus Operator - make lowercase (-) Unary
Mystring Mystring::operator-() const
{
    char *buffer = new char[std::strlen(str) + 1]; //delegate a pointer to memory on the heap for the string
    std::strcpy(buffer, str);  //copy the rhs string into the buffer
    for(size_t i {0}; i < std::strlen(buffer); i++)
    {
        buffer[i] = std::tolower(buffer[i]);  //make the characters lowercase
    }
    Mystring temp {buffer};  //create new Mystring object from the buffer
    delete [] buffer;  //delete the buffer
    return temp;  //return the new Mystring temp object
}

//Overloaded Plus Operator - concatenate (+) Binary
Mystring Mystring::operator+(const Mystring &rhs) const
{
    char *buffer = new char [std::strlen(str) + std::strlen(rhs.str) + 1];
    std::strcpy(buffer, str);
    std::strcat(buffer, rhs.str);
    Mystring temp {buffer};
    delete [] buffer;
    return temp;
}

//Display Function    
void Mystring::display() const
{
    std::cout << str << " : " << get_length() << std::endl;
}

//Getters    
int Mystring::get_length() const { return strlen(str); }
const char *Mystring::get_str() const { return str; }

//Overloaded Insertion Operator (<<)
std::ostream &operator<<(std::ostream &out, const Mystring &rhs)
{
    out << rhs.str;  //allows the insertion operator to work with the objects paramters
    return out;
}

//Overloaded Extraction Operator (>>)
std::istream &operator>>(std::istream &in, Mystring &rhs)
{
    char *buff = new char [1000];  //creates a buffer on the heap for data to be entered to
    in >> buff;  //takes whatever is in the input stream and stores it in buffer
    rhs = Mystring{buff};  //takes the data that is entered and then enters it into the rhs object
    delete [] buff;
    return in;
}