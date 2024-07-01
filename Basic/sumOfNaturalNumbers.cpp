#include<iostream>

using namespace std;
int main(){
    int num, sum;
    cout<<"Enter the natural number: ";
    cin>>num;

    sum = num * (num+1)/2;

    cout<<"Sum of first "<<num<<" natural number is= "<<sum;

    return 0;
}