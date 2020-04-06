// Nested If Statement - Project 2 - Shipping

/*
 * Shipping cost calculator
 * 
 * Ask the user for a package dimension in inches
 * length, width, height - these should be integers
 * 
 * All dimension must be 10 inches or less or we cannot ship it
 * 
 * Base cost $2.50
 * If package volume is greater than 100 cubic inches there is a 10% surcharge
 * If package volume is grater than 500 cubic inches there is a 25% surcharge
 * 
 * */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int length {};
    int width {};
    int height {};
    
    double base_cost{2.50};
    
    const int tier1_threshold {100};
    const int tier2_threshold {500};
    
    int max_dimenstion_length {10};
    
    double tier1_surcharge {0.10};
    double tier2_surcharge {0.20};
    
    int package_volume {};
    
    cout << "Welcome to the package cost calculator" << endl;
    cout << "Enter the length, width, and height of the package separated by spaces: ";
    cin >> length >> width >> height;
    
    //Check if the package is valid, then check how much the package will cost based on size
    if (length > max_dimenstion_length || width > max_dimenstion_length || height > max_dimenstion_length) {
        cout << "Sorry, package rejected - dimensions exceeded" << endl;
    } else {
        double package_cost {};
        package_volume = length * width * height;
        package_cost = base_cost;
        
        if(package_volume > tier2_threshold) {
            package_cost += package_cost * tier2_surcharge;
            cout << "Adding tier 2 surcharge" << endl;
        } else if (package_volume > tier1_threshold) {
            package_cost += package_cost + tier1_surcharge;
            cout << "Adding tier 1 surcharge" << endl;
        }
        
        cout << fixed << setprecision(2);
        cout << "The volume of your package is: " << package_volume << endl;
        cout << "Your package will cost: $" << package_cost << " to ship" << endl; 
    }
    
    cout << endl;
    return 0;
}
