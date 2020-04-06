// Default Argument Values
/*
 * When a function is called, all arguments must be supplied.
 * Somtimes some of the arguments have the same values, most of the time.
 * We can tell the ocmpiler to use default values if the arguments are not supplied.
 * Defualt values can be in the prototype or definition, not both.
 *  -Best practice - in the prototype.
 *  -Must appear at the tail end of the parameter list.
 * Can have mulitple default values.
 *  -Must appear consecutively at the tail end of the parameter list.
 * 
 * Ex) No default arguments
 * double cal_cost(double base_cost, double tax_rate);
 * 
 * double calc_cost(double base_cost, double tax_rate) {
 *  return base_cost += (base_cost * tax_rate);
 * }
 * 
 * int main() {
 *  double cost {0};
 *  cost = calc_cost(100.0, 0.06);
 *  return 0;
 * }
 * 
 * Ex) Single default argument
 * double calc_cost(double base_cost, double tax_rate = 0.06);
 * 
 * double calc_cost(double base_cost, double tax_rate) {
 *  return base_cost += (base_cost * tax_rate);
 * }
 * 
 * int main() {
 *  double cost {0};
 *  cost = calc_cost(200.0); //Will use the default tax
 *  cost = calc_cost(100.0, 0.08); //Will use 0.08, not the default
 *  return 0;
 * }
 * 
 * Ex) Mulitple default arguments
 * double calc_cost(double base_cost, double tax_rate = 0.06, double shipping = 3.50);
 * 
 * double calc_cost(double base_cost, double tax_rate, double shipping) {
 *  return base_cost += (base_cost * tax_rate) + shipping;
 * }
 * 
 * int main () {
 *  double cost {0};
 *  cost = calc_cost (100.0, 0.08, 4.25); //Will use no defaults
 *  cost = calc_cost(100.0, 0.08); //Will use default shipping
 *  cost = calc_cost(200.0); //will use default tax and shipping
 *  return 0;
 * }
 * 
 * */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double calc_cost(double base_cost = 100, double tax_rate = 0.06, double shipping = 3.50);
void greeting(string name, string prefix = "Mr.", string suffix = "");

double calc_cost(double base_cost, double tax_rate, double shipping) {
    return base_cost += (base_cost * tax_rate) + shipping;
}

void greeting(string name, string prefix, string suffix) {
    cout << "Hello " << prefix << " " + name + " " + suffix << endl;
}

int main() {
    
    double cost {0};
    cost = calc_cost(100.0, 0.08, 4.25); //Will use no defaults
    
    cout << fixed << setprecision(2); //Uses iomanip to set 2 decimal points
    cout << "Cost is: " <<  cost << endl; //112.25
    
    cost = calc_cost(100.0, 0.08); //Will use default shipping
    cout << "Cost is: " << cost << endl; //111.50
    
    cost = calc_cost(200.0); //Will use default tax and shipping
    cout << "Cost is: " << cost << endl; //212.50
    
    cost = calc_cost(); //Will use all 3 default arguments
    cout << "Cost is: " << cost << endl; //109.50
    
    greeting("Glen Jones", "Dr.", "M.D.");
    greeting("James Rodgers", "Professor", "Ph.D.");
    greeting("Frank Miller", "Dr.");
    greeting("William Smith");
    greeting("Mary Howard", "Mrs.", "Ph.D.");
    
    cout << endl;
    return 0;
}
