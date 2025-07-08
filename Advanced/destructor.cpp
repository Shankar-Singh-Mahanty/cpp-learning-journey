#include<iostream>
using namespace std;

class Demo {
    int *ptr;
public:
    Demo() {
        ptr = new int[10]; // Allocate memory
        cout << "Constructor called" << endl;
    }

    ~Demo() {
        cout << "Destructor called" << endl;
        delete[] ptr; // Free allocated memory 
        // (obejct may be delted out of scope but memory is not freed so need to free it explicitly or else memory leak occurs)
    }
};

void createDemo() {
    // object is created in stack memory
    Demo d; // Constructor is called here

    // object is created in heap memory
    Demo *ptr = new Demo(); // Constructor is called here (Dynamic memory allocation)
    delete ptr; // Destructor is called here (explicit heap memory cleanup)
}

int main() {
    createDemo(); // Destructor will be called when d goes out of scope
    return 0;
} // Heap Destructor is called here