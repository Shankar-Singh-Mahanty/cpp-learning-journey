#include<iostream>

using namespace std;

int main(){
    int A[2][3];

    cout<<"Enter the array Elements: "<<endl;
    for(auto& x:A){
        for(auto& y:x){
            cin>>y;
        }
    }
    cout<<"Displaying the array: "<<endl;
    for(auto& x:A){
        for(auto& y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}