#ifndef _PRINT_H_
#define _PRINT_H_
#include <iostream>

//Print - Abstract Interface
class I_Printable
{
    friend std::ostream &operator<<(std::ostream &out, const I_Printable &obj);

public:
    virtual void print(std::ostream &out) const = 0;
    virtual ~I_Printable() = default;
};
#endif // _PRINT_H_
