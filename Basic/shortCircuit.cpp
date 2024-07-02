#include<iostream>
using namespace std;
int main(){
    int a=5, b=7, i=3;

    if(a>b && ++i<b){
        //  first condition fails so no need to check for 2nd one as overall and case is false
    }   // so according to the concept of short circuit the 2nd condition is ignored by compiler to save time.
    cout<<i<<endl;
    if(a>b || ++i<b){
        // first condition fails to know overall result of OR 2nd condition need to be checked
    }   // hence ++i will be executed by compiler
    cout<<i<<endl;
    return 0;
}