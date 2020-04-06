// Conditional Operator
/*
 *(cond_expr) ? expr1 : expr2
 * cond_expr evaluates to a boolean value  
 * if cond_expr is true then the value of expr1 is returned
 * if cond_expr is false then the value of expr2 is returned
 * 
 * similar to if-else construct
 * ternary operator - 3 operands
 * 
 * Ex1)
 * int a{10}, b{20};
 * int score {92};
 * int result {}
 * 
 * result = (a > b) ? a : b;
 * result = (a < b) ? (b-a) : (a-b);
 * result = (b != 0) ? (a/b) : 0;
 * 
 * cout << ((score > 90) ? "Excellent" : "Good");
 * 
 * */

#include <iostream>

using namespace std;

int main() {
    
    //if else example
    int num {};
    
    cout << "Enter an integer: ";
    cin >> num;
    
    if (num % 2 == 0) {
        cout << num << " is even" << endl;
    }else{
        cout << num << " is odd" << endl;
    }
    
    //Conditional operator (num % 2 == 0) ? "even" : "odd";
    cout << num << " is " << ((num % 2 == 0) ? "even" : "odd") << endl;
    
    int num1{}, num2{};
    
    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;
    
    if(num1 != num2) {
        cout << "Largest: " << ((num1 > num2) ? num1 : num2) << endl;
        cout << "Smallest: " << ((num1 < num2) ? num1 : num2) << endl;
    }else{
        cout << "The numbers are the same" << endl;
    }
    
    cout << endl;
    return 0;
}
