// Range-Based For Loop
/*
 * Introduced in C++11
 * for (var_type var_name : sequence) {
 *  statement(s);
 * }
 * 
 * This loops through a collection of elements
 * 
 * Ex1)
 * int scores [] {100, 90, 97};
 * 
 * for(int (or auto) score : scores) {
 *  cout << score << endl;
 * }
 * 
 * Ex2)
 * vector<double> tempts {87.2, 77.1, 80.0, 72.5};
 * 
 * double average_temp {};
 * double running_sum {};
 * 
 * for(auto temp : temps) {
 *  runing_sum += temp;
 * }
 * average_temp = running_sume / temps.size();
 * 
 * Ex3)
 * double average_temp {};
 * double running_sum {};
 * int size {0};
 * 
 * for(auto temp : {60.2, 80.1, 90.0, 78.2}) {
 *  running_sum += temp;
 *  ++size;
 * }
 * average_temp = running_sum / size;
 * 
 * Ex4)
 * for(auto c : "Frank") {
 *  cout << c << endl;
 * }
 * 
 * */

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    
    //Range For loop using an Array
    int scores[] {10, 20, 30};
    
    for(auto score : scores) {
        cout << score << endl;
    }
    
    //Range for loop using a Vector
    vector<double> temperatures {87.9, 77.9, 80.0, 72.5};
    double average_temp {};
    double total {};
    
    for(auto temp : temperatures) {
        total += temp;
    }
    
    if(temperatures.size() != 0) {
        average_temp = total / temperatures.size();
    }
    
    cout << fixed << setprecision(1);
    cout << "Average temperature is: " << average_temp << endl;
    
    //Initializer List in the loop
    for(auto val : {1, 2, 3, 4, 5}) {
        cout << val <<endl;
    }
    
    //Range for loop with a String (C-style string)
    for(auto c : "This is a test") {
        if(c != ' ') {
            cout << c;
        }
    }
    
    //Range for loop with a String V2
     for(auto c : "This is a test") {
        if(c == ' ') {
            cout << '\t';
        }else{
            cout << c;
        }
    }
    
    
    cout << endl;    
    return 0;
}
