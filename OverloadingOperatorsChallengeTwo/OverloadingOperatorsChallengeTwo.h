#ifndef _OVERLOADINGOPERATORSCHALLENGETWO_H_
#define _OVERLOADINGOPERATORSCHALLENGETWO_H_

#include <iostream>

class Mystring 
{
    //Friend Functions
    friend std::ostream &operator<<(std::ostream &out, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator+=(Mystring &lhs, const Mystring &rhs);
    friend Mystring operator*(const Mystring &lhs, const int &rhs);
    friend Mystring operator*=(Mystring &lhs, const int & rhs);
    friend Mystring operator++(Mystring &obj);
    friend Mystring operator++(Mystring &obj, int);
    friend Mystring operator--(Mystring &obj);
    friend Mystring operator--(Mystring &obj, int);
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend bool operator!=(const Mystring &lhs, const Mystring &rhs);
    friend bool operator<(const Mystring &lhs, const Mystring &rhs);
    friend bool operator>(const Mystring &lhs, const Mystring &rhs);
    
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
    
    //Getter Functions
    int get_length() const;
    const char *get_str() const;
};

#endif // _OVERLOADINGOPERATORSCHALLENGETWO_H_