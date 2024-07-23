#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char s1[] = "x=10;y=20;z=35";

    char *token = strtok(s1, "=;");
    
    while(token != nullptr){   // can also use nullptr
        cout<<token<<endl;
        token = strtok(nullptr, "=;");
    }

    return 0;
}