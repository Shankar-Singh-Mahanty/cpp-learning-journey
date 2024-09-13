#include<iostream>
using namespace std;

class Base{
public:
    void fun1(){
        cout<<"Fun1 of base"<<endl;
    }
};

class Derived: public Base{
public:
    void fun2(){
        cout<<"Fun2 of derived"<<endl;
    }
};

int main(){
    Derived d;
    d.fun1();
    d.fun2();

    Base *ptr = &d; // object of derived is assigned to base class pointer
    ptr->fun1();
    // ptr->fun2();   // not allowed as class base has no member fun2

    // It is also not possible that a derived class pointer is pointing
    // on the base class object only the reverse is true.

    return 0;
}