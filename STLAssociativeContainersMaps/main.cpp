//The Standard Template Library (STL) - Associative Containers - Maps

#include <iostream>
#include <map>
#include <set>

using namespace std;

void display(const std::map<string, set<int>> &m)
{
    cout << "[ ";
    for(const pair<string, set<int>> &element : m)
    {
        cout << element.first << ": [";
        for(const int &set_element : element.second)
        {
            cout << set_element << " ";
        }
        cout << "] ";
    }
    cout << " ] " << endl;
}

template <typename T1, typename T2>
void display(const map<T1, T2> &l)
{
    cout << "[ ";
    for(const pair<T1, T2> &element : l)
    {
        cout << element.first << ": " << element.second << " ";
    }
    cout << "] " << endl;
}

/*
 * Maps
 * map<string, int>
 * Insert methods for adding elements to the Map
 * Common methods for Map
 * */
void test1()
{
    cout << "\nTest1==============================================" << endl;
    
    //Created a map of string(key) / int(value) pairs
    map<string, int> m
    {
        {"Larry", 3},
        {"Moe", 1},
        {"Curly", 2}
    };
    display(m);
    
    //inserting a pair into the map
    m.insert(pair<string, int> ("Anna", 10));
    display(m);
    
    //inserting a pair into the map using the make_pair() function
    m.insert(make_pair("Joe", 5));
    display(m);
    
    //inserting a pair into the map using the subscript operator
    m["Frank"] = 18;
    display(m);
    
    //adds 10 to the int value assigned to Frank
    m["Frank"] += 10;
    display(m);
    
    //erase Frank from the map
    m.erase("Frank");
    display(m);
    
    cout << "Count for Joe: " << m.count("Joe") << endl;  //1 - Joe exists
    cout << "Count for Frank: " << m.count("Frank") << endl;  //0 - Frank doesn't exist
    
    //Creates an iterator to a pair
    map<string, int>::iterator it = m.find("Larry");
    if(it != m.end())
    {
        cout << "Found: " << it->first << " : " << it->second << endl;
    }
    
    m.clear(); //delete all elements
    display(m); //empty
}

/*
 * Maps
 * map<string, set<int>>
 * using methods for interacting with a map of sets
 * */
void test2()
{
    cout << "\nTest2========================================" << endl;
    
    //map of string(key) and set<int>(values)
    map<string, set<int>> grades
    {
        {"Larry", {100, 90}},
        {"Moe", {94}},
        {"Curly", {80, 90, 100}}
    };
    
    display(grades);
    
    grades["Larry"].insert(95);  //insert 95 into the set of grades for Larry
    display(grades);
    
    //Creates an iterator to the pair found by the find method
    map<string, set<int>>::iterator it = grades.find("Moe"); 
    
    if(it != grades.end())  //found "Moe"
    {
        it->second.insert(1000);  //insert 1000 into Moe's set of scores
    }                             //it->first (key), it->second (value)
    display(grades);
}

int main()
{
	test1();
    test2();
    
    cout << endl;
	return 0;
}
