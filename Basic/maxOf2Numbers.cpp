#include<iostream>

using namespace std;

int main(){
    int a, b;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    if(a>b){
        cout<<a<<" is largest.";
    }
    else{
        cout<<b<<" is largest.";
    }
    return 0;
}