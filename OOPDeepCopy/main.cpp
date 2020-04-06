// Object Oriented Programming - Deep Copying with the Copy Constructor

/*
 * User-Provided copy constructor
 * -Create a copy of the pointed-to data
 * -Each copy will have a pointer to unique storage in the heap
 * -Deep copy when you have a raw pointer as a class data member
 * 
 * Ex) Deep Copy
 * class Deep {
 * private:
 *  int *data;
 * public:
 *  Deep(int d); //Constructor
 *  Deep(const Deep &source); //Copy constructor
 *  ~Deep(); //Destructor
 * };
 * 
 * Ex) Deep constructor
 * Deep::Deep(int d) {
 *  data = new int; //allocate storage
 *  *data = d;
 * }
 * 
 * Ex) Deep Destructor
 * Deep::Deep() {
 *  delete data; //free storage
 *  std::cout << "Destructor freeing data" << std::endl;
 * }
 * 
 * Ex) Deep Copy Constructor
 * Deep::Deep(const Deep &source) {
 *  data = new int; //allocate storage
 *  *data = *source.data;
 *  std::cout << "Copy constructor - deep" << std::endl;
 * }
 * 
 * Deep copy constructor - delegating constructor
 * Ex)
 * Deep::Deep(const Deep &source)
 *  : Deep{*source.data} {
 *      std::cout << "Copy constructor - deep" << std::endl;
 * }
 * 
 * Delegate to Deep(int) and pass in the int (*source.data) source is pointing to
 * 
 * Ex) Deep - a simple method that expects a copy
 * void display_deep(Deep s) {
 *  std::cout << s.get_data_value() << std::endl;
 * }
 * 
 * Ex) Sample main - will not crash
 * int main() {
 *  Deep obj1 {100};
 *  display_deep(obj1);
 * 
 *  obj1.set_data_value(1000);
 *  Deep obj2{obj1};
 * 
 *  return 0;
 * }
 * 
 * 
 * */

#include <iostream>
#include <string>

//Create Class Deep
class Deep
{
private:
    int *data;
    
public:
    void set_data_value(int d) {*data = d;}
    int get_data_value() {return *data;}
    Deep(int d);
    Deep(const Deep &source);
    ~Deep(); 
};

//Create Constructor to allocate data into the pointer
Deep::Deep(int d)
{
    data = new int;
    *data = d;
}

//Create Deep Copy Constructor 
Deep::Deep(const Deep &source)
    : Deep{*source.data}
    {
        std::cout << "Copy Constructor - deep copy" << std::endl;
    }
    
//Create Destructor
Deep::~Deep() 
{
    delete data;
    std::cout << "Destructor called" << std::endl;
}
    
//Create method to display data
void display_deep(Deep s)
{
    std::cout << s.get_data_value() << std::endl;
}


int main() {
    
    //Creating 1 Deep class object
    Deep obj1 {100};
    
    //Calling display method for object
    display_deep(obj1);
    
    //Creating a second object and assigning it the value from obj1
    Deep obj2 {obj1};
    
    //Setting the value of obj2 to 1000
    obj2.set_data_value(1000);
    
    return 0;
}
