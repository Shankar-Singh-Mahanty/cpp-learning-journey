#include<iostream>
using namespace std;

class Base{
public:
    void fun(){
        cout<<"Fun of base.";
    }
    virtual void fun2() = 0;
};
class Derived : public Base{
    void fun2(){
        cout<<"Fun of derived.";
    }
};

int main(){
    // Base b;     //  object of abstract class type "Base" is not allowed

    Base *p = new Derived();
    p->fun2();

    return 0;
}