#include<iostream>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    else {
        return n + sum(n-1);
    }
}

int main(){
    int n, s;
    cout<<"Enter one number: ";
    cin>>n;
    s = sum(n);
    cout<<"Sum of "<<n<<"natural number is = "<<s<<endl;

    return 0;

}