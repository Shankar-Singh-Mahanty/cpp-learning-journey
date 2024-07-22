#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char s1[] = "Programming";
    char s2[] = "gram";
    char s3[] = "m";
    char s4[] = "kite";

    cout<<strstr(s1,s2)<<endl;
    cout<<strstr(s1,s3)<<endl;

    if(strstr(s1,s4) != NULL){
        cout<<strstr(s1,s4)<<endl;
    } else {
        cout<<"Not Found"<<endl;
    }
    
    
    return 0;
}