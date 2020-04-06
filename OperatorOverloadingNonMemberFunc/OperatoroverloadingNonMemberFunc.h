#ifndef _OPERATOROVERLOADINGNONMEMBERFUNC_H_
#define _OPERATOROVERLOADINGNONMEMBERFUNC_H_

class Mystring
{
    //Overloaded Operators as (Global Functions) - friend
    friend bool operator==(const Mystring &lhs, const Mystring &rhs); //Binary Global Function for (==) Equality Operator
    friend Mystring operator-(const Mystring &obj); //Unary Global Function for (-) Minus Operator
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs); //Binary Global Function for Concatenation (+)
    
private:
    char *str; //pointer to a char[] that holds a C-style string
    
public:
    Mystring(); //No-args constructor
    Mystring(const char *s); //Overloaded constructor
    Mystring(const Mystring &source); //Copy constructor
    Mystring(Mystring &&source); //Move constructor
    ~Mystring(); //Destructor
    
    Mystring &operator=(const Mystring &rhs); //Copy assignment overloaded operator, by reference
    Mystring &operator=(Mystring &&rhs); //Move assignment overlaoded operator, by reference
    
    void display() const;
    
    int get_length() const;
    const char *get_str() const;
};

#endif // _OPERATOROVERLOADINGNONMEMBERFUNC_H_