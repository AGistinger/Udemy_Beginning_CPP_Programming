//CPP Test -- Float Validation

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

//function that checks whether the input is valid and returns a bool and updates the variables
bool ValidateInput(string &temp_coords, float &sx, float &sy, float &ex, float &ey)
{
    istringstream iss {temp_coords};
    if(iss >> sx >> sy >> ex >> ey)
    {
        return true;
    }
    else
        cout << "Input not valid" << endl;
        return false;
}

int main()
{
    //float variables for start and end x/y coordinates
    float start_x {}, start_y {}, end_x {}, end_y {};
    
    //string for user entry of data
    string temp_coords {};
    
    //Using ValidateInput function to check if users input is valid and updating the variables
    while(!ValidateInput(temp_coords, start_x, start_y, end_x, end_y))
    {
        cout << "Enter the starting x, y coordinates and ending x, y coordinates separated by spaces: " << endl;
        getline(cin, temp_coords);
    }
    
    //cout to display the variables the user entered
    cout << start_x << " " << start_y << " " << end_x << " " << end_y << endl;

	return 0;
}
