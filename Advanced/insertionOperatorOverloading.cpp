#include<iostream>
using namespace std;

class Complex {
    private:
    int real;
    int img;
    public:
    Complex(int r=0, int i=0){
        real = r;
        img = i;
    }
    friend ostream & operator<<(ostream &o, Complex &c);
};

int main(){
    Complex c1(3,7);
    cout<<c1;

    return 0;
}

ostream & operator<<(ostream &o, Complex &c){
    o<<c.real<<"+i"<<c.img;
}

/*
Now cout will print a user-defined complex number
this insertion operator function is taking two parameters
from two different type of objects so it cannot belong to 
complex number so i make it as a friend.
*/