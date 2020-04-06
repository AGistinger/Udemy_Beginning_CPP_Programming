#include "PolyPrint.h"

//Overloaded Operator << to print
std::ostream &operator<<(std::ostream &out, const I_Printable &obj)
{
    obj.print(out);
    return out;
}