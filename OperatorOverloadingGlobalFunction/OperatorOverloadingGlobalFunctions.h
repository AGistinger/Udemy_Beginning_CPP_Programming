#ifndef _OPERATOROVERLOADINGMEMBERFUNCTIONS_H_
#define _OPERATOROVERLOADINGMEMBERFUNCTIONS_H_

class Mystring
{
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    
private:
    char *str; //pointer to a char[] that holds a C-style string
    
public:
    Mystring(); //No-args constructor
    Mystring(const char *s); //Overloaded constructor
    Mystring(const Mystring &source); //Copy constructor
    Mystring(Mystring &&source); //Move constructor
    ~Mystring(); //Destructor
    
    Mystring &operator=(const Mystring &rhs); //Copy assignment overloaded operator
    Mystring &operator=(Mystring &&rhs); //Move assignemnt overloaded operator
    
//    Mystring operator-() const;  //Make Lowercase (Unary operator) no parameters
//    Mystring operator+(const Mystring &rhs) const;  //Concatenate (Binary operator) one parameter
//    bool operator==(const Mystring &rhs) const; //Compare (Binary operator) one parameter
    
    
    void display() const;
    
    int get_length() const;
    const char *get_str() const;
};

#endif // _OPERATOROVERLOADINGMEMBERFUNCTIONS_H_