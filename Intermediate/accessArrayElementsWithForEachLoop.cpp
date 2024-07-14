#include<iostream>

using namespace std;

int main(){
    float A[] = {2.5f, 5.6f, 9, 8, 7};  // size of array == number of elements

    for(int x:A)    // x is of int type but array and its elements is of float type
        cout<<x<<endl;  //  So, typecast happened and values after decimal truncated.
    
    cout<<"====="<<endl;

    for(float x:A)  // x is of float type
        cout<<x<<endl;
    
    cout<<"====="<<endl;

    for(auto x:A)   //  automatically identified the data type of array so of x
        cout<<x<<endl;

    cout<<"====="<<endl;

    for(auto x:A)   // value takes then increased then print
        cout<<++x<<endl;

    cout<<"====="<<endl;

    for(auto x:A)   // value takes then prints then increase then again takes
        cout<<x++<<endl;

    return 0;
}