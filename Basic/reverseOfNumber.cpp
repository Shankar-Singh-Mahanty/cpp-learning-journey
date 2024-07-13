#include<iostream>

using namespace std;

int main(){
    int n, r, rev=0;
    // cout<<"Enter a number: ";
    // cin>>n;
    n = 183;
    while(n>0){
        r = n%10;
        n/=10;
        rev = rev*10 + r;   // don't write rev *= 10 + r;
    }
    cout<<"Reverse of the number is: "<<rev;

    return 0;
}