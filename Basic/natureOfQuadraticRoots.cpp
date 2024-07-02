#include<iostream>
#include<cmath>

using namespace std;

typedef int coefficient;
typedef float discriminat;
typedef float root;

int main(){
    coefficient a, b, c;
    discriminat d;
    root r1, r2;

    cout<<"Enter 3 co-efficients: ";
    cin>>a>>b>>c;

    d = b*b - (4*a*c);
    r1 = (-b + sqrt(b*b - (4*a*c)))/(2*a);
    r2 = (-b - sqrt(b*b - (4*a*c)))/(2*a);

    if(d==0){
        cout<<"Roots are real and equal "<<-b/(2*a)<<endl;
    } 
    else if(d>0){
        cout<<"Roots are real and unequal "<<r1<<" and "<<r2<<endl;
    } 
    else {
        cout<<"imaginary";
    }

    return 0;
}