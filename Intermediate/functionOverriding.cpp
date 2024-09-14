#include<iostream>
using namespace std;

class Base{
public:
    void display(){
        cout<<"display of base"<<endl;
    }
};

class Derived: public Base{
public:
    void display(){
        cout<<"display of derived"<<endl;
    }
};

int main(){
    Derived d;
    d.display();

    return 0;
}