// For-Loop
/*
 * for (initialization; condition(boolean); increment) {
 *     statement(s);
 * }
 *
 *Ex1)
 * int {0};
 * for(i=1; i<5; ++i) {
 *  cout << i << endl;
 * }
 * 
 * Ex2)
 * for(int i {1}; i <=5; ++i) {
 *  cout << i << endl;
 * }
 * 
 * Ex3)
 * for(int i {1}; i <=10; ++i) {
 *  if(i % 2 == 0) {
 *      cout << i << endl;
 *  }
 * }
 * 
 * Ex4 - Array)
 * int scores [] {100, 90, 87};
 * for(int i{0}; i <3; ++i) {
 *  cout << scores[i] << endl;
 * }
 * 
 * for(int i {0}; i <= 2; ++i) {
 *  cout << scores[i] << endl;
 * }
 * */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    //Increment by 1
    for(int i {1}; i <= 10; i++) {
        cout << i << endl;
    }
    
    //Increment by 2
    for(int i{1}; i <= 10; i+=2) {
        cout << i << endl;
    }
    
    //Decrease by 1
    for(int i{10}; i > 0; --i){
        cout << i << endl;
    }
    cout << "Blastoff!" << endl;
    
    //Increment by 10 and check if divisble by 15
    for(int i{10}; i <= 100; i+=10) {
        if(i % 15 == 0) {
            cout << i << endl;
        }
    }
    
    //Increment mutliple variables and add them together
    for(int i{1}, j{5}; i <= 5; ++i, ++j) {
        cout << i << " + " << j << " = " << (i+j) << endl;
    }
    
    //Using for loop to structure data
    for(int i{1}; i <= 100; ++i) {
        cout << i;
        if(i % 10 == 0) {
            cout << endl;
        }else{
            cout << " ";
        }
    }
    
    //Conditional operator
    for(int i{1}; i <= 100; ++i) {
        cout << i <<((i % 10 == 0) ? "\n" : " ");
    }
    
    //Using a Vector
    vector<int> nums {10, 20, 30, 40, 50};
    for(size_t i{0}; i < nums.size(); ++i) {
        cout << nums[i] << endl;
    }
    
    cout << endl;
    return 0;
}
