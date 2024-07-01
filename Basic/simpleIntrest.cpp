#include<iostream>
using namespace std;

int main(){
    int p, t, r;
    float si;

    cout<<"Enter P, T and R respectively: ";
    cin>>p>>t>>r;

    si = (p*t*r)/100.0;

    cout<<"Simple Intrest is: "<<si;

    return 0;
}