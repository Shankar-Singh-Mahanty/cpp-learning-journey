#include<iostream>
#include<cmath>
#include<iomanip>  // Include the iomanip library

using namespace std;

int main(){
    int x1, x2, y1, y2;
    float dist;

    cout<<"Enter 2 values for point X: ";
    cin>>x1>>x2;
    cout<<"Enter 2 values for point Y: ";
    cin>>y1>>y2;

    dist = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

    cout << fixed << setprecision(2);  // Set the precision to 2 decimal places
    cout<<"Distance between point X and Y is: "<<dist;

    return 0;
}
