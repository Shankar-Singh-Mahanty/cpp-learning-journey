#include<iostream>
using namespace std;

class Complex {
    private:
    int real;
    int img;
    public:
    Complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    void display()
    {
        cout<<real<<"+i"<<img<<endl;
    }
    friend Complex operator+(Complex c1, Complex c2);
};

int main(){
    Complex c1(5,3), c2(10,5), c3;

    c3 = c1 + c2;
    c3.display();

    return 0;
}

Complex operator+(Complex c1, Complex c2){
    Complex t;
    t.real = c1.real + c2.real;
    t.img = c1.img + c2.img;
    return t;
}

/*
The friend function is an independent function defiened outside the class
that is not a member of the class but a friend of the class
so we didn't use the scope resolution.
its a global function as well.
*/