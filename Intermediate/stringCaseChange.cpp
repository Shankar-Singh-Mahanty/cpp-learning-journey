#include<iostream>
using namespace std;

int main(){
    string str1 = "WeLcOmE";

    string::iterator it;

    // upper to lower case conversion
    for(it=str1.begin(); it!=str1.end(); it++){
        if(*it >= 65 && *it <= 90){ // checks if capital then only make it small; A=65 Z=90
            *it += 32;
        }
    }
    cout<<str1<<endl;

    string str2 = "wElCoMe7";

    // lower to uppercase conversion
    for(int i=0; str2[i] != '\0'; i++){
        if(str2[i] >= 97 && str2[i] <= 122){    // condition to convert only if small case is there ignore cpital and number
            str2[i] -= 32;
        }
    }
    cout<<str2<<endl;

    return 0;
}
