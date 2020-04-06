// Continue and Break
/*
 * continue
 * no further statements in the body of the loop are executed
 * control immediately goes directly to the beginning of the loop for the next iteration
 * Skip processing in the rest of the iteration
 * 
 * break
 * no further statements in teh body of the loop are executed
 * loop is immediately terminated
 * Control goes to the statement following the loop construct
 * 
 * Ex1)
 * vector<int> values {1, 2, -1, 3, -1, -99, 7, 8, 10};
 * for(auto val : values) {
 *  if(val == -99)
 *      break;
 *  else if(val == -1)
 *      continue;
 *  else
 *      cout << val << endl;
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
