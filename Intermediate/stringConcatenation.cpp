#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char s1[50] = "Good";
    char s2[100] = "Morning";

    strcat(s1, s2);
    cout<<s1<<endl;

    char s3[10] = "Hello";
    char s4[] = "World";

    strncat(s3, s4, 3);
    cout<<s3<<endl;
    
    return 0;
}