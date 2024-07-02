#include<iostream>

using namespace std;

int main(){
    int a, b, c;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;

    if(b == 0){
        cout<<"Denomenator can not be zero.";
    }
    else{
        c = a/b;
        cout<<"Quotient is = "<<c;
    }
    return 0;
}