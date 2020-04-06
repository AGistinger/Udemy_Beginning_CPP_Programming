//Function Calls
/*
 * Functions use the 'function call stack'
 * -Analogous to a stack of books
 * -LIFO - Last In First Out
 * -Push and pop
 * 
 * Stack Frame or Activation Record
 * -Functions must return control to function that called it
 * -Each time a function is called we create a new activation record and push it on stack
 * -When a function terminates we pop the activation record and return
 * -Local variables and function parameters are allocated on the stack
 * 
 * Stack size is finite - Stack Overflow
 * 
 * */

#include <iostream>

using namespace std;
    
    void func2(int &x, int y, int z) {
        x += y + z;
    }
    
    int func1(int a, int b) {
        int result {};
        result = a + b;
        func2(result, a, b);
        return result;
    }
    
    int main () {
        int x {10};
        int y {20};
        int z {};
        z = func1(x, y);
        cout << z << endl;
        return 0;
    }
    
/* What typically happens when main calls func1 (or any function calls another)?
 * There are other ways to acheive the same results :)
 * 
 * Main:
 *  push space for return value
 *  push space for the parameters
 *  push the return address
 *  transfer control to func1 (jmp)
 * 
 * Func1:
 *  push teh address of the previous activation record
 *  push any reister values that will need to be restored before returning to the caller
 *  perform the code in func1
 *  restore the register values
 *  restore the previous activation record (move the stack pointer)
 *  transfer control tot he return address (jmp)
 * 
 * Main:
 *  pop the parameters
 *  pop the return value
 */