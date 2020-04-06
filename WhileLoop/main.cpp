// While Loop
/*
 * Pre-test loop, test is done at the beginning of the loop.
 * 
 * while(expression) {
 *  statement;
 * }
 * 
 * The expression in the while loop needs to evaluate to true to execute.
 * 
 * Ex1)
 * int i {1};
 * while(i <= 5) {
 *  cout << i << endl;
 *  ++1; 
 * }
 * 
 * It is important to increment the variable in the body of the loop or,
 * the loop will never terminate and will cause an infinite loop.
 * 
 * Ex2)
 * int i {1};
 * while(i <= 10) {
 *  if(i % 2 == 0) {
 *      cout << i << endl;
 *  }
 *  ++i;
 * }
 * 
 * Ex3) While loop with an array
 * int scores[] {100, 90, 87};
 * int i {0};
 * 
 * while(i < 3) {
 *  cout << scores[i] << endl;
 *  ++i;
 * }
 * 
 * Ex4)
 * int number {};
 * cout << "Enter an integer less than 100: ";
 * cin >> number;
 * 
 * while (number >= 100) {
 *  cout << "Enter an integer less than 100";
 *  cin >> number;
 * }
 * 
 * cout << thanks << endl;
 * 
 * Ex5) Boolean flag - Input validation
 * bool done {false};
 * int number {0};
 * 
 * while(!done) {
 *  cout << "Enter an integer between 1 and 5: ";
 *  cin >> number;
 *  if(number <= 1 || number >= 5) {
 *      cout << "Out of range, try again" << endl;
 *  }else{
 *      cout << "Thanks!" << endl;
 *      done = true;
 *  }
 * }
 * 
 * */

#include <iostream>

using namespace std;

int main() {
    
    //While loop that counts down from an entered integer
    int num {};
    cout << "Enter a positive integer - start the countdown: ";
    cin >> num;
    
    while(num > 0) {
        cout << num << endl;
        --num;
    }
    cout << "Blastoff!" << endl;
    
    //While loop that counts up to an entered integer
    int number {};
    cout << "Enter a positive integer to count up to: ";
    cin >> number;
    
    int i {1};
    while(number >= i) {
        cout << i << endl;
        i++;
    }
    
    //Input validation
    int user_number {};
    
    cout << "Enter an integer less than 100: ";
    cin >> user_number;
    
    while(user_number >= 100) {
        cout << "Enter an integer less than 100: ";
        cin >> user_number;
    }
    cout << "Thanks" << endl;
    
    //Boolean Flag Input Validation
    bool done {false};
    int number_entered {0};
    
    while(!done) {
        cout << "Enter an integer between 1 and 5: ";
        cin >> number_entered;
        if(number_entered <= 1 || number_entered >= 5) {
            cout << "Out of range, try again" << endl;
        }else{
            cout << "Thanks!" << endl;
            done = true;
        }
    }
    
    cout << endl;
    return 0;
}
