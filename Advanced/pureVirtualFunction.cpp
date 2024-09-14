#include<iostream>
using namespace std;

class Car{
public:
    virtual void start()=0; // must override or else inherting derived class will also become abstract
};

class Innova:public Car{
    void start(){cout<<"Innova started"<<endl;}
};

class Swift:public Car{
    void start(){cout<<"Swift started"<<endl;}
};

int main(){
    // Car c; // can't create object of a abstract class but we can create pointer.
    Car *p = new Innova();
    p->start();

    p = new Swift();
    p->start();

    return 0;
}