#include<iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base Constructor called" << endl;
    }

    virtual ~Base() { // Virtual destructor
        cout << "Base Destructor called" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived Constructor called" << endl;
    }

    ~Derived() {
        cout << "Derived Destructor called" << endl;
    }
};

void fun()
{
    Base* b = new Derived(); // Base pointer to Derived object
    delete b; // Calls the destructor of Derived first, then Base
    // If Base destructor were not virtual, only Base destructor would be called

    // and Derived destructor would not be called, leading to resource leaks.
    // This is a crucial aspect of polymorphism in C++.
    // Always use virtual destructors in base classes when dealing with inheritance.
    // This ensures that the correct destructor is called for derived classes.
}

int main() {
    fun();
    return 0;
}