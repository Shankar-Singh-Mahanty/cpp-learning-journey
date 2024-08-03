#include<iostream>
using namespace std;

int g = 5;  // gloable variable

void fun(){
    int g = 10;  // local variable with same name as of global
    {
        int g = 0;
        g++;
        cout<<g<<endl;  // block level scpoe is the nearest scope
    }
    cout<<g<<endl;
}
int main(){
    cout<<g<<endl;  // value of g before calling function
    fun();
    cout<<g<<endl;  // value of g after calling function

    return 0;
}
// no change in global variable as compiler looks for the nearest scope