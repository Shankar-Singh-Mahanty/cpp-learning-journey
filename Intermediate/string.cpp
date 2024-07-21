#include<iostream>
using namespace std;

int main(){
    char a[10] = "Hello";   // though having 10 but still going to print upto 5 char becoz of \0
    char s[]="Hello";
    char c[]={65,66,67,68,'\0'};
    char S[]={'H','e','l','l','o','\0','p','q','r'};

    cout<<a<<endl;
    cout<<s<<endl;
    cout<<c<<endl;
    cout<<S<<endl;

    char *p = "Shankar";  // will generate warning
    cout<<p<<endl;

    return 0;
}