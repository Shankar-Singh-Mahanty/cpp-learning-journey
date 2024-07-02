#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;

    if(a>b && a>c){
        cout<<a<<" is greatest.";
    }   // here we don't need to check two conditions as if 'a' is not greater then obviously either 'b' or 'c' will be greater.
    else if(b>c && b>a){   //  So, b>c condition alone is sufficient. 
        cout<<b<<" is greatest.";
    }
    else{
        cout<<c<<" is greatest.";
    }
    return 0;
}