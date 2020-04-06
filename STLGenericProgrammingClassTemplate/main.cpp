//The Standard Template Library (STL) - Generic Programming with Class Templates

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

//Template classes are typically copletely contained in header files
//So, we would have the template class in item.h and no item.cpp file would be used
//This is because this is a blueprint and not compiled

template <typename T>
class Item
{
private:
    std::string name;
    T value;
public:
    Item(std::string name, T value)
        : name{name}, value{value}
        {
            
        }
        
    std::string get_name() const { return name; }
    T get_value() const { return value; }
};

template <typename T1, typename T2>
struct My_Pair
{
    T1 first;
    T2 second;
};

int main()
{
    //The item1 object value is set to be an integer
	Item<int> item1 {"Frank", 100};
    std::cout << item1.get_name() << " " << item1.get_value() << std::endl;
    
    //The item2 object value is set to be a std::string
    Item<std::string> item2 {"Frank", "Professor"};
    std::cout << item2.get_name() << " " << item2.get_value() << std::endl;
    
    //The item3 object value is set to another Item class with the value being a string
    Item<Item<std::string>> item3 {"Frank", {"C++", "Professor"}};
    std::cout << item3.get_name() << " " << item3.get_value().get_name() << " "
              << item3.get_value().get_value() << std::endl;
              
    std::cout << "\n================================================================" << std::endl;
    //Creating a vector of the Item class objects
    std::vector<Item<double>> vec {};
    vec.push_back(Item<double>("Larry", 100.0));
    vec.push_back(Item<double>("Moe", 200.0));
    vec.push_back(Item<double>("Curly", 300.0));
    
    std::cout << std::setprecision(1) << std::fixed;
    for(const auto &item : vec)
    {
        std::cout << item.get_name() << " " << item.get_value() << std::endl;
    }
    
    std::cout << "\n==============================================================" << std::endl;
    My_Pair<std::string, int> p1 {"Frank", 100};
    My_Pair<int, double> p2 {124, 13.6};
    
    std::cout << p1.first << ", " << p1.second << std::endl;
    std::cout << p2.first << ", " << p2.second << std::endl;
    
    std::cout << std::endl;
	return 0;
}
