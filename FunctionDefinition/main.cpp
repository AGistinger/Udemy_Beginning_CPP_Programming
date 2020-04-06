// Function Definition
/*
 * Name
 * -The name of the function
 * -Same rules as for variables
 * -Should be meaningful
 * -Usually a verb or verb phrase
 * 
 * Parameter list
 * -The variables passed into the function
 * -Their types must be specified
 * 
 * Return type
 * -The type of the data that is returned from the function
 * 
 * Body
 * -The statements that are executed when the function is called, in curly braces {}
 * 
 * Ex)
 * int function_name (int a) {
 *  statements;
 *  return 0;
 * }
 * 
 * Ex) Void
 * void function_name () {
 *  statements;
 *  return;
 * }
 * 
 * Ex) Multiple Parameters
 * void function_name(int a, std::string b) {
 *  statements;
 *  return;
 * }
 * 
 * Ex) Using a Function
 * void say_hello() {
 *  cout << "Hello" << endl;
 * }
 * 
 * int main() {
 *  for(int i {1}; i <= 10; ++i) {
 *      say_hello();
 *  }
 * return 0;
 * }
 * 
 * */

#include <iostream>

using namespace std;

const double pi {3.14159};

double calc_area_circle(double radius) {
    return pi * radius * radius;
}

double calc_volume_cylinder(double radius, double height) {
    return calc_area_circle(radius) * height;
}

void area_circle() {
    double radius {};
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    cout << "The area of a circle with a radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder() {
    double radius {};
    double height {};
    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;
    cout << "\nEnter the height of the cylinder: ";
    cin >> height;
    
    cout << "The volume of a cylinder with radius: " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}

int main() {
    
    area_circle();
    volume_cylinder();
    
    return 0;
}
