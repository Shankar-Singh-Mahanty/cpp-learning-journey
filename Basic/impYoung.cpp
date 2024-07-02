#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter age: ";
    cin>>age;

    if(age>=12 , age<=50){  // actual condition: age>=12 && age<=50
        cout<<"Young";
    } else{
        cout<<"Not Young";
    }
    return 0;
}

/*
two conditional statements should be combined with a logical operator.
if comma(,) is used then some compiler will show warning or some don't 
but it will compile as not an error 
whereas the output will not be as expected 
it will neglect the first condition and gives the output only based upon
the condition after comma.
*/