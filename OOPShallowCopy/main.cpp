// Object Oriented Programming - Shallow Copy

/*
 * Shallow vs. Deep Copying
 * -Consider a class that contains a pointer as a data member
 * -Constructor allocates storage dynamically and initializes the pointer
 * -Destructor releases teh memory allocated by the consturctor
 * -What happens in the default copy constructor? - you can do a shallow copy or deep copy
 * 
 * Default Copy Constructor
 * -Memberwise copy
 * -Each data member is copied from the source object
 * -The pointer is copied but NOT what it points to (shallow copy)
 * -*PROBLEM: When we release the storage in teh destructor, the other object
 *  still refers to the released storage!
 * 
 * Ex) Shallow Copy
 * class Shallow {
 * private:
 *  int *data;  //Pointer
 * public:
 *  Shallow(int d); //Constructor
 *  Shallow(const Shallow &source); //Copy
 *  ~Shallow();
 * };
 * 
 * Shallow::Shallow(int d) {
 *  data = new int; //allocate storage
 *  *data = d;
 * }
 * 
 * Shallow::~Shallow() {
 *  delete data; //free storage
 *  std::cout << "Destructor freeing data" << std::endl;
 * }
 * 
 * Shallow::Shallow(const Shallow &source)
 *  :data(source.data) {
 *      std::cout << "Copy constructor - shallow" << std::endl;
 * }
 * 
 * Shallow copy - only the pointer is copied - not what it is pointing to!!!
 * PROBLEM: source and the newly created object BOTH point to the SAME data area!!!
 * 
 * int main() {
 *  Shallow obj1 {100};
 *  display_shallow(obj1);
 *  //obj1's data has been released!
 * 
 * obj1.set_data_value(1000);
 * Shallow obj2 {obj1};
 * return 0;
 * }
 * 
 * */

#include <iostream>

class Shallow
{
private:
    int *data;
public:
    void set_data_value(int d) {*data = d;}
    int get_data_value(){return *data;}
    
    Shallow(int d);
    Shallow(const Shallow &source);
    ~Shallow();
};

Shallow::Shallow(int d) 
{
    data = new int;
    *data = d;
}

void display_shallow(Shallow s)
{
    std::cout << s.get_data_value() << std::endl;
}

Shallow::Shallow(const Shallow &source)
    :data(source.data)
    {
        std::cout << "Copy constructor - shallow copy" << std::endl;
    }
    
Shallow::~Shallow()
{
    delete data;
    std::cout << "Destructor freeing data" << std::endl;
}

int main() {
    
    Shallow obj1 {100};
    display_shallow(obj1);
    
    //Shallow obj2 {obj1}; //Data no longer exists
    //obj2.set_data_value(1000); //Data no longer exists, tries to delete the same data location
    
    return 0;
}
