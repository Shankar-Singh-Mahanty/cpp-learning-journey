#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter age: ";
    cin>>age;

    if(age<12 || age>50){
        cout<<"Eligible";
    } else{
        cout<<"Not eligible";
    }
    return 0;
}