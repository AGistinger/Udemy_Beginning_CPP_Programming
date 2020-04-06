//Smart Pointers - Weak Pointers

#include  <iostream>
#include <memory>

class B;  //foward declaration, tells compiler that B exists so that it can be used in A (similar to func. prototype)

//Class A
class A
{
    std::shared_ptr<B> b_ptr;
    
public:
    //Function that that sets pointer variable
    void set_B(std::shared_ptr<B> &b)
    {
        b_ptr = b;
    }
    
    //Constructor/Destructor
    A() { std::cout << "A Constructor" << std::endl; }
    ~A() {std::cout << "A Destrctor" << std::endl; }
};

//Class B
class B
{
    std::weak_ptr<A> a_ptr;  
    
public:
    //Function that sets the pointer variable
    void set_A(std::shared_ptr<A> &a)
    {
        a_ptr = a;
    }
    
    //Cosntructor/Destructor
    B() { std::cout << "B Constructor" << std::endl; }
    ~B() { std::cout << "B Destructor" << std::endl; }
}

int main()
{
	
    shared_ptr<A> = make_shared<A> ();
    shared_ptr<B> = make_shared<B> ();
    a->set_B(b);
    b->set_A(a);
    
	return 0;
}
