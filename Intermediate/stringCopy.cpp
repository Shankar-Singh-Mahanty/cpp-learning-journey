#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char s1[] = "Shankar";
    char s2[100] = "", s3[50] = ""; // initialization is necessary to get expected result

    strcpy(s2,s1);
    cout<<s2<<endl;

    strncpy(s3,s1,4);
    cout<<s3<<endl;
    
    return 0;
}