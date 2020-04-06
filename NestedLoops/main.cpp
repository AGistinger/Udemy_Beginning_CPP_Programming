// Nested Loops
/*
 * Loop nested within another loop
 * Can be as many levels deep as the program needs
 * Very useful with multi-dimensional data structures
 * Outer loop vs. Inner loop
 * 
 * Ex1)
 * for (outer_val {1}; outer_val <=2; ++outer_val) {
 *  for (inner_val {1}; inner_val <=3; ++inner_val) 
 *      cout << outer_val << ", " << inner_val << endl;
 * }
 * 
 * Ex2)
 * for(int num1 {1}; num1 <=10; ++num1) {
 *  for(int num2 {1}; num2 <=10; ++num2) {
 *   cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;   
 *  }
 *   cout << "----------------" << endl;
 * }
 * 
 * Ex3)
 * int grid [5] [3] {};
 * for(int row {0}; row < 5; ++row) {
 *  for(int col {0}; col <3; ++col) {
 *      grid[row][col] = 1000;
 *  }
 * }
 * 
 * Ex4)
 * vector<vector<int>> vector_2d
 * {
 *  {1, 2, 3),
 *  {10, 20, 30, 40},
 *  {100, 200, 300, 400, 500}
 * };
 * 
 * for(auto vec : vector_2d) {
 *  for(auto val : vec) {
 *      cout << val << " ";
 *  }
 *  cout << endl;
 * }
 * 
 * */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    //Multiplication table
    for(int num1 {1}; num1 <= 10; ++num1) {
        for(int num2 {1}; num2 <= 10; ++num2) {
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        }
        cout << "---------------" << endl;
    }
    
    //Histogram
    int num_items {};
    
    cout << "How many data items do you have? ";
    cin >> num_items;
    
    vector<int> data {};
    
    for(int i {1}; i <= num_items; i++) {
        int data_item {};
        cout << "Enter data item " << i << ": ";
        cin >> data_item;
        data.push_back(data_item);
    }
    
    cout << "\nDisplaying Histogram" << endl;
    for(auto val : data) {
        for(int i {1}; i <= val; i++) {
            if(i % 5 == 0) {
                cout << "*";
            }else{    
                cout << "-";
            }   
        }
        cout << endl;
    }
    
    cout << endl;
    return 0;
}
