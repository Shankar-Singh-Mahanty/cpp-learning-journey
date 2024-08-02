#include<iostream>
using namespace std;

int & fun(int &x){
    return x;
}
int main(){
    int a = 10;
    fun(a) = 25;    // we make a function as L value
    cout<<a<<endl;
    
    return 0;
}