// Pointers
/*
 * Pointers are a variable.
 *  -whose value is an address.
 * 
 * What can be at that address?
 *  -Another variable
 *  -A function
 * 
 * Pointers point to variables or functions?
 * 
 * If 'X' is an integer variable and its value is 10
 * then I can declare a pointer that points to it.
 * 
 * To use the data that the pointer is pointing to you must know its type.
 * 
 * Inside functions, pointers can be used toa ccess data that are defined outside of the function.
 * Those variables may not be ins cope so you can't access them by their name.
 * 
 * Pointers can be used to operate on arrays very efficiently
 * 
 * We can allocate memory dynamically on the heap or free store.
 *  -This memory doesn't even have a variable name.
 *  -The only way to get to it is via a pointer
 * 
 * With OO.  Pointers are how polymorphism works!
 * 
 * Can access specific addresses in memory
 *  -Useful in embedded and systems applications.
 * 
 * Declaring Pointers
 * variable_type *pointer_name;
 * 
 * Ex)
 *  int *int_ptr;
 *  double *double_ptr;
 *  char *char_ptr;
 *  string *string_ptr;
 * 
 * Initliazing Pointers
 * Ex)
 *  variable_type *pointer_name {nullptr};
 * 
 *  int *int_ptr {nullptr};
 *  double *double_ptr {nullptr};
 *  char *char_ptr {nullptr};
 *  string *string_ptr {nullptr};
 * 
 * Always initialize pointer veraibles.
 * 
 * Initializing to zero or nullptr represents address zero.
 *  -Implies that the pointer is 'pointing nowhere'.
 * 
 * Accessing Pointer Address
 *  the address operator "&"
 * 
 * Variables are stored in a unique address
 * Unary operator
 * Evaluates to the address of its operand
 *  -Operand cannot be a constant or expression that evalutes to temp values
 * 
 * Ex)
 *  int num {10};
 *  cout << "Value of num is: " << num << endl; //10
 *  cout << "sizeof num is: " << sizeof num << endl; //4
 *  cout << "Address of num is: " << &num << endl; //0x61ff1c
 * 
 * Ex) Pointer Variables
 *  int *p;
 *  cout << "Value of p is: " << p << endl; //0x61ff60 - garbage
 *  cout << "Address of p is: " << &p << endl; //0x61ff18
 *  cout << "sizeof p is: " << sizeof p << endl; //4
 *  p = nullptr; //set p to point nowhere
 *  cout << "Value of p is: " << p << endl; //0
 * 
 * sizeof a pointer variable
 * -Don't confuse the size of apointer and the size of what it points to
 * -All pointers in a program have the same size
 * -They may be pointing to a very large or very small types
 * 
 * Typed Pointers
 * -The compile were make sure that the address stored in a pointer variable is of the correct type.
 * 
 * Ex) Types Pointers
 *  int score {10};
 *  double high_temp {100.7};
 * 
 *  int *score_ptr {nullptr};
 *  
 *  score_ptr = &score; //OK
 *  score_ptr = &high_temp; //Compiler Error
 * 
 * */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    
    //Declaring variable
    int num {10};
    cout << "Value of num is: " << num << endl;
    cout << "sizeof num is: " << sizeof num << endl;
    cout << "Address of num is: " << &num << endl;
    
    //Declaring pointer
    int *p;
    cout << "\nValue of p is: " << p << endl; //garbage
    cout << "Address of p is: " << &p << endl;
    cout << "sizeof p is: " << sizeof p << endl;
    
    p = nullptr;
    cout << "\nValue of p is: " << p << endl;
    
    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector<string> *p4 {nullptr};
    string *p5 {nullptr};
    
    cout << "\nsizeof p1 is: " << sizeof p1 << endl;
    cout << "sizeof p2 is: " << sizeof p2 << endl;
    cout << "sizeof p3 is: " << sizeof p3 << endl;
    cout << "sizeof p4 is: " << sizeof p4 << endl;
    cout << "sizeof p5 is: " << sizeof p5 << endl;
    
    int score {10};
    //double high_temp {100.7};
    
    int *score_ptr {nullptr};
    
    score_ptr = &score;
    cout << "\nValue of score is: " << score << endl;
    cout << "Address of score is: " << &score << endl;
    cout << "Value of score_ptr is: " << score_ptr << endl; //stores the address of the variable score
    
    cout << endl;
    return 0;
}
