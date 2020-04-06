// Infinite Loops
/*
 * Loops whose condition expression always evaluates to true
 * Usually this is unintended and a programmer error
 * Sometimes programmers use infinite loops and include break statements int eh body to control them
 * Sometimes infinite loops are exatly waht we need
 *  Even loop in an event-driven program
 *  Operating system
 * 
 * Ex1)
 * for(;;)
 *  cout << "This will print forever" << endl;
 * 
 * Ex2)
 * while(true)
 *  cout << "This will print forever" << endl;
 * 
 * Ex3)
 * do {
 *  cout << "This will print forever" << endl;
 * } while (true);
 * 
 * Ex4)
 * while(true) {
 *  char again {};
 *  cout << "Do you want to loop again? (Y/N): ";
 *  cin >> again;
 * 
 *  if(again == 'N' || again == 'n')
 *      break;
 * }
 * 
 * 
 * */

#include <iostream>

using namespace std;

int main() {
    
    cout << "Hello World" << endl;
    
    return 0;
}
