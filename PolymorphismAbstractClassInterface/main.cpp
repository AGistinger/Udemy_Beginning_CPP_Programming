//Polymorphism Abstract Classes as Interfaces
/* Friend functions are not inherited so they have to be defined for every class */

#include <iostream>

//Printable Class Interface
class I_Printable
{
    friend std::ostream &operator<<(std::ostream &out, const I_Printable &obj);
    
public:
    virtual void print(std::ostream &out) const = 0;
};

//Overloaded Operator to Display <<
std::ostream &operator<<(std::ostream &out, const I_Printable &obj)
{
    //Calls print on the object to the ostream
    obj.print(out);
    return out;
}

//Class Account
class Account : public I_Printable
{
public:
    virtual void withdraw(double amount)
    {
        std::cout << "Account::withdraw" << std::endl;
    }
    
    virtual void print(std::ostream &out) const override
    {
        out << "Account Display";
    }
    
    virtual ~Account() {}
};

//Class Checking Account
class Checking : public Account
{
public:
    virtual void withdraw(double amount) override
    {
        std::cout << "Checking::withdraw" << std::endl;
    }
    
    virtual void print(std::ostream &out) const override
    {
        out << "Checking Display";
    }
    
    virtual ~Checking() {}
};

//Class Savings Account
class Savings : public Account
{
public:
    virtual void withdraw(double amount) override
    {
        std::cout << "Savings::withdraw" << std::endl;
    }
    
    virtual void print(std::ostream &out) const override
    {
        out << "Savings Display";
    }
    
    virtual ~Savings() {}
};

//Class Trust Account
class Trust : public Account
{
public:
    virtual void withdraw(double amount) override
    {
        std::cout << "Trust::withdraw" << std::endl;
    }
    
    virtual void print(std::ostream &out) const override
    {
        out << "Trust Display";
    }
    
    virtual ~Trust() {}
};

//Dog class using printable
class Dog : public I_Printable
{
public:
    virtual void print(std::ostream &out) const override
    {
        out << "Woof Woof";
    }
    
    virtual ~Dog() {}
};

//Print function
void print(const I_Printable &obj)
{
    std::cout << obj << std::endl;
}

//Main
int main() {
    
    Account *p1 = new Account();
    std::cout << *p1 << std::endl;
    
    Account *p2 = new Checking();
    std::cout << *p2 << std::endl;
    
    Account a;
    std::cout << a << std::endl;
    
    Checking c;
    std::cout << c << std::endl;
    
    Savings s;
    std::cout << s << std::endl;
    
    Trust t;
    std::cout << t << std::endl;
    
    Dog *dog = new Dog();
    std::cout << *dog << std::endl;
    print(*dog);
    
    delete p1;
    delete p2;
    delete dog;
    
    return 0;
}
