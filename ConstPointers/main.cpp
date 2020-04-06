// Pointers and References - Const and Pointers

/*
 * Passing pointers to a function
 * -There are several ways to qualify pointers using const
 *  -Pointers to constants
 *  -Constant pointers
 *  -Constant pointers to constants
 * 
 * Pointers to Constants
 * -The data pointed to by the pointers is constant and CANNOT be changed.
 * -The pointer itself can change and point somewhere else.
 *  
 *  int high_score {100};
 *  int low_score {65};
 *  const int *score_ptr {&high_scrore};
 * 
 *  *score_ptr = 86 // ERROR - Cannot change data
 *  score_ptr = &low_score; // OK - Can change address
 * 
 * Constant Pointers
 * -The data pointed to by the pointers can be changed
 * -The pointer itself CANNOT change and point somewhere else
 * 
 *  int high_score {100};
 *  int low_score {65};
 *  int *const score_ptr {&high_score};
 * 
 *  *score_ptr = 86; // OK - Can change data
 *  score_ptr = &low_score; // ERROR - Cannot change address
 * 
 * Constant Pointers to Constants
 * -The data pointed to by the pointer is constant and CANNOT be changed
 * -The pointer itself CANNOT change and point somewhere else
 * 
 *  int high_score {100};
 *  int low_score {65};
 *  const int *const score_ptr {&high_score};
 *  
 *  *score_ptr = 86; // ERROR - Cannot change data
 *  score_ptr = &low_score // ERROR - Cannot change address
 * 
 * */

#include <iostream>

using namespace std;

int main() {
    
    
    cout << endl;
    return 0;
}
