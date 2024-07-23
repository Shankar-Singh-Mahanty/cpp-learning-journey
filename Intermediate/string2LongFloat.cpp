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
    
    return 0;
}