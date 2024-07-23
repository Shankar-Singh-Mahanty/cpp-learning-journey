#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char s[20] = "Programming";
    
    cout<<strchr(s, 'r')<<endl; // search from left hand side
    cout<<strrchr(s, 'r')<<endl;    // search from right hand side
    
    if(strchr(s, 'G') != nullptr){
        cout<<strchr(s, 'G')<<endl;
    } else {
        cout<<"Not Found"<<endl;
    }
    
    return 0;
}