//Inheritance - Using and Redefining Base Class Methods

#include "InheritanceRedefineMethodsAccount.h"
#include "InheritanceRedefineMethodsSavings.h"
#include <iostream>

using namespace std;

int main() {
    
    cout << "\n=====Account class======================" << endl;
    Account a1 {1000.0};
    cout << a1 << endl; //Account balance 1000
    a1.deposit(500.0);
    cout << a1 << endl; //Account balance 1500
    a1.withdraw(1000.0);
    cout << a1 << endl; //Account balance 500
    a1.withdraw(5000.0); //Insufficient funds
    cout << a1 << endl;  //Account balance 500
    
    cout << "\n====Savings Account class==============" << endl;
    Savings_Account s1 {1000, 5.0};
    cout << s1 << endl; //Savings Account balance: 1000, Interest rate: 5
    s1.deposit(1000.0);
    cout << s1 << endl; //Savings account balance: 2050, Interest rate: 5
    s1.withdraw(2000.0);
    cout << s1 << endl; //Savings account balance: 50, Interest rate: 5
    s1.withdraw(1000.0); //Insufficient funds
    cout << s1 << endl; //Savings account balance: 50, Interest rate: 5
    
    return 0;
}
