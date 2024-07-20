#include<iostream>
using namespace std;

int main(){
    int x = 10;
    int &y = x;     // Declaration & Initialisation of reference should be done together.
    //  now this Y can't be used as nickname for any other variable as it is already used for X.
    y++;
    x++;
    cout<<x<<endl;

    cout<<&x<<" == "<<&y<<endl;
    cout<<x+y<<endl;
    cout<<"Both X and Y are the names of same variable";

    return 0;
}