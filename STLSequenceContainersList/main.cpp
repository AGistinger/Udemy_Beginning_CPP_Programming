//The Standard Template Library (STL) - Sequence Containers - List and Forward List

#include <iostream>
#include <list>
#include <algorithm>
#include <iterator> //for std::advance

using namespace std;

//Class for person
class Person
{
  //Overloaded << operator
  friend ostream &operator<<(ostream &out, const Person &p);

private:
    string name;
    int age;

public:
    //Default Constructor
    Person()
        : name{"Unknown"}, age{0}
        {
            
        }
    
    //Overloaded Constructor
    Person(string name, int age)
        : name{name}, age{age}
        {
            
        }
    
    //Overloaded Operator <
    bool operator<(const Person &rhs) const
    {
        return this->age < rhs.age;
    }
    
    //Overloaded Operator ==
    bool operator==(const Person &rhs) const
    {
        return (this->name == rhs.name && this->age == rhs.age);
    }
};

//Overloaded Operator << (friend)
ostream &operator<<(ostream &out, const Person &p)
{
    out << p.name << ":" << p.age;
    return out;
}

//Template Function to display any kind of list
template <typename T>
void display(const list<T> &l)
{
    cout << "[ ";
    for(const T &element : l)
    {
        cout << element << " ";
    }
    cout << "]" << endl;
}

//Adding objects to a list
void test1()
{
    cout << "\nTest1===================================" << endl;
    
    //Initializing a list of ints
    list<int> l1 {1, 2, 3, 4, 5};
    display(l1);
    
    //Using push_back() and push_front() methods
    list<string> l2;
    l2.push_back("Back");
    l2.push_front("Front");
    display(l2);
    
    //Initializing a list of ints
    list<int> l3;
    l3 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(l3);
    
    //Initializing a list of ints to ten 100's
    list<int> l4 (10, 100);
    display(l4);
}

//Functions to find front(), back(), clear(), and size()
void test2()
{
    cout << "\nTest2===================================" << endl;
    
    //Initalizing a list of ints
    list<int> l {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(l);
    
    //Displaying the size of the list
    cout << "Size: " << l.size() << endl;
    
    //Displaying the front and back of the list
    cout << "Front: " << l.front() << endl;
    cout << "Back: " << l.back() << endl;
    
    //Clearing the list
    l.clear();
    display(l);
    cout << "Size: " << l.size() << endl;
}

//Resizing lists
void test3()
{
    cout << "\nTest3===================================" << endl;
    
    list<int> l {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(l);
    
    //Reducing size of list removes elements outside of the size
    l.resize(5);
    display(l);
    
    //Increasing size of list adds additional default elements to the list
    l.resize(10);
    display(l);
    
    list<Person> persons;
    persons.resize(5);  //uses the Person default constructor
    display(persons);
}

//Inserting elements into a list
void test4()
{
    cout << "\nTest4===================================" << endl;
    
    list<int> l {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(l);
    
    //Created an iterator pointing to 5 in the list
    list<int>::iterator it = find(l.begin(), l.end(), 5);
    
    //Checking if the iterator is not the end of the list and inserting 100 before the 5
    if(it != l.end())
    {
        l.insert(it, 100);
    }
    display(l);
    
    list<int> l2 {1000, 2000, 3000};
    
    //inserting all of l2 into l before the iterator (5)
    l.insert(it, l2.begin(), l2.end());
    display(l);
    
    //advance takes the iterator and what you want to change the iterator by
    advance(it, -4);  //point to 100
    cout << *it << endl;
    
    l.erase(it);  //remove the 100 - iterator becomes invalid
    display(l);
}

//Using Emplace methods to add objects to the list
void test5()
{
    cout << "\nTest5===================================" << endl;
    
    //Creating a list of Person objects
    list<Person> stooges
    {
        {"Larry", 18},
        {"Moe", 25},
        {"Curly", 17}
    };
    display(stooges);
    
    string name;
    int age;
    cout << "\nEnter the name of the next stooge: ";
    getline(cin, name);
    cout << "Enter their age: ";
    cin >> age;
    
    //Using Emplace back method to add a new object to the list
    stooges.emplace_back(name, age);
    display(stooges);
    
    //Insert Frank before Moe
    list<Person>::iterator it = find(stooges.begin(), stooges.end(), Person{"Moe", 25});
    if(it != stooges.end())
    {
        stooges.emplace(it, "Frank", 18);
    }
    display(stooges);    
}

//Using the sort() method, uses operator <
void test6()
{
    cout << "\nTest6===================================" << endl;
    
    list<Person> stooges
    {
        {"Larry", 18},
        {"Moe", 25},
        {"Curly", 17}
    };
    
    display(stooges);
    stooges.sort();
    display(stooges);
}

int main()
{
	test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    
	return 0;
}
