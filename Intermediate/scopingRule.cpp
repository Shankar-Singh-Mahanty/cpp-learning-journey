#include<iostream>
using namespace std;

int x = 10;

int main(){
    int x = 20;
    {
        int x  = 30;
        cout<<x<<endl; // block scpoe
    }
    cout<<x<<endl;  // local scope
    // we can't able to access the global variable inside main function
    // To access : -
    cout<<::x<<endl;    // global scope

    return 0;
}