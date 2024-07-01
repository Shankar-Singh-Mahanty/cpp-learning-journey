#include<iostream>

using namespace std;
/*
User defined datatype
#define mon 1; OR const int mon=1;
we can declare all at once;
day is a const int datatype
it only takes value from the list
starts from 0 and continues
we can also manually assign values to it
it is declare above the main function
*/

enum day {mon, tue, wed, thu=9, fri, sat, sun};

int main(){
    day d;
    d = mon;
    cout<<d<<endl;
    cout<<wed<<endl;
    cout<<fri<<endl;

    return 0;
}