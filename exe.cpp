#include <iostream>

class Base
{
public:
    virtual void print()
    {
        std::cout << "Base class\n";
    }
};

class Derived : public Base
{
public:
    void print() override
    {
        std::cout << "Derived class\n";
    }
};

int main()
{
    Base derivedObj;
    Derived *basePtr = &derivedObj; // Pointer to base class pointing to derived class object
    basePtr->print();               // Calls Derived class's print method due to polymorphism
    return 0;
}
