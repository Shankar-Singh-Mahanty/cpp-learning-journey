#include<iostream>

using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num > 0){
        cout<<num<<" is a positive number.";
    }
    else if(num < 0){
        cout<<num<<" is a negetive number.";
    }
    else {
        cout<<num<<" is neither positive nor negetive.";
    }
    return 0;
}