//Inheritance - Protected Members and Class Access

#include <iostream>

using namespace std;

class Base
{
  //Note friends of Base have access to all
public:
    int a{0};
    void display()
    {
        cout << a << ", " << b << ", " << c << endl; //member method has access to all
    }
protected:
    int b{0};
private:
    int c{0};
};

class Derived: public Base 
{
    //Note friends of Derived have acces only to what Derived has access to
    //a will be public
    //b will be protected
    //c will not be accessible
public:
    void access_base_members()
    {
        a = 100; //OK public
        b = 200; //OK protected can use in member function
        //c = 300; //Compiler Error C is not accesible
    }
};

int main() {
    
    cout << "===Base member access from base objects==========" << endl;
    Base base;
    base.a = 100; //OK
    //base.b = 200; //Compiler error protected works like private when it comes to objects
    //base.c = 300; //Compiler error objects unable to access private data members
    
    cout << "===Base member access from derived objects=========" << endl;
    Derived d;
    d.a = 100; //OK public
    //d.b = 200; //Compiler error protected works like private when it comes to objects
    //d.c = 300; //Compiler error - not accessible
    
    return 0;
}
