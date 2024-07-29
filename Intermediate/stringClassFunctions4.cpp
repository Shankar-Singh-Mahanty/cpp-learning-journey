#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "Programming";

    cout<<str.substr(3)<<endl;
    cout<<str.substr(3, 4)<<endl; // number of chars after start index

    string s1 = "Hello";
    string s2 = "hello";
    string s3 = "world";
    string s4 = "Hello";

    // compare() behaves same as strcmp()
    cout<<s1.compare(s2)<<endl;
    cout<<s1.compare(s4)<<endl;
    cout<<s3.compare(s1)<<endl;
    



    return 0;
}