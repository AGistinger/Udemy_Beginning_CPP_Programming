//The Standard Template Library (STL) - Associative Containers - Sets

#include <iostream>
#include <iomanip>
#include <set>

using namespace std;

/*
 * Person class with overloaded constructor,
 * friend overloaded stream operator to display objects,
 * overloaded operators == and < for comparison
 * */
class Person
{
  friend ostream &operator<<(ostream &out, const Person &p);
private:
    string name;
    int age;
public:
    Person() : name{"Unkown"}, age{0} { }
    Person(string name, int age)
        : name{name}, age{age} { }
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
    out << p.name << ":" << p.age;
    return out;
}

/*
 * Template function to display any Type of set
 * */
template<typename T>
void display(const set<T> &l)
{
    cout << "[";
    for(const T &element : l)
    {
        cout << element << " ";
    }
    cout << "]" << endl;
}

/*
 * Sets
 * Using the common methods associated with sets
 * */
void test1()
{
     cout << "\nTest1=====================================" << endl;
     //Creates a set and initializes
     set<int> s1 {1, 4, 3, 5, 2};
     display(s1);
     
     //set will not save duplicate elements
     s1 = {1, 2, 3, 1, 1, 2, 2, 3, 3, 4, 5};
     display(s1);
     
     //Inserting elements into the set in order
     s1.insert(0);
     s1.insert(10);
     
     display(s1);
     
     //Checks to see if the argument is in the set or not
     if(s1.count(10))
     {
         cout << "10 is in the set" << endl;
     }
     else
     {
         cout << "10 is NOT in the set" << endl;
     }
     
     //Uses the sets find method to find the argument
     set<int>::iterator it = s1.find(5);
     if(it != s1.end())
     {
         cout << "Found: " << *it << endl;
     }
     
     //Deletes all elements in the set
     s1.clear();
}
 
 /*
  * Set
  * Using common methods associated with sets using custom class objects
  * */
void test2()
{
     cout << "\nTest2===========================================" << endl;
     set<Person> stooges
     {
         {"Larry", 1},
         {"Moe", 2},
         {"Curly", 3}
     };
     
     display(stooges);  //Note the order of display! using overloaded (< operator)
     
     stooges.emplace("James", 50);
     display(stooges);
     
     stooges.emplace("Frank", 50); //NO -- 50 already exists because of overloaded (< operator)
     display(stooges);
     
     //Uses find method to have the iterator point to the found object
     set<Person>::iterator it = stooges.find(Person{"Moe", 2});
     if(it != stooges.end())
     {
         stooges.erase(it);  //Moe will be erased
     }
     display(stooges);
     
     //Changes the iterator to the new found object using overloaded (< operator)
     it = stooges.find(Person("XXXX", 50));  //Uses (operator <) ignores name only uses age in this case
     
     if(it != stooges.end())
     {
        stooges.erase(it);  //Erases James 
     }
     display(stooges);
}

/*
 * Set
 * Inserting Data into set and showing Pairs
 * */
void test3()
{
    cout << "\nTest3============================================" << endl;
    
    set<string> s {"A", "B", "C"};
    display(s);
    
    //Create a pair and assign it to the result of inserting an object into the set
    pair<set<string>::iterator, bool> result = s.insert("D");
    display(s);
    
    cout << boolalpha;
    cout << "First:" << *(result.first) << endl;
    cout << "Second: " << result.second << endl;
    cout << endl;
    
    result = s.insert("A"); //A already exists bool will show false
    display(s);
    
    cout << boolalpha;
    cout << "First: " << *(result.first) << endl; //A already exists so iterator will point to pre-existing A
    cout << "Second: " << result.second << endl; //will show false as A could not be added already exists
}

int main()
{
    //How a Pair works
    cout << boolalpha; //prints (true/false)
    set<int> numbers {1, 2, 3, 4, 5}; //creates a set of numbers
	pair<set<int>::iterator, bool> result = numbers.insert(6); //creates a pair object and assigns it to the result of insertering 6 into the set
    cout << "numbers.first (" << *result.first << ") : numbers.second (" << result.second << ")" << endl; //prints out what the iterator is pointing to and the bool result of the insertion
    
    test1();
    test2();
    test3();
    
	return 0;
}
