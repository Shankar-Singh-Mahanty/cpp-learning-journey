#include<iostream>
using namespace std;

int max(int a=0, int b=0, int c=0){
    return a>b && a>c ? a : b>c ? b : c;
}

int main(){
    cout<<max()<<endl;
    cout<<max(10)<<endl;
    cout<<max(10,13)<<endl;
    cout<<max(10,15,12)<<endl;

    return 0;
}

/*
default argument must be filled from right to left hand side without skip.
*/