// Pointers and References - Dynamic Memory
/*
 * Allocating Storage from the heat at runtime
 * -We often don't know how much storage we need until we need it
 * -We can allocate storage for a variable at run time
 * -Recall C++ Arrays
 *  -We had to explicitly provide the size and it was fixed
 *  -But vectors grow and shrink dynamically
 * -We can use pointers to access newly allocated heap storage
 * 
 * Using new to allocate storage
 * Ex)
 *  int *int_ptr {nullptr};
 *  int_ptr = new_int; //allocate an integer on the heap
 *  cout << int_ptr << endl; //0x2747f28
 *  cout << *int_ptr << endl; //41188048 - garbage, integer hasn't been initalized yet
 *  *int_ptr = 100;
 *  cout << *int_ptr << endl; //100
 * 
 * Using delete to deallocate storage
 * Ex)
 *  int *int_ptr {nullptr};
 *  int_ptr = new int; //allocate an integer on the heap
 *  delete int_ptr; //frees the allocated storage
 * 
 * Using new[] to allocate storage for an array
 * Ex)
 *  int *array_ptr {nullptr};
 *  int size {};
 * 
 *  cout << "How big do you want the array? ";
 *  cin >> size;
 * 
 *  array_ptr = new int[size]; //allocate array on the heap
 * 
 *  delete [] array_ptr; //free allocated storage
 * 
 * */

#include <iostream>

using namespace std;

int main() {
    
    //All dynamic memory allocation occurs in the Heap/Free Store
    //This free storage needs to be released once you are done with it
    int *int_ptr {nullptr};
    int_ptr = new int;
    
    //Address that is stored for int_ptr on the heap
    cout << int_ptr << endl;
    
    //Frees up the storage
    delete int_ptr;
    
    double *temp_ptr {nullptr};
    size_t size {0};
    
    cout << "How many temps? ";
    cin >> size;
    
    //This will allocate this amount of memory for the array
    temp_ptr = new double[size];
    
    cout << temp_ptr << endl;
    
    //In order to delete an array you need to type delete then the square brackets then the name
    delete [] temp_ptr;
    
    //If you do not delete the heap memory you will cause a memory leak
        
    cout << endl;
    return 0;
}
