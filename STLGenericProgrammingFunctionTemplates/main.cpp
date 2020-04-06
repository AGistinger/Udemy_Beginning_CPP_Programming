//The Standard Template Library (STL) - Generic Programming with Function Templates

#include <iostream>
#include <string>

//Template function that will determine which argument is smaller
template <typename T>
T min(T a, T b)
{
    return (a < b) ? a : b;
}

//Template function that will print out two parameters
template <typename T1, typename T2>
void func(T1 a, T2 b)
{
    std::cout << a << " " << b << std::endl;
}

//structure (public attributes)
struct Person
{
    std::string name;
    int age;
    
    //Overloaded (<) operator (bool operator, needs object by reference) const don't modify
    bool operator<(const Person &rhs) const
    {
        return this->age < rhs.age;
    }
};

//Overloaded insertion operator for Person
std::ostream &operator<<(std::ostream &out, const Person &p)
{
    out << p.name;
    return out;
}

//Template function that will swap two arguments
template<typename T>
void my_swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    
    int x {100};
    int y {200};
    func(x, y);
    my_swap(x, y);
    func(x, y);
    
    
    Person p1 {"Curly", 50};
    Person p2 {"Moe", 30};
    Person p3 = min(p1, p2);
    std::cout << p3.name << " is younger" << std::endl;
    func(p1, p2);
    
	std::cout << min<int>(2, 3) << std::endl;  //2
    std::cout << min(2, 3) << std::endl;  //2
    std::cout << min('A', 'B') << std::endl;  //A
    std::cout << min(12.5, 9.2) << std::endl;  //9.2
    std::cout << min(5 + 2 * 2, 7 + 40) << std::endl;  //9
    
    func<int, int>(10, 20);
    func(10, 20);
    func<char, double>('A', 12.4);
    func('A', 12.4);
    func(1000, "Testing");
    func(2000, std::string{"Frank"});
    
	return 0;
}
