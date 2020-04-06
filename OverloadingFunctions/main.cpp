// Overloading functions
/*
 * We can have functions that have different parameter lists that have the same name.
 * Abstraction mechanism since we can just think 'print' for example.
 * A type of polymorphism.
 *  -We can have the same work with different data types to execute similar behavior.
 * The compiler must be able to tell the functions apart based onthe parameter lists and arguments supplied.
 * 
 * Ex1)
 * int add_numbers(int, int);  //add ints
 * double add_numbers(double, double); //add doubles
 * 
 * 
 * int add_numbers(int a, int b) {
 *  return a + b;
 * }
 * 
 * double add_numbers(double a, double b) {
 *  return a + b;
 * }
 * 
 * int main () {
 *  cout << add_numbers(10, 20) << endl; //integer
 *  cout << add_numbers(10.0, 20.0) << endl; //double
 *  return 0;
 * }
 * 
 * Ex2)
 * void display (int n);
 * void display (double d);
 * void display(std::string s);
 * void display(std::string s, std::string t);
 * void display(std::vector v);
 * 
 * Note: The return type is not considered.
 * int get_value();
 * double get_value();
 * //Error
 * cout << get_value() << endl; //Which one?
 * 
 * */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void print(int num) {
    cout << "Printing int: " << num << endl;
}

void print(double num) {
    cout << "Printing double: " << num << endl;
}

void print(string s) {
    cout << "Printing string: " << s << endl;
}

void print (string s, string t) {
    cout << "Printing two strings: " << s << " and " << t << endl;
}

void print(vector<string> v) {
    cout << "Printing vector of strings: ";
    for(auto s : v) {
        cout << s + " ";
    }
    cout << endl;
}

int main() {
    
    print(100);
    print('A'); //Character is always promoted to int (65)
    print(123.5); //double
    print(123.3F); //float is promoted to double
    print("C-style string"); //C-sytle string promoted to C++ string
    
    string s{"C++ string"};
    print(s); //C++ string
    
    print("C-style string", s); //First argument is converted to a C++ string
    
    vector<string> three_stooges{"Larry", "Moe", "Curly"};
    print(three_stooges);
    
    cout << endl;
    return 0;
}
 pow