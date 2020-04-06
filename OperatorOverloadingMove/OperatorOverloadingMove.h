#ifndef _OPERATOROVERLOADINGMOVE_H_
#define _OPERATOROVERLOADINGMOVE_H_

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
    
    Mystring &operator=(const Mystring &rhs); //Copy assignment overloaded operator
    Mystring &operator=(Mystring &&rhs); //Move assignment overlaoded operator
    
    void display() const;
    
    int get_length() const;
    const char *get_str() const;
};

#endif // _OPERATOROVERLOADINGMOVE_H_