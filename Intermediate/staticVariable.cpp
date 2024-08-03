#include<iostream>
using namespace std;

void fun(){
    static int s = 10;
    s++;
    cout<<s<<endl;
}
int main(){
    fun();
    fun();
    fun();

    return 0;
}

/*
As S is a static variable so declared and initialside only once 
and it will only be destroyed once the program terminates
if it not static then each of the three time we got similar result as 
it will initialised in stack each time and destroyed each time function starts and ends respectively.
but now it is created in code section memory only once.
*/