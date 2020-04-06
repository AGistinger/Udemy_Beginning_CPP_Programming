// Functions - Pass by Reference
/*
 * Adding an "&" in front of a parameter will allow it to be a pass by reference instead of a pass by value.
 * 
 * -Sometimes we want to be able to change the actual parameter from within the function body.
 * -In order to achieve this we need the location or address of the actual parameter.
 * -We saw how this is the effect with array, but waht about other variable types?
 * -We can use reference parameters to tell the compliler to pass in a reference to the actual parameter.
 * -The formal parameter will now be an alias for the actual parameter.  No copy is made.
 * 
 * Ex)
 * void scale_number(int &num); //Prototype
 * 
 * int main() {
 *  int number {1000};
 *  scale_number(number); //Call
 *  cout << number << endl; //100
 *  return 0;
 * }
 * 
 * void scale_number(int &num) { //Definition
 *  if (num > 100)
 *      num = 100;
 * }
 * 
 * Pass by reference allows you to change an actual parameter.
 * There is no copy of the parameter.
 * The could be unwanted changes.
 * 
 * Ex) Swap
 * void swap(int &a, int &b);
 * 
 * int main() {
 *  int x{10}, y{20};
 *  cout << x << " " << y << endl; // 10 20
 *  swap(x,y);
 *  cout << x << " " << y << endl; // 20 10
 *  return 0;
 * }
 * 
 * void swap(int &a, int &b) {
 *  int temp = a;
 *  a = b;
 *  b = temp;
 * }
 * 
 * If we weren't using pass by reference we would be changing the values in the function, but the actuals would still be the same,
 * so when printed out the result the numbers would be the same instead of changed.
 * 
 * Ex) Vector - This is using a copy (Pass by value).  This could cause memory issues.
 * void print(std::vector<int> v);
 * 
 * int main() {
 *  std::vector<int> data {1,2,3,4,5};
 *  print(data);
 *  return 0;
 * }
 * 
 * void print(std::vector<int> v) {
 *  for (auto num : v) {
 *      cout << num << endl;
 *  }
 * }
 * 
 * Ex) Vector - (Pass by reference) This uses less storage, the print function could change the value of the vector.
 * In order to prevent changes you will want to add the "const" parameter.  This will not allow information to be changed by misake.
 * void print(const std:: vector<int> &v);
 * 
 * int main() {
 *  std::vector<int> data {1,2,3,4,5};
 *  print(data);
 *  return 0;
 * }
 * 
 * void print(const std::vector<int> &v) {
 *  for(auto num : v) {
 *      cout << num << endl;
 *  }
 * }
 * 
 * */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Declaring Prototypes
void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v);
void print_vector(const vector<string> &v);

//Declare Functions
void pass_by_ref1(int &num) {
    num = 1000;
}

void pass_by_ref2(string &s) {
    s = "Changed";
}

void pass_by_ref3(vector<string> &v) {
    v.clear(); //Delete all vector elements
}

void print_vector(const vector<string> &v) {
    for(auto s : v) {
        cout << s << " ";
    }
    cout << endl;
}

//Main
int main() {
    
    int num {10};
    int another_num {20};
    
    cout << "num before calling pass_by_ref1: " << num << endl;
    pass_by_ref1(num);
    cout << "num after calling pass_by_ref1: " << num << endl;
    
    cout << "\nanother_num before calling pass_by_ref1: " << another_num << endl;
    pass_by_ref1(another_num);
    cout << "another_num after calling pass_by_ref1: " << another_num << endl;
    
    string name {"Frank"};
    cout << "\nname before calling pass_by_ref2: " << name << endl;
    pass_by_ref2(name);
    cout << "name after calling pass_by_ref2: " << name << endl;
    
    vector<string> stooges {"Larry", "Moe", "Curly"};
    cout << "\nstooges before calling pass_by_ref3: ";
    print_vector(stooges);
    pass_by_ref3(stooges);
    cout << "stooges after caling pass_by_ref3: ";
    print_vector(stooges);
    
    cout << endl;
    return 0;
}
