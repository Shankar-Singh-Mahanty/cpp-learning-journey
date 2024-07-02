#include<iostream>
using namespace std;
int main(){
    int a=8, b=7;

    if(int c=a+b; c<10){
        cout<<"I am executed";
    }
    // cout<<c; //  gives error as identifier c is not defined

    // we can also declare it with an empty block to limit its scope
    {
        int c = a+b;
        if(c<10){
            cout<<"I am executed";
        }
    }
    // cout<<c;     // gives error as identifier c is not defined

    // we can also define it within the if block if it is need only in that block to optimise memory use.
    if(true){
        int c = a+b;
        cout<<c;
    }
    // cout<<c;     // gives error as identifier c is not defined
    return 0;
}