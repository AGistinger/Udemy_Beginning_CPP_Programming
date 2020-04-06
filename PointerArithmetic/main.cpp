// Pointer Arithmetic
/*
 * -Pointers can be used in
 *  -Assignemnt expressions
 *  -Arithmetic expressions
 *  -Comparison expressions
 * -C++ allows pointer arithmetic
 * -Pointer arithmetic only makes sense with raw arrays
 * 
 * ++ and --
 * -(++) increments a pointer to point to the next array element
 *  int_ptr++;
 * -(--) decrements a pointer to point at the previous array element
 *  int_ptr--;
 * 
 * + and -
 * -(+) increment pinter by n * sizeof(type)
 *  int_ptr += n;
 *  int_ptr = int_ptr + n;
 * -(-) decrement pointer by n * sizeof(type)
 *  int_ptr -= n;
 *  int_ptr = int_ptr - n;
 * 
 * Subtracting two pointers
 * -Determine the number of elements between the pointers
 * -Both pointers must be to the same data type
 *  int n = int_ptr2 - int_ptr1;
 * 
 * Comparing two pointers == and !=
 * -Determine if two pinters point to the same location
 *  -Does NOT compare the data where they point!
 *  string s1 {"Frank"};
 *  string s2 {"Frank"};
 * 
 *  string *p1 {&s1};
 *  string *p2 {&s2};
 *  string *p3 {&s1};
 * 
 *  cout << (p1 == p2) << endl; //false
 *  cout << (p1 == p3) << endl; //true
 * 
 * Dereferencing pointers then comparing
 *  cout << (*p1 == *p2) << endl; //true
 *  cout << (*p1 == *p3) << endl; //true
 * 
 * */

#include <iostream>

using namespace std;

int main() {
    
    int scores[] {100, 95, 89, 68, -1};
    int *score_ptr {scores};
    
    while(*score_ptr != -1)
    {
        cout << *score_ptr << endl;
        score_ptr++;
    }
    
    cout << "\n------------------------------" << endl;
    score_ptr = scores;
    while(*score_ptr != -1)
    {
        cout << *score_ptr++ << endl;
    }
    
    cout << "\n-----------------------------" << endl;
    string s1 {"Frank"};
    string s2 {"Frank"};
    string s3 {"James"};
    
    string *p1 {&s1};
    string *p2 {&s2};
    string *p3 {&s1};
    
    cout << boolalpha; //boolalpha modifier prints true and false
    cout << p1 << " == " << p2 << ": " << (p1 == p2) << endl; //false
    cout << p1 << " == " << p3 << ": " << (p1 == p3) << endl; //true
    
    cout << *p1 << " == " << *p2 << ": " << (*p1 == *p2) << endl; //true
    cout << *p1 << " == " << *p3 << ": " << (*p1 == *p3) << endl; //true
    
    p3 = &s3; //point to James
    cout << *p1 << " == " << *p3 << ": " << (*p1 == *p3) << endl; //false
    
    cout << "\n-------------------------------" << endl;
    char name[] {"Frank"};
    
    char *char_ptr1 {nullptr};
    char *char_ptr2 {nullptr};
    
    char_ptr1 = &name[0]; //F
    char_ptr2 = &name[3]; //n
    
    cout << "In the string " << name << ", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << endl;
    
    cout << endl;
    return 0;
}
