/*
A number is called an Amstrong number when 
its sum of cube of the digits is equivalent to that number itself.
*/


#include<iostream>

using namespace std;

int main(){
    int num, r, m, sum=0;
    cout<<"Enter a number: ";
    cin>>num;
    m = num;

    while(num>0){
        r = num%10;
        num/=10;
        sum+=r*r*r;     // Don't use pow(r,3)
    }
    if(m == sum){
        cout<<"Amstrong Number.";
    }else{
        cout<<"Not an amstrong number";
    }
    return 0;
}