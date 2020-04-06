// Object Oriented Programming - Move Constructors

/*
 * Move Constructor
 * -Sometimes when we execute code the compiler creates unamed temporary values
 *  int total{0};
 *  total = 100 + 200;
 * 
 *  -100+200 is evaluated and 300 is stored in an unnamed temp value
 *  -The 300 is then stored in the variable total
 *  -Then the temp value is discarded
 * -The same happens with objects as well
 * 
 * When is it useful?
 * -Sometimes copy constructors are called many times automatically due to the copy 
 *  semantics of C++
 * -Copy constructors doing deep copying can have a significant performance bottleneck
 * -C++11 introducted move semantics and the move constructor
 * -Move constructor moves an object rather than copy it
 * -Optional but recommended when you have a raw pointer
 * -Copy elision - C++ may optimize copying away completely (RVO-Return Value Optimization)
 * 
 * R-Value References
 * -Used in moving semantics and perfect forwarding
 * -Move semantics is all about R-Value references
 * -Used by move constructor and move assignment operator to effciently move an object
 *  rather than copying it
 * -R-value reference operator(&&)
 * 
 * Ex) R-Value references
 * int x {100};
 * int &l_ref = x; //L-value reference
 * l_ref = 10;  //change x to 10
 * 
 * int &&r_ref = 200; //R-value reference
 * r_ref = 300; //Change r_ref to 300
 * 
 * int &&x_ref = x; //compiler error
 * 
 * Ex) L-Value reference parameters
 * int x {100}; //x is an l-value
 * void func(int &num); //A
 * func(x); //calls a - x is an l-value
 * func(200); //Error - 200 is an r-value
 * ERROR:  cannot bind non-const lvalue reference of type 'int&' to an rvalue of type'int'
 * 
 * Ex) R-Value reference parameters
 * int x {100}; // x is an l-value
 * void func(int &&num); //B
 * func(200); //Calls b - 200 is an r-value
 * func(x); //Error - x is an l-value
 * ERROR: cannot bind rvalue reference of type 'int&&' to lvalue of type 'int'
 * 
 * Ex) L-Value and R-Value reference parameters
 * int x {100} //x is an l-value
 * void func(int &num); //A
 * void func(int &&num); //B
 * func(x); //calls A-x is an l-value
 * func(200) //calls B-200 is an r-value
 * 
 * Ex) Move class
 * class Move {
 * private:
 *  int *data; //raw pointer
 * public:
 *  void set_data_value(int d) {*data = d;}
 *  int get_data_value() {return *data;}
 *  Move(int d); //constructor
 *  Move(const Move &source); //Copy constructor
 *  ~Move(); //Destructor
 * };
 * 
 * Ex) Move class copy constructor
 * Move::Move(const Move &source) {
 *  data = new int; //allocates the data pointer to a new int
 *  *data = *source.data; //copys the int in the source to the new data pointer location
 * }
 * 
 * Ex) Inefficient copying
 * Vector<Move> vec; //Creating a vector of Move objects
 * vec.push_back(Move{10});
 * vec.push_back(Move{20});
 * 
 * Copy Constructors will be called to copy the temps!
 * 
 * What does it do?
 * -Instead of making a deep copy of the move constrictor
 *  -'moves' the resource
 *  -Simply copies the address of the resource from source to the current object
 *  -And, nulls out the pointer in the source pointer
 * -Very efficient
 * 
 * Syntax -r-value reference
 * Type::Type(Type &&source);
 * Player::PLayer(Player &&source);
 * Move::Move(Move &&source);
 * 
 * Ex) Move class with move constructor
 * class Move {
 * private:
 *  int *data; //raw pointer
 * public:
 *  void set_data_value(int d) {*data = d;}
 *  int get_data_value() {return *data;}
 *  Move(int d); //Constructor
 *  Move(const Move &source); //Copy Constructor
 *  Move(Move &&source); //Move constructor
 *  ~Move(); //Destructor
 * };
 * 
 * Move::Move(Move &&source)
 *  : data{source.data} {
 *  source.data = nullptr;
 * }
 * 'Steal' the data then null out the source pointer
 * 
 * */

#include <iostream>
#include <vector>

class Move
{
    
private:
    //Attributes
    int *data;
public:
    //Methods
    void set_data_value(int d) {*data = d;}
    int get_data_value() {return *data;}
    
    //Constructors
    Move(int d);
    Move(const Move &source);
    Move(Move &&source);
    ~Move();
    
};

//Costructor for Object creation
Move::Move(int d) 
{
    data = new int;
    *data = d;
    std::cout << "Constructor for: " << d << std::endl;
}

//Copy Constructor
Move::Move(const Move &source)
    : Move {*source.data}
    {
        std::cout << "Copy Constructor - deep copy for: " << *data << std::endl;
    }
    
//Move Constructor
Move::Move(Move &&source) 
    : Move {*source.data}
    {
        std::cout << "Move Constructor called for: " << *data << std::endl;
    }
    
//Destructor
Move::~Move()
{
    if(data != nullptr) 
    {
        std::cout << "Destructor freeing data for: " << *data << std::endl;
    }
    else
    {
        std::cout << "Destructor free data for nullptr" << std::endl;
    }
    
    delete data;
}

int main() {
    
    std::vector<Move> vec {};
    
    vec.push_back(Move{10});
    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
    vec.push_back(Move{50});
    vec.push_back(Move{60});
    vec.push_back(Move{70});
    vec.push_back(Move{80});
    
    return 0;
}
