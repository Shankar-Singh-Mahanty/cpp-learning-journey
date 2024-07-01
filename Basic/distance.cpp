#include<iostream>

using namespace std;

int main(){
    int u, v, a;
    float speed;

    cout<<"Enter initial velocity: ";
    cin>>u;
    cout<<"Enter final velocity: ";
    cin>>v;
    cout<<"Enter accelaration: ";
    cin>>a;

    speed = (v*v - u*u)/(2*a);

    cout<<"Speed is: "<<speed;
    
    return 0;
}