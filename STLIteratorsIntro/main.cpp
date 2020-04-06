//The Standard Template Library (STL) - Introduction to STL Iterators

/*
 * Iterators
 * -Allows abstracting an arbitrary container as a sequence of elements
 * -They are objects that work like pointers by design
 * -Most container classes can be traversed with iterators
 * 
 * Declaring Iterators
 * -Iterators must be declared based on the container type they will iterate over
 *      container_type::iterator_type iterator_name;
 * 
 *      Examples of Iterator Objects
 *      std::vector<int>::iterator it1;
 *      std::list<std::string>::iterator it2;
 *      std::map<std::string, std::string>::iterator it3;
 *      std::set<char>::iterator it4;
 * 
 * Iterator begin and end methods
 * 
 *      std::vector<int> vec {1, 2, 3};
 *      1 (vec.begin() first element) 2 3 (vec.end() location AFTER last element)
 * 
 * Declaring Iterators
 *      std::set<char> suits {'C', 'H', 'S', 'D'};
 * 
 *      suits.begin() will return an iterator to the first element in the set
 *      suits.end() will return an iterator one past the last element in set
 * 
 * Initializing Iterators
 *      std::vector<int> vec {1, 2, 3};
 * 
 *      //Declare an iterator named it and then initialize it to point to the first element in the vector
 *      std::vector<int>::iterator it = vec.begin();
 *      -or-
 *      //We can use auto to let the compiler deduce the type of the iterator
 *      auto it = vec.begin()
 * 
 * Operations with Iterators (it)
 *  ++it        -Pre-increment (All)
 *  it++        -Post-increment (All)
 *  it = it1    -Assignement (All)
 *  *it         -Dereference (Input and Output)
 *  it->        -Arrow operator (Input and Output)
 *  it = it1    -Comparison for equality (Input)
 *  it != it1   -Comparison for equality (Input)
 *  --it        -Pre-decrement (Bidirectional)
 *  it--        -Post-decremeent (Bidirectional)
 *  it + i, it += i, it - i, it -= i
 *              -Increment and decrement (Random Access)
 *  it < it1, it <= it1, it > it1, it >= it1
 *              -Comparison (Random Access)
 * 
 * Using Iterators - std::vector (using while loop)
 * 
 *      std::vector<int> vec {1, 2, 3};
 *      std::vector<int>::iterator it = vec.begin();
 * 
 *      while(it != vec.end())
 *      {
 *          std::cout << *it << " ";
 *          ++it;
 *      }
 * 
 *       //1 2 3
 * 
 * A range based for loop gets turned into an iterator by the compiler.
 * Iterators are needed because other types of containers do not allow you to randomly access
 * elements within the container.
 * 
 * Using Iterators - std::vector (using for loop)
 * 
 *      std::vector<int> vec {1, 2, 3};
 * 
 *      for(auto it = vec.begin(); it != vec.end(); it++)
 *      {
 *          std::cout << *it << " ";
 *      }
 * 
 *      //1 2 3
 * 
 * -This is how the range-based for loop works
 * 
 * Using Iterators - std::set
 * 
 *      std::set<char> suits {'C', 'H', 'S', 'D'};
 * 
 *      auto it = suits.begin();
 *      
 *      while(it != suits.end())
 *      {
 *          std::cout << *it << " " << std::endl;
 *          ++it;
 *      }
 * 
 *      //C H S D
 * 
 * Reverse Iterators
 * -Works in referse
 * -Last element is the first and the first is the last
 * -++moves backward, --moves forward
 * 
 *      std::vector<int> vec {1, 2, 3};
 *      std::vector<int>::reverse_iterator it = vec.rbegin();
 *      
 *      while(it != vec.rend())
 *      {
 *          std::cout << *it << " ";
 *          ++it;
 *      }
 * 
 *      //3 2 1
 * 
 * Other Iterators
 * -begin() and end()
 *      -iterator
 * -cbegin() and cend()
 *      -const_iterator
 * -rbegin() and rend()
 *      -reverse_iterator
 * -crbegin() and crend()
 *      -const_reverse_iterator
 * 
 * These return specific types of iterators
 * 
 * */

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>

//Display any vector of integers using a range based for loop
void display(const std::vector<int> &vec)
{
    std::cout << "[ ";
    for(auto const &item : vec)
    {
        std::cout << item << " ";
    }
    std::cout << "]" << std::endl;
}

//Uses an iterator to navigate through the vector container (iterators are objects that work similar to pointers, but are not pointers)
void test1()
{
    std::cout << "\n====================================" << std::endl;
    std::vector<int> nums1 {1, 2, 3, 4, 5};
    auto it = nums1.begin();  //point to 1
    std::cout << *it << std::endl;
    
    it++;  //point to 2
    std::cout << *it << std::endl;
    
    it += 2;  //point to 4
    std::cout << *it << std::endl;
    
    it -=2;  //point to 2
    std::cout << *it << std::endl;
    
    it = nums1.end() - 1;  //point to 5
    std::cout << *it << std::endl;
}

//Display all vector elements using an iterator
void test2()
{
    std::cout << "\n======================================" << std::endl;
    std::vector<int> nums1 {1, 2, 3, 4, 5};
    
    std::vector<int>::iterator it = nums1.begin();
    while(it != nums1.end())
    {
        std::cout << *it << std::endl;
        it++;
    }
    
    //change all vector elements to 0
    it = nums1.begin();
    while(it != nums1.end())
    {
        *it = 0;
        it++;
    }
    
    display(nums1);
}

//Using a const iterator
void test3()
{
    std::cout << "\n============================================" << std::endl;
    std::vector<int> nums1 {1, 2, 3, 4, 5};
    
    std::vector<int>::const_iterator it1 = nums1.begin();  //or auto it1 = nums1.cbegin();
    
    while(it1 != nums1.end())
    {
        std::cout << *it1 << std::endl;
        it1++;
    }
    
    //compiler error when we try to change element
    it1 = nums1.begin();
    while(it1 != nums1.end())
    {
        //*it1 = 0;  //compiler error - read only
        it1++;
    }
}

//Using a Reverse Iterator
void test4()
{
    std::vector<int> vec {1, 2, 3, 4};
    auto it1 = vec.rbegin();  //Reverse iterator over vector of ints starts at 4
    while(it1 != vec.rend())
    {
        std::cout << *it1 << std::endl;
        it1++;
    }
    
    //const reverse iterator over a list
    std::list<std::string> name {"Larry", "Moe", "Curly"};
    auto it2 = name.crbegin();  //Iterator over list of strings point to Curly
    std::cout << *it2 << std::endl;
    it2++; //Point to Moe
    std::cout << *it2 << std::endl;
    
    //Iterator over map
    /*
     * A Map has a Key and a Value with a Class called std::pair
     * The first item in the std::pair is called first and the second item
     * is called second
     * Creates an association between two pairs
     * */
    std::map<std::string, std::string> favorites
    {
        {"Frank", "C++"},
        {"Bill", "Java"},
        {"James", "Haskell"}
    };
    auto it3 = favorites.begin(); //Iterator over map of string, string pairs
    while(it3 != favorites.end())
    {
        std::cout << it3->first << " : " << it3->second << std::endl;
        it3++;
    }
}

//Iterate over a subset of a container
void test5 ()
{
    std::vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto start = vec.begin() + 2;
    auto finish = vec.end() - 3;
    
    while(start != finish)
    {
        std::cout << *start << std::endl;
        start++;
    }
}

int main()
{
	test1();
    test2();
    test3();
    test4();
    test5();
    
	return 0;
}
