#include<iostream>
using namespace std;

void swap(int &a, int &b){
    // cout<<&a<<" "<<&b<<endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 10, y = 20;

    swap(x, y);
    // cout<<&x<<" "<<&y<<endl;
    cout<<x<<" "<<y;
    
    return 0;
}


// x address == a address : y address == b address
// no separate machine code is generated for swap function 
// it is copied into main function that's why a and b able to access the address