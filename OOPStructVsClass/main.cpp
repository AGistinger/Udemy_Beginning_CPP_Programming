// Object Oriented Programming - Structs vs Classes

/*
 * Structs (structures) vs. Classes
 * -In addition to define a class e can declare a struct
 * -struct comes from the c programming language
 * -Essentially the same as a class except
 *  -members of a struct are public by default
 *  -members of a class are private by default
 * 
 * Ex) class
 * class Person {
 *  std::string name;
 *  std::string get_name;
 * };
 * 
 * Person p;
 * p.name = "Frank"; //compiler error - private
 * std::cout << p.get_name();; //compiler error - private
 * 
 * Ex) struct
 * struct Person {
 *  std::string name;
 *  std::string get_name(); //why if name is public?
 * };
 * 
 * Person p;
 * p.name = "Frank"; //OK - public
 * std::cout << p.get_name(); //OK -public
 * 
 * General Usage Guidlines for structs
 * -struct
 *  -use struct for passive objects with public access
 *  -Don't declare methods in struct
 *  -holds data and that data is public
 * 
 * -class
 *  -Use class for active objects with private access
 *  -Implement getters/setters as needed
 *  -Implement member methods as needed
 * 
 * Don't use a struct and then make everything private in the struct
 * so it behaves like a class, use a class for that.
 * 
 * */

#include <iostream>


int main() {
    
    
    
    return 0;
}
