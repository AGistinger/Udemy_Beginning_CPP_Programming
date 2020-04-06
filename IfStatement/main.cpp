// if Statement
/*
 * if (expr) {
 *      statement;
 * }
 * 
 * If the expression is true then the statement is executed
 * If the expression is false then skip the statement
 * 
 * if(num > 10) {
 *  ++num;
 * }
 * 
 * If num is greater than 10 then num will be incremented if not it will not.
 * 
 * if(selection == 'A')
 *      cout << "You selected A";
 * 
 * if(num > 10)
 *      cout << "num is greater than 10";
 * 
 * if(health <100 && player_healed)
 *      health = 100;
 * 
 * if(num > 10) {
 *      ++num
 *      cout << "this too";
 * }
 * 
 * A block statement has sequences of statements.  You can declare variables inside in a block.  
 * The variables inside the block can only be used inside that block, this allows you to modularize
 * your code - local scope.
 * 
 * */

#include <iostream>

using namespace std;

int main() {
    
    int num {};
    const int min {10};
    const int max {100};
    
    cout << "Enter a number between " << min << " and " << max << " : ";
    cin >> num;
    
    //Checking if the number entered is greater than the min
    if(num >= min) {
        cout << "\n===================== if statement 1 ==================" << endl;
        cout << num << " is greater than or equal to " << min << endl;
        
        int diff {num - min};
        cout << num << " is " << diff << " greater than " << min << endl;
    }
    
    //Checking if the number entered is less than the max
    if(num <= max) {
        cout << "\n===================== if statement 2 ==================" << endl;
        cout << num << " is less or equal to " << max << endl;
        
        int diff {max - num};
        cout << num << " is " << diff << " less than " << max << endl;
    }
    
    //Checking to see if the number entered is within the bounds
    if(num >= min && num <= max) {
        cout << "\n===================== if statement 3 ==================" << endl;
        cout << num << " is in range" << endl;
        cout << "This means statements 1 and 2 must also display!" << endl;
    }
    
    //Checking to see if the number is on the bounds
    if(num == min || num == max) {
        cout << "\n===================== if statement 4 ==================" << endl;
        cout << num << " is on the boundary" << endl;
        cout << "This means all 4 statements must display" << endl;
    }
    
    cout << endl;
    return 0;
}
