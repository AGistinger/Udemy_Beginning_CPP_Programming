//The Standard Template Library (STL) - Introduction to STL Containers

/*
 * Containers:
 * -Data structures that can store object of almsot any type
 *      -Template-based classes
 * -Each Container ahs member functions
 *      -Some are specific to the container
 *      -Others are available to all containers
 * -Each container has an associated header file
 *      -#include<container_type>
 *      -Examples are:
 *          #include <vector>
 *          #include <string>
 * 
 * Common Methods Used by STL -Containers
 *     Default constructor - initializes an empty container
 *      Overloaded constructors - Initializes containers with many options
 *      Copy constructor - Initalizes a container as a copy of antoher container
 *      Move constructor - Moves existing container to new container
 *      Destructor - Destroys a container
 *      Copy assignment (operator=) - Copy one container to another
 *      Move assignment (operator=) - Move one container to another
 *      size - Returns the number of elements in the container
 *      empty - Returns boolean - is the container empty?
 *      insert - Insert an element into the container
 *      operator< and operator<= - Returns boolean - compare contents of 2 containers
 *      operator> and operator>= - Returns boolean - compare contents of 2 containers
 *      operator == and operator!= - Returns boolean - are the contents of 2 containers equal or not
 *      swap - Swap the elements of 2 containers
 *      erase - Remove element(s) froma  container
 *      clear - Remove all elements from a container
 *      begin and end - Returns iterators to the first element or end
 *      rbegin and rend - Returns reverse iterators to first element or end
 *      cbegin and cend - Returns constant iterators to first element or end
 *      crbegin and crend - Returns constant reverse iterators to the first element and end
 * 
 * Container Elements
 * -What types of elements can we store in containers?
 *  -A copy of the element will be stored in the container
 *      -All primitives OK
 *  -Element should be:
 *      -Copyable and assignable (copy constructor / copy assignment)
 *      -Moveable for efficiency (move constructor / move assignment)
 *  -Ordered associative containers must be able to compare elements
 *      -operator<, operator==
 * 
 * */

#include <iostream>

int main()
{
	std::cout << "Hello World" << std::endl;
    
	return 0;
}
