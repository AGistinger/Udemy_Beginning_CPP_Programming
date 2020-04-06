// Object Oriented Programming - This Pointer

/*
 * 'this' pointer
 * -this is a reserved keyword
 * -contains teh address of the current object - so it's a pointer to the object
 * -can only be used in class scope
 * -all member access is done via the this pointer
 * -Can be used by the programmer
 *  -to access data member and methods
 *  -to determine if two objects are the same (more in the next section)
 *  -can be dereferenced (*this) to yield the current object
 * 
 * Ex) this pointer
 * void Account::Set_balance(double bal) {
 *  balance = bal; //this-> balance is implied
 * }
 * 
 * Ex) To disambiguate identifier use
 * void Account::set_balance(double balance) {
 *  balance = balance; //which balance? The parameter
 * }
 * 
 * void Account::set_balance(double balance) {
 *  this->balance = balance; //unambiguous
 * }
 * 
 * To Determine Object Identity
 * -Sometimes its useful to know if two objects are the same object
 * 
 * int Account::compare_balance(const Account &other) {
 *  if(this == &other)
 *  std::cout << "The same objects" << std::endl;
 * }
 * 
 * frank_account.compare(frank_account);
 * 
 * -We'll use the this pointer again when we overlaod the assignment operator
 * 
 * */

#include <iostream>

using namespace std;

int main() {
    
    cout << "Hello World" << endl;
    
    return 0;
}
