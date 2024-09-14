#include<iostream>
using namespace std;

class Base{
public:
    void fun(){
        cout<<"Fun of base"<<endl;
    }
};

class Derived: public Base{
public:
    void fun(){
        cout<<"Fun of derived"<<endl;
    }
};

int main(){
    Base *p = new Derived();
    p->fun();
    
    return 0;
}