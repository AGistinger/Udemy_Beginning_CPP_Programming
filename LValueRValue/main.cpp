// L-Value - R-Value

/*
 * L-Values
 * -Values that have names and are addressable
 * -Modifiable if they are not constants
 * 
 * int x {100} //x is an l-value
 * x = 1000;
 * x = 1000 + 20;
 * 
 * string name; //name is an l-value
 * name = "Frank";
 * 
 * -Not l-value-
 * 100 = x; //100 is NOT an l-value
 * (1000 + 20) = x; //(1000 + 20) is NOT an l-value
 * 
 * string name;
 * "Frank" = name; // "Frank is NOT an l-value
 * 
 * R-Values
 * (non-addressable and non-assignable)
 * -A value that is not an l-value
 *  -On the right-hand side of an assignemnt expression
 *  -a literal
 *  -a Temporary which is intended to be non-modifiable
 * 
 * int x {100}; //100 is an r-value
 * int y = x + 200; // (x + 200) is an r-value
 * 
 * string name;
 * name = "Frank"; //"Frank" is an r-value
 * 
 * int max_num = max(20, 30); //max(20, 30) is an r-value
 * 
 * r-values can be assigned to l-values explicitly
 * 
 * int x {100};
 * int y {0};
 * 
 * y = 100; //r-value 100 assigned to l-value y
 * x = x + y; //r-value (x + y) assigned to l-value x
 * 
 * L-Value References
 * -The references we've used are l-value references
 *  -Because we are referecing l-values
 * 
 * int x {100};
 * 
 * int &ref1 = x; //ref1 is a reference to l-value
 * ref1 = 1000;
 * 
 * int &ref2 = 100; //Error 100 is an r-value
 * 
 * The same when we pass-by-reference
 * 
 * int square(int &n) {
 *  return n * n;
 * }
 * 
 * int num {10};
 * 
 * square(num); //OK
 * square(5); // Error - can't reference r-value 5
 * 
 * */

#include <iostream>

using namespace std;

int main() {
    
    cout << "Hello World" << endl;
    
    return 0;
}
