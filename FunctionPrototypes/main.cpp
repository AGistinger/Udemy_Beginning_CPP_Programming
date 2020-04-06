// Function Prototypes
/*
 * The compiler must 'know' about a function before it is used.
 * 
 * Define functions before calling them
 * -OK for small programs.
 * -Not practicals olution for larger programs.
 * 
 * Use function prototypes
 * -Tells teh compiler what it needs to know without a full function definition
 * -Also called forward declarations
 * -Placed at the beginning of a program
 * -Also used in our own header files (.h)
 * 
 * Ex)
 * int function_name (); //Prototype
 * 
 * int function_name() {
 *  statements;
 *  return 0;
 * }
 * 
 * Ex2)
 * 
 * */

#include <iostream>

using namespace std;

//Function Prototypes
double calc_area_circle(double radius);
double calc_volume_cylinder(double radius, double height);
void area_circle();
void volume_cylinder();

const double pi {3.14159};

int main() {
    
    area_circle();
    volume_cylinder();    
    
    cout << endl;
    return 0;
}

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
