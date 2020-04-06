// Functions Challenge

#include <iostream>
#include <vector>

using namespace std;

//Function Prototypes
void menu();
char select_option();
void execute_choice(char c, vector<int> &numbers);
void print(const vector<int> &v);
void add(vector<int> &v);
void mean(const vector<int> &v);
void smallest_number(const vector<int> &v);
void largest_number(const vector<int> &v);
void handle_find(const vector<int> &v);
void clear(vector<int> &v);
void quit(char c);
void other(char c);
bool find (const vector<int> &v, int target);

//Main Function
int main() {
    
    vector<int> numbers {};
    char selection {};
    
    do
    {
        menu();
        selection = select_option();
        execute_choice(selection, numbers);
        
    }while
    
        (selection != 'Q');
    
    cout << endl;
    return 0;
}

//Menu - displays the menu
void menu() 
{
    cout << "----------Menu----------" << endl;
    cout << "P - Print Numbers" << endl;
    cout << "A - Add a Number" << endl;
    cout << "M - Display the Mean of the Numbers" << endl;
    cout << "S - Display the Smallest Number" << endl;
    cout << "L - Display the Largest Number" << endl;
    cout << "F - Find a Number" << endl;
    cout << "C - Clear Data" << endl;
    cout << "Q - Quit" << endl;
}

//Selection - gets the user's selection and changes it to uppercase
char select_option() 
{
    char selection {};
    cout << "\nEnter your selection: ";
    cin >> selection;
    selection = toupper(selection);
    return selection;
}

//Execute Choice - executes the selection into the correct function
void execute_choice(char selection, vector<int> &numbers)
{
    switch(selection) 
    {
        case 'P' : print(numbers); 
            break;
        case 'A' : add(numbers);
            break;
        case 'M' : mean(numbers);
            break;
        case 'S' : smallest_number(numbers);
            break;
        case 'L' : largest_number(numbers);
            break;
        case 'F' : handle_find(numbers);
            break;
        case 'C' : clear(numbers);
            break;
        case 'Q' : quit(selection);
            break;
        default : other(selection);
            break;
    }
}

//Print - displays the items in the vector
void print(const vector<int> &numbers) 
{
    if(numbers.size() == 0) 
    {
        cout << "\n[] - The list is empty\n" << endl;
    }else
    {
        cout << "\nThe List Contains - [ ";
        for(auto number : numbers) 
        {
            cout << number << " ";
        }
        cout << "]\n" << endl;
    }
}

//Add - adds a number to the vector
void add(vector<int> &numbers)
{
    int add_num {};
    cout << "\nEnter a Number to Add to the List: ";
    cin >> add_num;
            
    numbers.push_back(add_num);
    cout << add_num << " has been Added\n" << endl;
}

//Mean - displays the mean of the numbers in the vector
void mean(const vector<int> &numbers)
{
    if(numbers.size() == 0) 
    {
        cout << "\nUnable to Calculate the Mean - no Data\n" << endl;
    }else
    {
        double total_num {0};
        for(auto number : numbers) 
        {
            total_num += number;
        }
        cout << "\nThe Mean of the data is: " << total_num / numbers.size() << endl;
    }
}

//Smallest Number - displays the smallest number in the vector
void smallest_number(const vector<int> &numbers)
{
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
}

//Largest Number - displays the largest number in the vector
void largest_number(const vector<int> &numbers)
{
    if(numbers.size() == 0) 
    {
        cout << "\nUnable to determine the Largest Number - The list is Empty\n" << endl;
    }else{
        int largest_num {numbers.at(0)};
        for(auto number : numbers) 
        {
            if(number > largest_num) 
            {
                    largest_num = number;
            }
        }
        cout << largest_num << " is the Largest Number\n" << endl;
    }  
}

//Handle Find - finds a number the user enters
void handle_find(const vector<int> &numbers) 
{
    int target {};
    cout << "Enter the number to find: ";
    cin >> target;
    
    if(find(numbers, target))
    {
        cout << target << " was found" << endl;
    }else{
        cout << target << " was not found" << endl;
    }
}

//Find - returns the true false value of if the number exists
bool find(const vector<int> &numbers, int target)
{
    for(auto num : numbers)
    {
       if(num == target)
       {
           return true;
       }
    }
    return false;
}

//Clear - emptys the vector
void clear(vector<int> &numbers)
{
    if(numbers.size() == 0) 
    {
            cout << "\nUnable to Clear Data, List is Empty\n" << endl;
    }else
    {
            numbers.clear();
            cout << "\nData has been Cleared\n" << endl;
    }
}

//Quit - quits
void quit(char selection)
{
    cout << "\nGoodbye\n" << endl;
}

//Selection - Other
void other(char selection)
{
    cout << "\nUknown selection, Please try again\n" << endl;
}

