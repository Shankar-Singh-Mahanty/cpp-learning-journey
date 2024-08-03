#include<iostream>
using namespace std;

int max(int x, int y){
    return x > y ? x : y;
}

int min(int x, int y){
    return x < y ? x : y;
}

int main(){
    int maximum, minimum;
    int (*fp)(int, int);   // declaration
    fp = max;   // initialisation
    maximum = (*fp)(10, 5);    // call
    cout<<maximum<<endl;

    fp = min;
    minimum = (*fp)(10, 5);
    cout<<minimum<<endl;

    return 0;
}