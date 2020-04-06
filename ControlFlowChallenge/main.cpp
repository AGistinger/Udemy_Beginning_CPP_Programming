// Controlling Program Flow - Challenge

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> numbers {};
    char selection {};
    
    do{
        cout << "----------Menu----------" << endl;
        cout << "P - Print Numbers" << endl;
        cout << "A - Add a Number" << endl;
        cout << "M - Display the Mean of the Numbers" << endl;
        cout << "S - Display the Smallest Number" << endl;
        cout << "L - Display the Largest Number" << endl;
        cout << "C - Clear Data" << endl;
        cout << "Q - Quit" << endl;
        
        cout << "\nEnter your selection: ";
        cin >> selection;
        
        if(selection == 'P' || selection == 'p') {
            if(numbers.size() == 0) {
                cout << "\n[] - The list is empty\n" << endl;
            }else{
                cout << "\nThe List Contains - [ ";
                for(auto number : numbers) {
                    cout << number << " ";
                }
                cout << "]\n" << endl;
            }
            
        }else if(selection == 'A' || selection == 'a') {
            int add_num {};
            cout << "\nEnter a Number to Add to the List: ";
            cin >> add_num;
            
            numbers.push_back(add_num);
            cout << add_num << " has been Added\n" << endl;
            
        }else if(selection == 'M' || selection == 'm') {
            if(numbers.size() == 0) {
                cout << "\nUnable to Calculate the Mean - no Data\n" << endl;
            }else{
                double total_num {0};
                for(auto number : numbers) {
                    total_num += number;
                }
                cout << "\nThe Mean of the data is: " << total_num / numbers.size() << endl;
            }
            
        }else if(selection == 'S' || selection == 's') {
            if(numbers.size() == 0) {
                cout << "\nUnable to determine the Smallest Number - The list is Empty\n" << endl;
            }else{
                int smallest_num {numbers.at(0)};
                for(auto number : numbers) {
                    if(number < smallest_num) {
                        smallest_num = number;
                    }
                }
                cout << smallest_num << " is the Smallest Number\n" << endl;
            }
            
        }else if(selection == 'L' || selection == 'l') {
            if(numbers.size() == 0) {
                cout << "\nUnable to determine the Largest Number - The list is Empty\n" << endl;
            }else{
                int largest_num {numbers.at(0)};
                for(auto number : numbers) {
                    if(number > largest_num) {
                        largest_num = number;
                    }
                }
                cout << largest_num << " is the Largest Number\n" << endl;
            }  
            
        }else if(selection == 'C' || selection == 'c') {
            if(numbers.size() == 0) {
                cout << "\nUnable to Clear Data, List is Empty\n" << endl;
            }else{
                numbers.clear();
                cout << "\nData has been Cleared\n" << endl;
            }
            
        }else if(selection == 'Q' || selection == 'q') {
            cout << "\nGoodbye\n" << endl;
        }else{
            cout << "\nUknown selection, Please try again\n" << endl;
        }
        
    } while (selection != 'Q' && selection != 'q'); 
    
    cout << endl;
    return 0;
}
