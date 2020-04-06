//Polymorphism - Multiple Inheritance

/*
 * Multiple Inheritance allows for one class to inherit from more
 * than one class.  The user will then be able to call methods from
 * all the classes the derived class inherits from
 * */ 

#include <iostream>

using namespace std;

class Car
{
public:
    std::string Drive() { return "I'm driving!"; }
};

class Boat
{
public:
    std::string Cruise() { return "I'm cruising!"; }
};

class AmphibiousCar : public Boat, public Car
{
    
};

int main()
{
	Car car;
    Boat boat;
    AmphibiousCar duck;
    
    cout << duck.Drive() << endl;
    cout << car.Drive() << endl;
    cout << duck.Cruise() << endl;
    cout << boat.Cruise() << endl;
    
	return 0;
}
