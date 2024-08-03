#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    else {
        return n * fact(n-1);
    }
}

int main(){
    int n, factorial;
    cout<<"Enter one number: ";
    cin>>n;
    factorial = fact(n);
    cout<<n<<"! = "<<factorial<<endl;

    return 0;

}