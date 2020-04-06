// Pointers & References Challenge

/*
 * Write a C++ function named apply_all that expects two arrays of integers and their sizes
 * and dynamically allocates a new array of integers who size is the product of the 2 array sizes.
 * 
 * The function should loop through the second array and multiply each element across each element of array 1 and store the
 * product in the newly created array.
 * 
 * The function should return a pointer to the newly allocated array.
 * 
 * You can also write a print function that expects a pointer to the array of integers and its size and display
 * the elements in the array.
 * 
 * For example)
 * 
 * Below is the output from the follow code which would be in main:
 * 
 *  int array1[] {1, 2, 3, 4, 5};
 *  int array2[] {10, 20, 30};
 * 
 *  cout << "Array 1: ";
 *  print(array1, 5);
 * 
 *  cout << "Array 2: ";
 *  print(array2, 3);
 * 
 *  int *results = apply_all(array1, 5, array 2, 3);
 *  cout << "Result: "'
 *  print(results, 15);
 * 
 * Output
 * -----------------------
 * Array 1: [1 2 3 4 5]
 * Array 2: [10 20 30]
 * Result: [10 20 30 40 50 20 40 60 80 100 30 60 90 120 150]
 * 
 * */

#include <iostream>

using namespace std;

int* apply_all (const int array1[], const size_t &array1_size, const int array2[], const size_t &array2_size);
void print (const int *array, const size_t &size);

int main() {
    
    const size_t array1_size {5};
    const size_t array2_size {3};
    
    int array1[] {1, 2, 3, 4, 5};
    int array2[] {10, 20, 30};
    
    cout << "Array 1: ";
    print(array1, array1_size);
    
    cout << "Array 2: ";
    print(array2, array2_size);
    
    int *results= apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size * array2_size};
    
    cout << "Result: ";
    print(results, results_size);
    
    delete [] results;
    cout << endl;
    return 0;
}

//Takes the product of the items in array2 and array1 then returns them to an array on the heap
int* apply_all(const int array1[], const size_t &array1_size, const int array2[], const size_t &array2_size)
{
    size_t array3_size {array1_size * array2_size};
    
    int *array3_ptr {nullptr};
    array3_ptr = new int[array3_size] {};
    int *start_array {nullptr};
    start_array = array3_ptr;
    //int location {0};
    
    for(int i {0}; i < array2_size; ++i)
    {
        for(int j {0}; j < array1_size; ++j)
        {
            int product = array2[i] * array1[j];
            *array3_ptr = product;
            array3_ptr++;
            
            //array3_ptr[location] = product;
            //location++;
        }
    }

    return start_array;
}

//Displays each of the elements in the array
void print(const int *array, const size_t &size)
{
    cout << "[ ";
    for(int i {0}; i < size; ++i)
    {
        cout << array[i];
        cout << " ";
    }
    cout << "]" << endl;
}