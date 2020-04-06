// Do While Loop
/*
 * do {
 *  statements:
 * }while (expression);
 * 
 * Post test loop
 * Loop body will execute at least once
 * 
 * Ex1)
 * int number {};
 * do {
 *   cout << "Enter an integer between 1 and 5: ";
     cin >> number;
 * } while (number <=1 || number >=5);
 *   cout << "Thanks" << endl;
 * 
 * 
 * */

#include <iostream>

using namespace std;

int main() {
    
    char selection {};
    
    do{
        cout << "\n------------------------" << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. Quit" << endl;
        
        cout << "\nEnter your selection: ";
        cin >> selection;
        
        if(selection == '1') {
            cout << "You selected 1 - doing this" << endl;
        }else if(selection == '2') {
            cout << "You selected 2 - doing that" << endl;
        }else if(selection == '3') {
            cout << "You selected 3 - doing something else" << endl;
        }else if(selection == 'Q' || selection == 'q') {
            cout << "Goodbye..." << endl;
        }else{
            cout << "Invalid selection - try again..." << endl;
        }
        
    }while (selection != 'q' && selection != 'Q');
    
    cout << endl;
    return 0;
}
