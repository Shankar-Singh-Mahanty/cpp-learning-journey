#include<iostream>
#include<string>
using namespace std;

int main(){
    string email = "shankarmahanty1430@gmail.com";

    int index = email.find('@');

    string uname = email.substr(0, index);

    cout<<"Username is: "<<uname<<endl;

    return 0;

    /*
    please visit extractUserNameFromEmailPro.cpp to also check the validity 
    of the username
    1. alphabets can be capital and small
    2. if character can only contain _ or .
    3. numbers are allowed
    */
}