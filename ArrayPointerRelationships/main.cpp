// Array and Pointers - Relationship
/*
 * -The value of an array name is the address of the first element in the array
 * -The value of a pointer variable is an address
 * -If the pointer points to the same data type as the array element then the 
 *  pointer and array name can be used interchaneably(almost)
 * 
 * -The array name is not a variable so you cannot change it
 * 
 * Ex)
 *  int scores[] {100, 95, 89};
 *  
 *  cout << scores << endl; //0x61fec8
 * 
 *  //This goes to the address of the first array element
 *  cout << *scores << endl; //100
 * 
 *  int *score_ptr {scores};
 *  
 *  cout << score_ptr <, endl; //0x61fec8
 * 
 *  cout << *score_ptr << endl; //100
 * 
 * Ex)
 *  int scores[] {100, 95, 89};
 * 
 *  int *score_ptr {scores};
 * 
 *  cout << score_ptr[0] << endl; //100
 *  cout << score_ptr[1] << endl; //95
 *  cout << score_ptr[2] << endl; //89
 * 
 * Ex)
 *  int scores[] {100, 95, 80};
 * 
 *  int *score_ptr {scores};
 * 
 *  cout << score_ptr << endl; //Address: 0x61ff10
 * 
 *  cout << (score_ptr + 1) << endl; //Adds the size of 1 integer to the pointer value
 * 
 *  cout << (score_ptr + 2) << endl; //Adds the size of 2 integers and displays the address of that location
 * 
 * Ex)
 *  int scores[] {100, 95, 89};
 * 
 *  int *score_ptr {scores};
 * 
 *  cout << *score_ptr << endl; //100 - first item at the address for the pointer
 * 
 *  cout << *(score_ptr + 1) << endl; //95
 * 
 *  cout << *(score_ptr + 2) << endl; //89
 * 
 * Notes:
 * Subscript and Offset Notation equivalence
 * 
 *  int array_name[] {1, 2, 3, 4, 5};
 *  int *pointer_name {array_name};
 * 
 * Subscript notation  |  Offset notation
 * array_name[index]   |  *(array_name + index)
 * pointer_name[index] |  *(pointer_name + index)
 * 
 * */

#include <iostream>

using namespace std;

int main() {
    
    //Initalize array
    int temps[] {100, 50, 25};
    
    //Initialize point to array, the name of the array is the address of the first element
    int *temps_ptr {temps};
    
    //Use range base for loop to display the items in the array
    for(int i {0}; i < 3; i++)
    {
        cout << temps_ptr[i] << " ";
    }
    
    cout << endl;
    
    //Array Example
    int scores[] {100, 95, 89};
    
    cout << "Value of scores: " << scores << endl; //This will display the address of scores not what is in scores
    
    //The name scores is the address of the array
    int *score_ptr {scores};
    cout << "Value of score_ptr: " << score_ptr << endl; //This will dislay the address of the scores array as well
    
    cout << "\nArray Subscript notation--------------------" << endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;
    
    cout << "\nPointer Subscript notation---------------------" << endl;
    cout << score_ptr[0] << endl;
    cout << score_ptr[1] << endl;
    cout << score_ptr[2] << endl;
    
    //This takes the updated address and then dereferences it to display what is in the updated address
    cout << "\nPointer Offset notation------------------------" << endl;
    cout << *score_ptr << endl;
    cout << *(score_ptr + 1) << endl;
    cout << *(score_ptr + 2) << endl;
    
    cout << "\nArray Offset notation--------------------------" << endl;
    cout << *scores << endl;
    cout << *(scores + 1) << endl;
    cout << *(scores + 2) << endl;
    
    cout << endl;
    return 0;
}
