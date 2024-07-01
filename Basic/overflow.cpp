#include<iostream>
#include<climits>   // The INT_MAX constant is defined in the <climits> header file

using namespace std;

int main(){
    char x = 127; // largest value of char
    x++;    // upon increment it will take mallest value
    cout<<(int)x<<endl;

    char y = -128; // smallest value
    y--;    // upon decrement it will take max value
    cout<<(int)y<<endl;
    
    int z = INT_MAX;
    cout<<z<<endl;
    z++;
    cout<<z<<endl;

    return 0;
}