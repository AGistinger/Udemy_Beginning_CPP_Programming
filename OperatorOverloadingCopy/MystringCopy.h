#ifndef _MYSTRINGCOPY_H_
#define _MYSTRINGCOPY_H_

class Mystring
{
private:
    char *str; //pointer to a char[] that holds a C-style string
    
public:
    Mystring(); //No-args constructor
    Mystring(const char *s); //Overloaded constructor
    Mystring(const Mystring &source); //Copy constructor
    ~Mystring(); //Destructor
    
    Mystring &operator=(const Mystring &rhs); //Copy assignment overloaded operator
    
    void display() const;
    
    int get_length() const;
    const char *get_str() const;
};

#endif // _MYSTRINGCOPY_H_