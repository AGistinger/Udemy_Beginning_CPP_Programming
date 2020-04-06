// Scope Rules
/*
 * -C++ uses scope rules to determine where an identifier can be used.
 * -C++ uses static or lexical scoping.
 * -Local or Block scope.
 * -Global scope.
 * 
 * Local or Block scope
 * -Identifiers declared in a block {}
 * -Function parameters have block scope
 * -Only visible within the block {} where declared
 * -Function local variables are only active while the function is executing
 * -Local variables are NOT preserved between function calls
 * -With nested blocks inner blocks can 'see' but out clocks cannot 'see' in
 * 
 * Static Local Variables
 * -Declared with a static qualifier
 *      static int value {10};
 * -Value IS preserved between function calls
 * -Only initialized the first time the function is called
 * -This is active throughout the life of the program, but it's only visible to the statements in the function body
 * 
 * Global Scope
 * -Identifier declared outside of any function or class
 * -Visible to all parts of th eprogram after the global identifier has been declared
 * -Global constants are OK
 * -Best Practice - Don't use global variables
 * 
 * */

#include <iostream>

using namespace std;

//Declare Prototypes
void local_example();
void global_example();
void static_local_example();

int num{300}; //Global variable - Declared outside any class or function

void global_example() {
    cout << "\nGlobal num is: " << num << " in global_example - start" << endl;
    num *= 2;
    cout << "Global num is: " << num << " in global_example - end" << endl;
}

void local_example(int x) {
    int num {1000}; //Local to local_example
    cout << "\nLocal num is: " << num << " in local_example - start" << endl;
    num = x;
    cout << "Local num is " << num << " in local_example - end" << endl;
    //num1 in main is not within scope - so it can't be used here.
}

void static_local_example() {
    static int num {5000}; //Local to static_local_example, static - retains its value between calls
    cout << "\nLocal static num is: "  << num << " in static_local_example - start" << endl;
    num += 1000;
    cout << "Local static num is: " << num << " in static_local example - end" << endl;
}

int main() {
    
    int num {100}; //Local to main
    int num1 {500}; //Local to main
    
    cout << "Local num is: " << num << " in main" << endl;
    
    { //Creates a new level of scope
       int num {200}; //Local to this inner block
       cout << "Local num is: " << num << " in inner block in main" << endl;
       cout << "Inner block in main can see out - num1 is: " << num1 << endl; 
    }
    
    cout << "Local num is: " << num << " in main" << endl;
    
    local_example(10);
    local_example(20);
    
    global_example();
    global_example();
    
    static_local_example();
    static_local_example();
    static_local_example();
    
    cout << endl;
    return 0;
}
