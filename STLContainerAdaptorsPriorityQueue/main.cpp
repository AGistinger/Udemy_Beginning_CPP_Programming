//The Standard Template Library (STL) - Container Adaptors - Priority Queue

#include <iostream>
#include <queue>
#include <string>

using namespace std;

class Person
{
    friend ostream &operator<<(ostream &out, const Person &p);
private:
    string name;
    int age;
public:
    Person() : name{"Unknown"}, age{0} {}
    Person(string name, int age)
        : name{name}, age{age} {}
    bool operator<(const Person &rhs) const
    {
        return this->age < rhs.age;
        //return this->name < rhs.name;
    }
    bool operator==(const Person &rhs) const
    {
        return (this->name == rhs.name &&this->age == rhs.age);
    }
};

ostream &operator<<(ostream &out, const Person &p)
{
    out << p.name << ":" << p.age;
    return out;
}

/*
 * This displays the priority queue by
 * repeatedly topping and popping the priority queue
 * It is beign passed by value so we don't modify the 
 * priority queue being passed in
 * */
 template <typename T>
 void display(priority_queue<T> pq)
 {
     cout << "[";
     while(!pq.empty())
     {
         T elem = pq.top();
         pq.pop();
         cout << elem << " ";
     }
     cout << "]" << endl;
 }
 
 //Shows the priority_queue ordering largest to smallest
 void test1()
 {
     cout << "\nTest1================================================" << endl;
     
     priority_queue<int> pq;
     for(int i : {3, 5, 7, 12, 23, 12, 4, 100, 0, 3, 5, 7})
     {
         pq.push(i);
     }
     
     cout << "Size: " << pq.size() << endl;
     cout << "Top: " << pq.top() << endl;
     
     pq.pop();
     display(pq);
 }
 
 void test2()
 {
     cout << "\nTest2===============================================" << endl;
     
     priority_queue<Person> pq;
     pq.push(Person{"A", 10});
     pq.push(Person{"B", 1});
     pq.push(Person{"C", 14});
     pq.push(Person{"D", 18});
     pq.push(Person{"E", 7});
     pq.push(Person{"F", 27});
     
     display(pq);
 }

int main()
{
	test1();
    test2();
    
    cout << endl;
	return 0;
}
