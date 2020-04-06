//The Standard Template Library (STL) - Creating a Generic Array Template Class

/*
 * Note: Since C++11 the STL has std::array which is a template-based array class
 * Use std::array instead of raw arrays whenever possible
 * 
 * Note: That we can have non-type template parameters
 * That's what N is in this case
 * 
 * Note: We should be using std::array and std::vector and not use int array[] {}
 * The array class should be used if you know what size you need as it is more efficient
 * than using a vector.
 * 
 * */

#include <iostream>
#include <string>

//Creating a template to allow the user to change type and the size of the array (type = T) (size = N)
template <typename T, int N>
class Array
{
    //Overloaded Operator<< to display formatted output for Array class objects (friend needs to know the N template paramter)
    friend std::ostream &operator<<(std::ostream &out, const Array<T, N> &arr)
    {
        out << "[ ";
        for(const auto &val : arr.values)
        {
            out << val << " ";
        }
        out << "]" << std::endl;
        return out;
    }
    
private:
    int size {N};  //int N is determined by the template
    T values[N];  //The N needs to be known at compile-time!
    
public:
    Array() = default;
    
    //Constructor that sets all the values of the Array to the entered value
    Array(T init_val)
    {
        for(auto &item : values)
        {
            item = init_val;
        }
    }
    
    //Function that will change all the values of the array to what is passed into the function
    void fill(T val)
    {
        for(auto &item : values)
        {
            item = val;
        }
    }
    
    //Function to get size of Array
    int get_size() const
    {
        return size;
    }
    
    //Overlaoded subscript operator for easy use (returns the index location within values)
    //Must return a reference as array element can be put on the left side(this)
    T &operator[](int index)
    {
        return values[index];
    }
};

int main()
{
    //Create an Array object of size (5)
	Array<int, 5> nums;
    std::cout << "The size of nums is: " << nums.get_size() << std::endl;
    std::cout << nums << std::endl;
    
    //Uses fill method to make all the values 0
    nums.fill(0);
    std::cout << "The size of nums is: " << nums.get_size() << std::endl;
    std::cout << nums << std::endl;
    
    //Uses the fill method to make all the values 10
    nums.fill(10);
    std::cout << nums << std::endl;
    
    //Uses Overloaded sub-script operator [] to set values in Array object
    nums[0] = 1000;  //Will call nums.operator[0] = 1000;
    nums[3] = 2000;  //Will call nums.opeator[3] =  2000;
    std::cout << nums << std::endl;
    
    //Create an Array object of size (100) and values set to (1)
    Array<int, 100> nums2 {1};
    std::cout << "The size of nums2 is: " << nums2.get_size() << std::endl;
    std::cout << nums2 << std::endl;
    
    //Create an Array object of size (10) that holds std::string objects with default value of "Frank"
    Array<std::string, 10> strings (std::string {"Frank"});
    std::cout << "The size of strings is: " << strings.get_size() << std::endl;
    strings[0] = std::string {"Larry"};
    strings[8] = std::string {"Adrianne"};
    std::cout << strings << std::endl;
    
    strings.fill(std::string {"X"});
    std::cout << strings << std::endl;
    
	return 0;
}
