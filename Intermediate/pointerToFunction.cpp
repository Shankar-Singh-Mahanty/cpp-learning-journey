#include<iostream>
using namespace std;

void display(){
    cout<<"Hello";
}

int main(){
    void (*fp)();   // declaration
    fp = display;   // initialisation
    (*fp)();    // call

    return 0;
}