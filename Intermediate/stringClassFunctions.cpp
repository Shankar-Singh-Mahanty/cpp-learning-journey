#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "Shankar Singh Mahanty";

    cout<<str.length()<<endl;
    cout<<str.size()<<endl;
    cout<<str.capacity()<<endl;
    /* The line `cout<<str.resize(30)<<endl;` is attempting to resize the string `str` to have a length
    of 30 characters. However, the `resize` method in C++ does not return a value, so trying to
    output the result of `str.resize(30)` using `cout` will not provide any meaningful output. */
    str.resize(30);
    cout<<str.capacity()<<endl;
    cout<<str.max_size()<<endl;
    str.clear();
    cout<<str.length()<<endl;
    cout<<str.empty()<<endl;

    return 0;
}