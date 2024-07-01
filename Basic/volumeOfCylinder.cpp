#include<iostream>

using namespace std;

int main(){
    int radius, height;
    float volume;

    cout<<"Enter radius and height of the cylinder: ";
    cin>>radius>>height;

    volume = 3.14*radius*radius*height;

    cout<<"Volume of the cylinder is: "<<volume;
    
    return 0;
}