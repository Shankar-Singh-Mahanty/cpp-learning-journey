#include<iostream>
using namespace std;

struct Demo {
    int x;
    int y;

    void display(){
        cout<<x<<" "<<y<<endl;
    }
};

int main(){
    Demo d;
    d.x = 10;
    d.y = 20;
    d.display();

    return 0;
}

/*
In c++ struct and class is similar
only one difference
by default struct is public and class is private.
*/