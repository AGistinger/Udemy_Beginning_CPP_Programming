// Pointers and References - Passing Pointers to Functions

/*
 * Passing pointers to a function
 * -Pass-by-reference with pointer parameters
 * -We can use pointers and the dereference operator to achieve pass-by-reference
 * -The function paramter is a pointer
 * -The actual parameter can be a pointer or address of a variable
 * 
 * Ex) Pass-by-reference with pointers - defining the function
 *  void double_data(int *int_ptr);
 *  
 *  void double_data(int *int_ptr)
 *  {
 *      *int_ptr *= 2;
 *  }
 * 
 * Ex) Pass-by-reference with pointers - calling the function
 *  int main() 
 *  {
 *      int value {10};
 *      cout << value << endl; //10
 * 
 *      double_data (&value);
 *      cout << value << endl; //20
 *  }
 * 
 * */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Doubles data
void double_data(int *int_ptr) 
{
    *int_ptr *= 2;
}

//Swap
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//Display Vector
void display(const vector<string> *const v) 
{
    for(auto str : *v)
    {
        cout << str << " ";
    }
    cout << endl;
}

//Display Array - function overloaded
void display(int *array, const int sentinel)
{
   while(*array != sentinel)
   {
       cout << *array++ << " ";
   } 
   cout << endl;
}

int main() {
    
    //Double data function call
    int value {10};
    int *int_ptr {nullptr};
    
    cout << "Value: " << value << endl;
    double_data(&value);
    cout << "Value: " << value << endl;
    
    cout << "--------------------------" << endl;
    int_ptr = &value;
    double_data(int_ptr);
    
    cout << "Value: " << value << endl;
    
    //Swap function call
    int x {100}, y {200};
    cout << "\nx: " << x << endl;
    cout << "y: " << y << endl;
    
    swap(&x, &y);
    
    cout << "\nx: " << x << endl;
    cout << "y: " << y << endl;
    
    //Display function call
    cout << "-------------------------" << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};
    display(&stooges);
    
    cout << "\n-----------------------" << endl;
    int scores[] {100, 98, 97, 79, 85, -1};
    display(scores, -1);
    
    cout << endl;
    return 0;
}
