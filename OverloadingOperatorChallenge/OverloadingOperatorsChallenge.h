#ifndef _OVERLOADINGOPERATORSCHALLENGE_H_
#define _OVERLOADINGOPERATORSCHALLENGE_H_

#include <iostream>

class Mystring 
{
    //Friend Functions
    friend std::ostream &operator<<(std::ostream &out, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);
    
private:
    //Attributes
    char *str;

public:
    //Constructors
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    Mystring(Mystring &&source);
    ~Mystring();
    
    //Overloaded Operators
    Mystring &operator=(const Mystring &rhs);
    Mystring &operator=(Mystring &&rhs);
    Mystring operator-() const;
    Mystring operator+(const Mystring &rhs) const;
    Mystring &operator+=(const Mystring &rhs);
    Mystring operator*(const int &rhs) const;
    Mystring &operator*=(const int & rhs);
    Mystring &operator++();
    Mystring operator++(int);
    Mystring &operator--();
    Mystring operator--(int);
    bool operator==(const Mystring &rhs) const;
    bool operator!=(const Mystring &rhs) const;
    bool operator<(const Mystring &rhs) const;
    bool operator>(const Mystring &rhs) const;
    
    //Getter Functions
    int get_length() const;
    const char *get_str() const;
};

#endif // _OVERLOADINGOPERATORSCHALLENGE_H_