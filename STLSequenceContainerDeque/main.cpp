//The Standard Template Library (STL) - Sequence Containers - Deque

#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

using namespace std;

//Template function to display any deque
template <typename T>
void display(const deque<T> &d)
{
    cout << "[ ";
    for(const T element : d)
    {
        cout << element << " ";
    }
    cout << "]" << endl;
}

//The idea for a deque is you are generally using the front of it or the back of it
//You aren't normally inserting things into the middle of it, if you need to do that you should use a list
void test1()
{
    cout << "\nTest1====================================" << endl;
    
    deque<int> d {1, 2, 3, 4, 5};
    display(d);
    
    d = {2, 4, 5, 6};
    display(d);
    
    deque<int> d1 (10, 100);  //ten 100s in the deque
    display(d1);
    
    d[0] = 100;  //using sub-script operator to set location 0 to 100
    d.at(1) = 200;  //using .at() method to set 1 to 200
    display(d);
}

//push and pops
void test2()
{
    cout << "\nTest2====================================" << endl;
    
    deque<int> d {0, 0, 0};
    display(d);
    
    d.push_back(10);
    d.push_back(20);
    display(d);
    
    d.push_front(100);
    d.push_front(200);
    display(d);
    
    cout << "Front: " << d.front() << endl;
    cout << "Back: " << d.back() << endl;
    cout << "Size: " << d.size() << endl;
    
    d.pop_back();  //remove one element from the back
    d.pop_front();  //remove one element from the front
    display(d);
}

//Insert all even numbers into the back of a deque and 
//all odd numbers at the front
void test3()
{
    cout << "\nTest3====================================" << endl;
    
    vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque<int> d {0};
    
    for(const int &element : vec)
    {
        if(element % 2 == 0)
        {
            d.push_back(element);
        }
        else
        {
            d.push_front(element);
        }
    }
    display(d);
}

//push front vs back ordering
void test4()
{
    cout << "\nTest4====================================" << endl;
    
    vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque<int> d {};
    
    for(const int &element : vec)
    {
        d.push_front(element);  //push all elements from the vector to the front of the deque
    }
    
    display(d);
    d.clear();  //delete everything within the deque
    
    for(const int &element : vec)
    {
        d.push_back(element);  //push all elements from the vector to the back of the deque
    }
    
    display(d);
}

//Same as test4 using std::copy
void test5()
{
    cout << "\nTest5====================================" << endl;
    
    vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque<int> d {};
    
    //Uses copy method (expects copy from(start/end) and copy to(front_inserter(container))
    copy(vec.begin(), vec.end(), front_inserter(d));
    display(d);
    
    d.clear();  //delete everything within the deque
    
    //Uses copy method (expects copy from(start/end) and copy to(back_inserter(container))
    copy(vec.begin(), vec.end(), back_inserter(d));
    display(d);
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
