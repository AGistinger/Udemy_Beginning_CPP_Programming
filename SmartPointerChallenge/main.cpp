//Smart Pointers - Challenge
#include  <iostream>
#include <memory>
#include <vector>

//Test class
class Test
{
private:
    int data;
    
public:
    //Constructors/Destructor
    Test()
    : data {0}
    {
        std::cout << "\tTest Constructor (" << data << ")" << std::endl;
    }
    
    Test(int data)
    : data {data}
    {
        std::cout << "\tTest Constructor (" << data << ")" << std::endl;
    }
    
    ~Test() 
    {
        std::cout << "\tTest Destructor (" << data << ")" << std::endl;
    }
    
    int get_data() { return data;  }
};

//Function Prototypes
auto make();  //Using auto allows the compiler to figure out the return type
void fill(std::vector<std::shared_ptr<Test>> &vec, int num); 
void display(const std::vector<std::shared_ptr<Test>> & vec);  

//Make - returns a unqiue pointer to a vector of shared pointers that manage test objects
auto make()
{
    return std::make_unique<std::vector<std::shared_ptr<Test>>>();
}

//Fill - will loop through and ask the user what elements to add
void fill(std::vector<std::shared_ptr<Test>> &vec, int num)
{
    int data {};
    for(int i {1}; i <= num; i++)
    {
        std::cout << "Enter data pointer [" << i << "] : ";
        std::cin >> data;
        vec.push_back(std::make_shared<Test> (data));
    }
}

//Display - display the elements  on the vector
void display(const std::vector<std::shared_ptr<Test>> & vec)
{
    std::cout << "=====Displaying Vector Data=======================" << std::endl;
    for(const auto &data_ptr : vec)
    {
        std::cout << "(" << data_ptr->get_data() << ")" << std::endl;
    }
    std::cout << "===============================================" << std::endl;
}

int main()
{
	//Creating a unique_ptr  of a vector of shared pointers to Test objects
    std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr;
    
    vec_ptr = make();
    
    std::cout << "How many data points do you want to enter? ";
    int num;
    std::cin >> num;
    fill(*vec_ptr, num); //dereference vec_ptr to get the vector that is being pointed to, and the number of elements
    
    display(*vec_ptr);
    
	return 0;
}