#ifndef _OVERLOADINGOPERATORMEMBERFUNCTIONS_H_
#define _OVERLOADINGOPERATORMEMBERFUNCTIONS_H_

class Mystring
{
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
    
    Mystring operator-() const;  //Unary Operator Minus (no parameters) - make lowercase, by value
    Mystring operator+(const Mystring &rhs) const; //Binary Operator Plus - concatenation, by value
    bool operator==(const Mystring &rhs) const;  //Binary Operator == - compare equality, by value
    
    void display() const;
    
    int get_length() const;
    const char *get_str() const;
};

#endif // _OVERLOADINGOPERATORMEMBERFUNCTIONS_H_