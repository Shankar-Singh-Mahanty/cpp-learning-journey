#include<iostream>
using namespace std;

class Test{
public:
    void fun(){
        cout<<"Inline"<<endl;
    }
    void fun1();
    inline void fun2();
};

int main(){
    Test t;
    t.fun();
    t.fun1();
    t.fun2();

    return 0;
}

void Test::fun1(){
    cout<<"Non-inline"<<endl;
}

void Test::fun2(){
    cout<<"inline"<<endl;
}

/*
the functions having body inside the class or having signature with inline keyword
is called inline function as there machine code is generated inline to main.
whereas for non-inline m/c code is separatedly generated.
*/