#include<iostream>
using namespace std;

class Your;     // don't declare here.

class My
{
private: int a;
protected: int b;
public: 
    int c;
    friend Your;    // define before use 

};

class Your
{
    My m;
    void fun()
    {
        m.a = 15;
        m.b = 10;
        m.c = 5;
    }
};

int main(){

    return 0;
}