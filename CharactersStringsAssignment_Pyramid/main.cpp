//Characters and Strings -  Pyramid Assignment

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    //Declare variable for entered string
    string user_string {};
    cout << "Enter a string of characters: ";
    getline(cin, user_string);
        
    //Start Loop to determine how many rows are needed
    for(int i {0}; i < user_string.length(); i++){
        //Loop to generate spaces
        for(int k{0}; k < user_string.length()-i; k++) {
            cout << " ";
        }
        //Loop to display the left side
        for(int j {0}; j <= i; j++) {
            cout << user_string.at(j);
        }
        //Loop to display the reverse on the right side
        for(int k {i -1}; k >= 0; k--) {
            cout << user_string.at(k);
        }
        
        cout << endl;
    }
            
    cout << endl;
    return 0;
}
