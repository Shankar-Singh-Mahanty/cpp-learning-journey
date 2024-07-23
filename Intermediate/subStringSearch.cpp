#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char s1[] = "Programming";
    char s2[] = "gram";
    char s3[] = "Gram";
    char s4[] = "m";
    char s5[] = "kite";
    

    cout<<strstr(s1,s2)<<endl;

    if(strstr(s1,s3) != NULL){
        cout<<strstr(s1,s3)<<endl;
    } else {
        cout<<"Not Found becoz of case senitivity"<<endl;
    }

    cout<<strstr(s1,s4)<<endl;

    if(strstr(s1,s5) != nullptr){
        cout<<strstr(s1,s5)<<endl;
    } else {
        cout<<"Not Found"<<endl;
    }
    
    
    return 0;
}