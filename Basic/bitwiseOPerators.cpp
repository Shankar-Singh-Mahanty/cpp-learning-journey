#include<iostream>

using namespace std;

int main(){
    int x=11, y=7, z;
    // bitwise and
    z=x&y;
    cout<<"Bitwise AND = "<<z<<endl;
    // bitwise or
    z=x|y;
    cout<<"Bitwise OR = "<<z<<endl;
    // XOR
    z=x^y;
    cout<<"XOR = "<<z<<endl;
    // Not
    z = ~x;
    cout<<"NOT = "<<z<<endl;
    // left shift
    z=x<<2;
    cout<<"Left Shift = "<<z<<endl;
    // right shift
    z=x>>2;
    cout<<"Right Shift = "<<z<<endl;

    return 0;
}