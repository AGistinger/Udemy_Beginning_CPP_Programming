// Pointers and References - Returning a Pointer from a Function
/*
 * Functions can also return pointers
 *  type *function();
 * 
 * Should return pointers to 
 *  -Memory dynamically allocated in the function
 *  -To data that was passed in
 * 
 * Never return a pointer to a local function variable!
 * 
 * Ex) Returning a Parameter
 *  int *largest_int(int *int_ptr1, int *int_ptr2) {
 *      if(*int_ptr1 > *int_ptr2) {
 *          return int_ptr1;
 *      }else{
 *          return int_ptr2;
 *      }
 *  }
 * 
 *  int main() {
 *      int a {100};
 *      int b {200};
 * 
 *      int *largest_ptr {nullptr};
 *      largest_ptr = largest_int(&a, &b);
 *      cout << *largest_ptr << endl; //200
 *      return 0;
 *  }   
 * 
 * Ex) Returning Dynamically Allocated Memory
 *  int *create_array(size_t size, int init_value = 0) {
 *      int *nw_storage {nullptr};
 * 
 *      new_storage = new int[size];
 *      for(size_t i {0}; i < size; ++i) {
 *          *(new_storage + i) =  init_value;
 *      }
 *  return new_storage;
 *  }
 * 
 *  int main() {
 *      int *my_array; //Will be allocated by the function
 *      
 *      my_array = create_array(100, 20); //create the array
 * 
 *      //use it
 *      delete [] my_array; //be sure to free the storage
 *      return 0;
 * }
 * 
 * Ex) Never Return a pointer to a local variable!!
 *  int *dont_do_this() {
 *      int size {};
 *      return &size;
 *  }
 * 
 *  int *or_this() {
 *      int size {};
 *      int *int_ptr {&size};
 *      return int_ptr;
 *  }
 * 
 * */

#include <iostream>

using namespace std;

//Create Array Function - this dynamically creates stroage based on size and initial value of each item
/*
 * It is important to return the address to the array on the Heap so it is not lost when the function 
 * terminates.  The pointer from new_storage gets assigned to my_array as the variable new storage will
 * no longer exist after the function completes.
 * */
int *create_array(size_t size, int init_value = 0) 
{
    int *new_storage {nullptr};
    new_storage = new int[size];
    for(size_t i {0}; i < size; ++i)
    {
        new_storage[i] = init_value;
    }
    return new_storage;
}

void display(const int *const array, size_t size) 
{
    for(size_t i {0}; i < size; ++i)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    
    //Local Variables
    int *my_array {nullptr};
    size_t size;
    int init_value {};
    
    cout << "\nHow many integers would you like to allocate? ";
    cin >> size;
    cout << "What value would you like them initialized to? ";
    cin >> init_value;
    
    my_array = create_array(size, init_value);
    cout << "\n-----------------------------------------------------" << endl;
    
    display(my_array, size);
    delete [] my_array;
    
    cout << endl;
    return 0;
}
