//The Standard Template Library (STL) - Sequence Containers - Vector

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//Person Class (always overload the < and == operators when using the STL with a custom class)
class Person
{
  friend ostream &operator<<(ostream &out, const Person &p);
private:
    string name;
    int age;
public:
    Person() = default;
    Person(string name, int age)
        : name{name}, age{age}
        {
            
        }
    
    bool operator<(const Person &rhs) const
    {
        return this->age < rhs.age;
    }
    
    bool operator==(const Person &rhs) const
    {
        return(this->name == rhs.name && this->age == rhs.age);
    }
};

ostream &operator<<(ostream &out, const Person &p)
{
    out << p.name << " : " << p.age;
    return out;
}

//Use for_each (expects 2 iterators (from/to) and a lambda expression to display vector elements
void display2(const vector<int> &vec)
{
    cout << "[";
    for_each(vec.begin(), vec.end(),
        [] (int x)
            {
                cout << x << " ";
            });
    cout << "]" << endl;
}

//Template function to display any vector
template <typename T>
void display(const vector<T> &vec)
{
    cout << "[";
    for(const T &element : vec)
    {
        cout << element << " ";
    }
    cout << "]" << endl;
}

void test1()
{
    cout << "\nTest1================================" << endl;
    
    vector<int> vec {1, 2, 3, 4, 5};
    display(vec);
    
    vec = {2, 4, 5, 6};
    display2(vec);
    
    vector<int> vec1 (10, 100); //ten 100's in the vector, overloaded constructor that is part of the vector class
    display(vec1);
}

void test2()
{
    cout << "\nTest2=============================" << endl;
    
    vector<int> vec {1, 2, 3, 4, 5};
    display(vec);
    cout << "\nvec size: " << vec.size() << endl;
    cout << "vec max size: " << vec.max_size() << endl;
    cout << "vec capacity: " << vec.capacity() << endl;
    
    //adding an item to the vector will increase in size, and when you exceed the capacity the capacity will double
    vec.push_back(6);
    display(vec);
    cout << "\nvec size: " << vec.size() << endl;
    cout << "vec max size: " << vec.max_size() << endl;
    cout << "vec capacity: " << vec.capacity() << endl;
    
    //shrink_to_fit method - will shrink the storage allocated (capacity) to exactly the vector size
    vec.shrink_to_fit(); //C++11
    display(vec);
    cout << "\nvec size: " << vec.size() << endl;
    cout << "vec max size: " << vec.max_size() << endl;
    cout << "vec capacity: " << vec.capacity() << endl;
    
    //reserve method - will reserve x spaces of memory (changes capacity, won't expand until it goes past x capacity)
    vec.reserve(100);
    display(vec);
    cout << "\nvec size: " << vec.size() << endl;
    cout << "vec max size: " << vec.max_size() << endl;
    cout << "vec capacity: " << vec.capacity() << endl;
}

void test3()
{
    cout << "\nTest3=============================" << endl;
    
    vector<int> vec {1, 2, 3, 4, 5};
    display(vec);
    
    vec[0] = 100;  //subscript operator does not do boundary checking
    vec.at(1) = 200; //.at() method has bounds checking, if you exceed bounds you get an exception
    
    display(vec);
}

void test4()
{
    cout << "\nTest4===============================" << endl;
    
    vector<Person> stooges {};
    Person p1 {"Larry", 18};
    display(stooges);
    
    stooges.push_back(p1);  //creates a copy of p1 and adds it to the back of the vector
    display(stooges);
    
    stooges.push_back(Person{"Moe", 25});  //calls the push_back method with a un-named Person object (calls the Person constructor) and Move into the back of vector
    display(stooges);
    
    stooges.emplace_back("Curly", 30);  //emplace_back method expects the parameters/arguments (calls constructor) of the object and Move/pushes back to the vector
    display(stooges);
}

void test5()
{
    cout << "\nTest5==============================" << endl;
    
    vector<Person> stooges
    {
        {"Larry", 18},
        {"Moe", 25},
        {"Curly", 30}
    };
    
    display(stooges);
    cout << "\nFront: " << stooges.front() << endl;  //front() method - returns a reference to the first element
    cout << "Back: " << stooges.back() << endl;  //back() method - returns a reference ot the last element
    
    //pop_back() method - Removes the element from the back/last of the vector
    stooges.pop_back();
    display(stooges);
}

