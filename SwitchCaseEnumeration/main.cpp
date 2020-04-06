// Switch Case Statement with Enumeration

#include <iostream>

using namespace std;

int main() {
    
    //A Enumeration is a user-defined data type that consists of intergral constants
    //To define an enumeration, keyword "enum" is used.
    enum Direction {left, right, up, down};
    
    Direction heading {left};
    
    switch (heading) {
        case left:
            cout << "Going left" << endl;
            break;
        case right:
            cout << "Going right" << endl;
            break;
        case up:
            cout << "Going up" << endl;
            break;
        case down:
            cout << "Going down" << endl;
            break;
        default:
            cout << "OK" << endl;
    }
    
    cout << endl;
    return 0;
}
