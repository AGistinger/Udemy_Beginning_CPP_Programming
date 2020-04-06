// References

/*
 * What is a Reference?
 * -An alias for a variable
 * -Must be initialized to a variable when declared
 * -Cannot be null
 * -Once initialized cannot be made to refer to a different variable
 * -Very useful as function parameters
 * -Might be helpful to think of a reference as a constant pointer that is
 *  automatically dereferenced.
 * 
 * Ex) Using references in a range-based for loop
 *  vector<string> stooges {"Larry", "Moe", "Curly"};
 *  
 *  for(auto &str : stooges) {
 *      str = "Funny"; //changes the copy
 *  }
 * 
 *  for(auto str : stooges) {
 *      cout << str << endl; //Funny, Funny, Funny
 *  }
 * 
 * (SEE SECTION 11 FOR EXAMPLES ON REFERENCES)
 * 
 * */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    
    int num {100};
    int &ref {num};
    
    cout << num << endl;
    cout << ref << endl;
    
    num = 200;
    cout << "\n---------------------" << endl;
    cout << num << endl; //200
    cout << ref << endl; //200
    
    ref = 300;
    cout << "\n---------------------" << endl;
    cout << num << endl; //300
    cout << ref << endl; //300
    
    cout << "\n--------------------------" << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};
    
    for(auto str : stooges) 
    {
        str = "Funny"; //str is a COPY of each vector element
    }
    
    for(auto str : stooges) 
    {
        cout << str << endl; //No change
    }
    
    cout << "\n-------------------------" << endl;
    for(auto &str : stooges) //str is a reference to each vector element
    {
        str = "Funny"; 
    }
    
    for(auto const &str : stooges) //using const for reference variable
    {
        cout << str << endl; //Now the vector elements hae changed
    }
    
    cout << endl;    
    return 0;
}