void test6()
{
    cout << "\nTest6===============================" << endl;
    
    vector<int> vec {1, 2, 3, 4, 5};
    display(vec);
    
    vec.clear();  //remove all elements
    display(vec);
    
    vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(vec);
    
    //erase method - expects 2 iterators (start/stop) - erases the elements in between the two iterators
    vec.erase(vec.begin(), vec.begin() + 2);
    display(vec);
    
    vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    //Erase all even numbers
    /*
     * created an iterator to the beginning of the vector
     * created a while loop to loop through the vector to the end of the vector
     * checking if the number is even, erases the even number, if not even increments the iterator
     * */
    vector<int>::iterator it = vec.begin();
    while(it != vec.end())
    {
        if(*it % 2 == 0)
        {
            it = vec.erase(it);
        }
        else
        {
            it++;  //only increment if not erased
        }
    }
    display(vec);
}

void test7()
{
    cout << "\nTest7==================================" << endl;
    
    vector<int> vec1 {1, 2, 3, 4, 5};
    vector<int> vec2 {10, 20, 30, 40, 50};
    
    display(vec1);
    display(vec2);
    cout << endl;
    
    vec2.swap(vec1); //swaps elements between 2 vectors of the same type, but can be different sizes
    display(vec1);
    display(vec2);
}

void test8()
{
    cout << "\nTest8================================" << endl;
    
    vector<int> vec1 {1, 21, 3, 40, 12};
    
    display(vec1);
    
    //sort method - expects 2 iterators (start/end)
    sort(vec1.begin(), vec1.end());
    display(vec1);
}

void test9()
{
    /*
     * back_inserter method constructs a back-insert iterator that inserts new elements
     * at the end of the container its applied to.  It's a special output iterator, that is very efficient.
     * There is also a front_inserter we can use with deques and lists.
     * Copy one list to another using the iterator and back_inserter
     * */
     
     cout << "\nTest9=================================" << endl;
     
     vector<int> vec1 {1, 2, 3, 4, 5};
     vector<int> vec2 {10, 20};
     
     display(vec1);
     display(vec2);
     cout << endl;
     
     /*copy algorithm - expects 2 iterators (copy start/end), and copying to where
     *back_inserter (output iterator) - (expects a container) allows algorithms that usually overwrite elements,
     *(such as copy) to instead insert new elements automatically at the end of the container.
     */
     copy(vec1.begin(), vec1.end(), back_inserter(vec2));
     display(vec1);
     display(vec2);
     cout << endl;
     
     //Copy_if the element is even
     vec1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
     vec2 = {10, 20};
     
     display(vec1);
     display(vec2);
     cout << endl;
     
     //copy_if method - (expects 2 iterators copy from (start/end), where it is copying to(container), and the if function (boolean return))
     copy_if(vec1.begin(), vec1.end(), back_inserter(vec2),
            [] (int x)
            {
                return x % 2 == 0;
            });
    
    display(vec1);
    display(vec2);
}

void test10()
{
    cout << "\nTest10===============================" << endl;
    
    //transform over 2 ranges
    vector<int> vec1 {1, 2, 3, 4, 5};
    vector<int> vec2 {10, 20, 30, 40, 50};
    vector<int> vec3 {};
    
    //1*10, 2*20, 3*30, 4*40, 5*50 and stor the results in vec3
    //transform algorithm - (expects 2 iterators (start/end), the start of 2nd container (doesn't need end cause it won't go past first container),
    //where to transform to (container location), and what you are inserting (function)
    transform(vec1.begin(), vec1.end(), vec2.begin(), back_inserter(vec3),
                [] (int x, int y)
                {
                    return x * y;
                });
                
    display(vec3);
}

void test11()
{
    //insert vec2 into vec1 before the 5
    cout << "\nTest11==========================" << endl;
    
    vector<int> vec1 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> vec2 {100, 200, 300, 400};
    display(vec1);
    display(vec2);
    cout << endl;
    
    //A Iterator for a vector of ints that points to element 5 using the find method
    vector<int>::iterator it = find(vec1.begin(), vec1.end(), 5);
    
    /*
     * if the iterator does not equal the end of the container perform the insert method
     * insert method (expects an iterator to insert before and what it is inserting)
     * */
    if(it != vec1.end())
    {
        cout << "Inserting..." << endl;
        vec1.insert(it, vec2.begin(), vec2.end());
    }
    else
    {
        cout << "Sorry, 5 not found" << endl;
    }
    
    display(vec1);
}

int main()
{
	test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
    test9();
    test10();
    test11();
    
	return 0;
}
