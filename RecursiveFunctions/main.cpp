// Recusive Functions
/*
 * A recursive function is a function that calls itself
 *  -Either directly or indirectly through another function
 * 
 * Recursive problem solving
 *  -Base case
 *  -Divide the rest of the problem into subproblem and do recursive call
 * 
 * There are many problems that lend themselves to recursive solutions
 * 
 * Mathematic - factoral, Fibonacci, fractals....
 * 
 * Searching and sorting - binary search, search trees
 * 
 * Definition:
 *  A factorial function (symbol: !) says to multiple all whole numbers from our chosen 
 *  number down to 1.
 *      ex) 4! = 4 x 3 x 2 x 1 = 24
 * 
 * Ex) Factorial
 * 0! = 1;
 * n! = n * (n-1) !;
 * -Base case
 *  factorial(0) = 1
 * -Recursive case:
 *  factorial (n) = n * factorial(n-1)
 * 
 * Ex) Factorial - 2
 * unsigned long long factorial (unsigned long long n) {
 *  if (n===0)
 *      return 1;   //base case
 *  return n * factorial(n-1);  //recursive case
 * }
 * 
 * int main () {
 *  cout << factorial(8) << endl; //40320
 *  return 0;
 * }
 * 
 * Ex) Fibonacci
 * Definition:
 *  A Fibonacci Sequenece is the series of numbers, the next number is found by adding up the two numbers before it.
 *  ex) 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
 *      0 + 1 = 1, 1 + 2 = 2, 2 + 1 = 3, 3 + 2 = 5....
 * Fib(0) = 0;
 * Fib(1) = 1;
 * Fib(n) = Fib(n-1) + Fib(n-2);
 * 
 * Base case:
 *  Fib(0) = 0;
 *  Fib(1) = 1;
 * 
 * Recursive case:
 *  Fib(n) = Fib(n-1) + Fib(n-2);
 * 
 * Ex) Factorial
 * unsigned long long fibonacci(unsigned long long n) {
 *  if(n <= 1) {
 *      return n;
 *  }else{
 *      return fibonacci(n-1) + fibonacci(n-2); //recursion
 *  }
 * }
 * 
 * int main() {
 *  cout << fibonacci(30) << endl; //832040
 *  return 0;
 * }
 * 
 * Immportant notes:
 * -If recursion doesn't eventually stop you will have infinite recursion
 * -Recursion can be resource intensive
 * -Remember the base case(s)
 *  *It terminates the recursion
 * -Only use recursive solutions when it makes sense
 * -Anything that can be done recursively can be done iteratively
 *  *Stack Overflow error
 * */

#include <iostream>

using namespace std;

unsigned long long fibonacci(unsigned long long n);
unsigned long long factorial(unsigned long long);

//Fibonacci number
unsigned long long fibonacci(unsigned long long n) {
    if(n <= 1) {
        return n;
    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

//Factorial number
unsigned long long factorial(unsigned long long n) {
    if(n==0) {
        return 1;
    }else{
        return n * factorial(n-1);
    }
}

int main() {
    
    //Fibonacci
    cout << fibonacci(5) << endl; //5
    cout << fibonacci(30) << endl; //83240
    cout << fibonacci(40) << endl; //102334155
    
    //Factorial
    cout << factorial(3) << endl; //6
    cout << factorial(8) << endl; //40320
    cout << factorial(12) << endl; //479001600
    cout << factorial(20) << endl; //2432902008176640000
    
    return 0;
}
