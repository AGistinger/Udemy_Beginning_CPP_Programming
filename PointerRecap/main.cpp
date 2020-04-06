// Pointers Recap 

/*
 * When to use pointers vs. references parameters
 * -Pass-by-value
 *  -When the function does NOT modify the actual parameter, and
 *  the parameter is small and efficient to copy like simple types (int, char,
 *  double, etc).
 * 
 * -Pass-by-reference using a pointer
 *  -When the function does modify the actual parameter,
 *  and the parameter is expensive to copy, and
 *  its okay to the pointer to contain a nullptr value.
 * 
 * -Pass-by-reference using a pointer to const
 *  -When the function does NOT modify the actual parameter,
 *  and the parameter is expensive to copy, and
 *  Its okay for the pointer to contain a nullptr value.
 * 
 * -Pass-by-reference using a const poitner to const
 *  -When the function does NOT modify the actual parameter,
 *  and the parameter is expensive to copy, and
 *  Its okay for the pointer to contain a nullptr value, and
 *  You don't want to modify the pointer itself.
 * 
 * -Pass-by-reference using a reference
 *  -When the function DOES modify the actual parameter,
 *  and the parameter is expensive to copy, and
 *  The parameter cannot be nullptr.
 * 
 * -Pass-by-reference using a const reference
 *  -When the fucntion does NOT modify the actual parameter,
 *  and the paramete ris expensive to copy, and
 *  the parameter cannot be nullptr.
 * 
 * */

#include <iostream>

using namespace std;

int main() {
    
    cout << "Hello World" << endl;
    
    return 0;
}
