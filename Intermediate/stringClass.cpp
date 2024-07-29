#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);

    cout<<str<<endl;

    // Issue of reading using cin doesn't appear here 
    string str1, str2;

    cout<<"Enter str1: ";
    cin>>str1;
    cout<<str1<<endl;

    cout<<"Enter str2: "<<endl;
    cin>>str2;
    cout<<str2<<endl;


    return 0;
}