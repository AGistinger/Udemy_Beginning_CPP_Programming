//The Standard Template Library (STL) - Sequence Container - Array

#include <iostream>
#include <array>
#include <algorithm>
#include <numeric> //for algorithms like accumulate

//Display the array -- note the size MUST be included when passing a std::array to a function
void display(const std::array<int, 5> &arr)
{
    std::cout << "[ ";
    for(const int element : arr)
    {
        std::cout << element << " ";
    }
    std::cout << "]" << std::endl;
}

void test1()
{
    std::cout <<  "\nTest1=================================" << std::endl;
    //Creating 2 arrays the 2nd one is not initialized
    std::array<int, 5> arr1 {1, 2, 3, 4, 5}; //double {{}} if C++11
    std::array<int, 5> arr2;
    
    display(arr1);
    display(arr2); //Elements are not initialized (contain 'garbage')
    
    //Assigning the values of arr2
    arr2 = {10, 20, 30, 40, 50};
    
    display(arr1);
    display(arr2);
    
    //Displaying the .size() of both the arrays
    std::cout << "Size of arr1 is: " << arr1.size() << std::endl; //5
    std::cout << "Size of arr2 is: " << arr2.size() << std::endl; //5
    
    //Changing the values of elements in arr1
    arr1[0] = 1000;
    arr1.at(1) = 2000;
    display(arr1);
    
    //Displaying the front and back of arr2
    std::cout << "Front of arr2: " << arr2.front() << std::endl; //10
    std::cout << "Back of arr2: " << arr2.back() << std::endl; //50
}

void test2()
{
    std::cout << "\nTest2=======================================" << std::endl;
    
    std::array<int, 5> arr1 {1, 2, 3, 4, 5}; //double {{}} is C++11
    std::array<int, 5> arr2 {10, 20, 30, 40, 50};
    
    display(arr1);
    display(arr2);
    
    //Uses fill method to fill the entire array with 0's
    arr1.fill(0);
    
    display(arr1);
    display(arr2);
    
    //Uses swap method to swap the elements in the containers
    arr1.swap(arr2);
    
    display(arr1);
    display(arr2);
}

void test3()
{
    std::cout << "\nTest3=========================================" << std::endl;
    
    std::array<int, 5> arr1 {1, 2, 3, 4, 5};  //double {{}} for C++11
    
    int *ptr = arr1.data();  //The data method returns the raw pointer address to the first element in the raw array
    std::cout << ptr << std::endl;
    *ptr = 10000; //changes the first element in the array to 1000
    
    display(arr1);
}

void test4()
{
    std::cout << "\nTest4=========================================" << std::endl;
    
    std::array<int, 5> arr1 {2, 1, 4, 5, 3}; //double {{}} for C++11
    display(arr1);
    
    std::sort(arr1.begin(), arr1.end());  //sort function that expects 2 iterators
    display(arr1);
}

void test5()
{
    std::cout << "\nTest5=====================================" << std::endl;
    
    std::array<int, 5> arr1 {2, 1, 4, 5, 3}; //double {{}} for C++11
    
    //algorithm min_element/max_element expects 2 iterators, will search the array for the min/max element and return 
    //an iterator to the min/max element (dereference iterators to get the min/max numbers)
    std::array<int, 5>::iterator min_num = std::min_element(arr1.begin(), arr1.end());
    std::array<int, 5>::iterator max_num = std::max_element(arr1.begin(), arr1.end());
    
    std::cout << "min: " << *min_num << " , max: " << *max_num << std::endl;
}

void test6()
{
    std::cout << "\nTest6========================================" << std::endl;
    
    std::array<int, 5> arr1 {2, 1, 3, 3, 5}; //double {{}} for C++11
    
    //adjacent_find algorithm - searches through a container and returns the first occurrence of 2 adjacent values
    //The two adjacent values are compared using (overloaded == operator for custom classes), returns an iterator
    std::array<int, 5>::iterator adjacent = std::adjacent_find(arr1.begin(), arr1.end());
    if(adjacent != arr1.end())
    {
        std::cout << "Adjacent element found with value: " << *adjacent << std::endl;
    }
    else
    {
        std::cout << "No adjacent elements found" << std::endl;
    }
}

void test7()
{
    std::cout << "\nTest7============================================" << std::endl;
    
    //accumulate is from #include <numeric>
    std::array<int, 5> arr1 {1, 2, 3, 4, 5};  //double {{}} for C++11
    
    //accumulate algorithm - expects 2 iterators (from/to) and what number to start from
    //all the types used for the accumulate must be the same 
    int sum = std::accumulate(arr1.begin(), arr1.end(), 0);
    std::cout << "Sum of the elements in arr1 is: " << sum << std::endl;
}

void test8()
{
    std::cout << "\nTest8========================================" << std::endl;
    
    std::array<int, 10> arr1 {1, 2, 3, 1, 2, 3, 3, 3, 3, 3};
    
    //count algorithm - expects 2 iterators (from/to) and number to count
    //counts how many times the number is found
    int count = std::count(arr1.begin(), arr1.end(), 3);
    std::cout << "Found 3: " << count << " times" << std::endl;
}

void test9()
{
    std::cout << "\nTest9=========================================" << std::endl;
    
    std::array<int, 10> arr1 {1, 2, 3, 50, 60, 70, 80, 200, 300, 400};
    
    //find how many numbers are between 10 and 200 -> 50, 60, 70, 80
    //count_if algorithm - expects 2 iterators (from/to) and a function that returns a true/false value
    int count = std::count_if(arr1.begin(), arr1.end(), 
                            [] (int x)
                            {
                                return x > 10 && x < 200;
                            });
    
    std::cout << "Found " << count << " matches" << std::endl;
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
    
	return 0;
}
