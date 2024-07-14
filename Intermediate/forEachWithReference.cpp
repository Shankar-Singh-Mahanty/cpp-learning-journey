#include<iostream>

using namespace std;

int main(){
    // &:Reference = change the value of the array

    cout<<"Pre-Increment"<<endl;
    float A[] = {2.5f, 5.6f, 9, 8, 7};  // size of array == number of elements
    for(auto &x:A)
        cout<<++x<<endl;

    cout<<"======="<<endl;
    
    for(auto x:A)
        cout<<x<<endl;

    cout<<"Post-Increment"<<endl;
    char C[] = {'A', 'B', 'C', 'D'};
    for(auto &x:C)
        cout<<x++<<endl;

    cout<<"======="<<endl;
    
    for(auto x:C)
        cout<<x<<endl;

    return 0;
}