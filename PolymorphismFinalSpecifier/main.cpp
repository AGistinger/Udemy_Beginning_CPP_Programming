//Polymorphism - Using the Final Specifier

#include <iostream>

using namespace std;

class A
{
public:
    virtual void do_something();
};

class B : public A 
{
public:
    virtual void do_something() final;  //prevent further overriding
};

class C : public B
{
public:
    virtual void do_something();  //COMPILER ERROR - can't override
};


int main() {
    
    cout << "Hello World" << endl;
    
    return 0;
}
