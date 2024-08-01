#include<iostream>
using namespace std;

int add(int x, int y, int z = 0){
    return x+y+z;
}

int main(){
    cout<<add(2,5)<<endl;
    cout<<add(2,5,8)<<endl;

    cout<<add(2,5,0)<<endl;
    return 0;
}

/*
Assigning some default values to an argument is called default argument function
The benifit of a default argument is you can combine the overloaded functions and
write them into a single function.
*/