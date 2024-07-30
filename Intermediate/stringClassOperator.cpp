#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1 = "Holiday";

    cout<<s1.at(4)<<endl;   // function
    cout<<s1[4]<<endl;      // operator

    // using [] we can also modify the string but can't with at()
    s1.at(4) = 'M';
    cout<<s1<<endl; // worked

    s1[4] = 'd';
    cout<<s1<<endl; // worked

    cout<<s1.front()<<endl; // prints 1st letter of string
    cout<<s1.back()<<endl;  // prints 2nd letter of string

    //  concatenation with + operator
    string s3 = "Hello";
    string s4 = "World";
    string s5 = s3+s4;
    cout<<s5<<endl;

    // we can also perform like this
    s3 += " World";
    cout<<s3<<endl;

    // copy a string using = operator
    s4 = s1;
    cout<<s4<<endl;

    return 0;
}