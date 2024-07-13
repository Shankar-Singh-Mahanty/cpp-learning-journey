/*
Reverse of a number is equivalent to original number.
*/

#include<iostream>

using namespace std;

int main(){
    int n, m, r, rev=0;
    cout<<"Enter a number: ";
    cin>>n;
    m = n;

    while(n>0){
        r = n%10;
        n/=10;
        rev = rev*10 + r;
    }
    if(m == rev){
        cout<<"Palindrome number";
    } else{
        cout<<"Not a palindrome number";
    }
    return 0;
}