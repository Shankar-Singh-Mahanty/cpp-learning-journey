#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a, b, c;
    float r1, r2;
    cout<<"Enter three coefficients: ";
    cin>>a>>b>>c;

    // Calculate the discriminant
    int discriminant = b*b - 4*a*c;

    // Check if the discriminant is negative
    if(discriminant < 0) {
        cout << "The roots are complex numbers.\n";
        return 0; // Exit the program
    }

    r1 = (-b + sqrt(discriminant))/(2*a);
    r2 = (-b - sqrt(discriminant))/(2*a);

    cout<<"Roots of the quadratic equation "<<a<<"x^2 + "<<b<<"x + "<<c<<" are:"<<endl;
    cout<<r1<<" and "<<r2;

    return 0;
}
