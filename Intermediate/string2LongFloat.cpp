#include<iostream>
using namespace std;

int main(){
    char s1[10] = "235";
    char s2[10] = "54.78";

    // string-to-long
    long int x = strtol(s1, NULL, 10);
    // string-to-float
    float y = strtof(s2, nullptr);

    // can use both NULL and nullptr to represant the end of a string
    
    cout<<x<<endl<<y<<endl;

    // as x and y are now long int and float respectively so can perform arithmetic operation
    cout<<x+10<<endl<<y-5<<endl;
    
    return 0;
}