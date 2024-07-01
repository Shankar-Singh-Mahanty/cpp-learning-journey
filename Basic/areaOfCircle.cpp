#include<iostream>

using namespace std;

int main(){
    float r, area;
    cout<<"Enter the radius: ";
    cin>>r;

//    area = 22/7 * r * r;    // gives the result in integer as 22/7 = 3
    area = 3.1425f * r * r;

    cout<<"Area of the circle is: "<<area;

    return 0;
}