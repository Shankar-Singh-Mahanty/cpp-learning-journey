#include<iostream>
using namespace std;

int g = 0;  // gloable variable

void fun(){
    int a = 5;  // local variable
    g = g + a;
    cout<<g<<endl;
}
int main(){
    g = 15;
    fun();
    g++;
    cout<<g<<endl;
}