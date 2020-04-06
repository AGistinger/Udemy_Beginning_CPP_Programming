// Polymorphism
//The Problem - Static Binding (not-Polymorphsim)
#include <iostream>
#include <memory>

//Base Class
class Base 
{
public:
    void say_hello() const 
    {
        std::cout << "Hello - I'm a Base class object" << std::endl;
    }
};

//Derived Class
class Derived : public Base
{
public:
    void say_hello() const
    {
        std::cout << "Hello - I'm a Derived class object" << std::endl;
    }
};

//Global non-member Function
void greetings(const Base &obj)
{
    std::cout << "Greetings: ";
    obj.say_hello();
}

int main() {
    
    Base b;
    b.say_hello();
    
    Derived d;
    d.say_hello();
    
    greetings(b);
    greetings(d); //Static binding says that the derived object is a base object, not using dynamic polymorphim
    
    //ptr can hold the address of any base object (a derived is a base)
    Base *ptr = new Derived();
    ptr->say_hello(); //Will call the base because there is no dynamic polymorphism Base::say_hello()
    
    std::unique_ptr<Base> ptr1 = std::make_unique<Derived>(); //This is a smart pointer
    ptr1->say_hello();
    
    delete ptr;
    
    return 0;
}
