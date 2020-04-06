//If Else Statement
/*
 * if the expression is "true" then execute statement 1
 * if the expression is false then execute statement 2
 * 
 * if (expr)
 *  statement1;
 * else
 *  statement2;
 * 
 * ex)
 * if(num >10)
 *  ++num;
 * else
 *  num = 10;
 * 
 * If-Else-If Construct:
 * Allows for multiple conditions to be checked, the last else statement is the catch all statement.
 * 
 * EX)
 * if (score > 90)
 *  cout << "A";
 * else if (score > 80)
 *  cout << "B";
 * else if (score > 70)
 *  cout << "C";
 * else if (score > 60)
 *  cout << "D";
 * else
 *  cout << "F"
 * cout << "Done";
 * 
 * */

#include <iostream>

using namespace std;

int main() {
    
    int num {};
    const int target {10};
    
    cout << "Enter a number and I'll compare it to " << target << ": ";
    cin >> num;
    
    if(num >= target) {
        cout << "\n==========================================" << endl;
        cout << num << " is greater than or equal to " << target << endl;
        int diff {num - target};
        cout << num << " is " << diff << " greater than " << target << endl;
    } else {
        cout << "\n==========================================" << endl;
        cout << num << " is less than " << target << endl;
        int diff {target - num};
        cout << num << " is " << diff << " less than " << target << endl;
    }
    
    cout << endl;
    return 0;
}
