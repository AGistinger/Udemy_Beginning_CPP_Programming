//Polymorphism - Pure Virtual Functions and Abstract Classes

#include <iostream>
#include <vector>

//Abstract Base Class - Shape
class Shape
{
private:
    //Attributes common to all shapes
public:
    virtual void draw() = 0;  //pure virtual function
    virtual void rotate() = 0;  //pure virtual function
    virtual ~Shape() {}
};

//Abstract Class - Open Shape
class Open_Shape : public Shape 
{
public:
    virtual ~Open_Shape() {}
};

//Abstract Class - Closed Shape
class Closed_Shape : public Shape
{
public:
    virtual ~Closed_Shape() {}
};

//Concrete Class - Line Shape
class Line : public Open_Shape
{
public:
    virtual void draw() override
    {
        std::cout << "Drawing a line" << std::endl;
    }
    
    virtual void rotate() override
    {
        std::cout << "Rotating a line" << std::endl;
    }
    
    virtual ~Line() {}
};

//Concrete Class - Circle Shape
class Circle : public Closed_Shape
{
public:
    virtual void draw() override
    {
        std::cout << "Drawing a circle" << std::endl;
    }
    
    virtual void rotate() override
    {
        std::cout << "Rotating a circle" << std::endl;
    }
    
    virtual ~Circle() {}
};

//Concrete Class - Square Shape
class Square : public Closed_Shape
{
public:
    virtual void draw() override
    {
        std::cout << "Drawing a square" << std::endl;
    }
    
    virtual void rotate() override
    {
        std::cout << "Rotating a square" << std::endl;
    }
    
    virtual ~Square() {}
};

//Function to loop through all pointers in the shapes vector and draw them
void screen_refresh(const std::vector<Shape*> &shapes)
{
    std::cout << "Refreshing" << std::endl;
    for(const auto p : shapes)
    {
        p->draw();
    }
}

int main() {
    
    //Standard Create Object
    Circle c;
    c.draw();
    
    //Base Class Pointers
    Shape *ptr = new Circle();
    ptr->draw();
    ptr->rotate();
    
    Shape *s1 = new Circle();
    Shape *s2 = new Line();
    Shape *s3 = new Square();
    
    //Base Class Pointer with Vector
    std::vector<Shape*> shapes {s1, s2, s3};
    
    //For loop that loops through each shape pointer in the shapes vector
    for(const auto pointer_shape : shapes)
    {
        pointer_shape->draw();
    }
    
    screen_refresh(shapes);
    
    delete ptr;
    delete s1;
    delete s2;
    delete s3;
    
    return 0;
}
