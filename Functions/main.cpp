// Funcions
/*
 * Divide code by modular unites.  Separate code into logical self-contained units, can be reused.
 * ex) getline(); main strcpy() strcat()
 * 
 * It is common to use 3rd party libraries.
 * 
 * Boss/Worker analogy
 * -Write your code to the function specification
 * -Understand what the function does
 * -Understand what information the function needs
 * -Understand what the function returns
 * -Understand any errors the function may produce
 * -Understand any performance contraints
 * 
 * <cmath>
 * common mathematical calculations/Global functions:
 * Ex)
 *  function_name(argument);
 *      function_name(argument1, argument2, ...);
 *  cout << sqrt(400.0) << endl; // 20.0
 *  double result;
 *  result = row(2.0, 3.0); // 2.0^3.0
 * 
 * Ex)
 *  This is a function that expects two integers a and b
 *  It calculates the sum of a and b and returns it to the caller
 *  Note taht we specifiy that the function returns an int.
 * 
 * int add_numbers(int a, int b)
 * {
 *      return a + b;
 * }
 * //I can call the functiona nd use the value that it returns
 * cout << add_numbers(20, 40);
 * 
 * */

#include <iostream>
#include <cmath> //required for math
#include <cstdlib> //requried for rand()
#include <ctime> //required for time()

using namespace std;

int main() {
    
    //Math
    double num {};
    
    cout << "Enter a number (double):";
    cin >> num;
    
    cout << "The sqaure root of " << num << " is: " << sqrt(num) << endl;
    cout << "The cubed root of " << num << " is: " << cbrt(num) << endl;
    
    cout << "The sine of " << num << " is: " << sin(num) << endl;
    cout << "The cosine of " << num << " is: " << cos(num) << endl;
    
    cout << "The ceiling of " << num << " is: " << ceil(num) << endl;
    cout << "The floor of " << num << " is: " << floor(num) << endl;
    cout << "The round of " << num << " is: " << round(num) << endl;
    
    double power {};
    cout << "\nEnter a power to raise " << num << " to: ";
    cin >> power;
    cout << num << " raised to the " << power << " power is: " << pow(num, power) << endl;
    
    //Random Numbers
    int random_number {};
    size_t count {10}; //number of random numbers to generate
    int min {1}; //lower bound (inclusive)
    int max {6}; //upper bound (inclusive)
    
    //seed the number generator
    //If you don't seed the number generator you will get teh same sequence of random numbers every run
    
    cout << "\nRAND_MAX on my sister is: " << RAND_MAX << endl;
    srand(time(nullptr));
    
    for(size_t i {1}; i <= count; ++i) {
        random_number = rand() % max + min; //Generate a random number [min, max]
        cout << random_number << endl;
    }
    
    cout << endl;
    return 0;
}
