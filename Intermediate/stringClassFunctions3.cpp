#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "Welcome";
    
    char s[10], c[10];

    str.copy(s, str.length());  // string with null char is copied
    cout<<s<<endl;

    str.copy(c, 3);
    cout<<c<<endl;  // shouldprint 3 chars along with some garabge value as null char is not there

    c[3] = '\0';
    cout<<c<<endl;


    string str2 = "How are you";

    cout<<str2.find("are")<<endl;
    cout<<str2.find('y')<<endl;
    cout<<str2.rfind("ow")<<endl;
    cout<<str2.rfind('o')<<endl;
    cout<<str2.rfind('K')<<endl;


    string str3 = "Hello World";

    cout<<str3.find_first_of('l')<<endl;
    cout<<str3.find_first_of('l', 3)<<endl; // start search from 3rd index
    cout<<str3.find_first_of('l', 4)<<endl;
    cout<<str3.find_first_of("le")<<endl;   // take as individual letters

    cout<<str3.find_last_of('l')<<endl; // finde from behind

    return 0;
}