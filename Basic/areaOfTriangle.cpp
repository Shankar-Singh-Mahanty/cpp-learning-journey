#include<iostream>

using namespace std;

int main(){
    int base, height, area;
    cout<<"Enter the base of triangle: ";
    cin>>base;
    cout<<"Enter the height of the triangle: ";
    cin>>height;

    area = 0.5 * (base*height); //  we can also write:= (base*height)/2

    cout<<"Area of the traingle is: "<<area<<"unit square";

    return 0;
}