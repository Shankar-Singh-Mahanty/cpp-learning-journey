#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char s1[] = "Hello";
    char s2[] = "Hello";
    char s3[] = "hello";
    char s4[] = "HellO";
    char s5[] = "minor";
    char s6[] = "elder";
    
    cout<<strcmp(s1,s2)<<endl;
    cout<<strcmp(s3,s1)<<endl;
    cout<<strcmp(s4,s2)<<endl;
    cout<<strcmp(s5,s6)<<endl;
    
    return 0;
}