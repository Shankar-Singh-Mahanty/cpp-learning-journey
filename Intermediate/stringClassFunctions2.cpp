#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "Hello";
    
    cout<<str.length()<<" "<<str.capacity()<<endl;
    str.append(" World");
    cout<<str.length()<<" "<<str.capacity()<<endl;
    cout<<str<<endl;

    str.insert(3, "KK");    // entire string is inserted at given index
    cout<<str<<endl;

    str.insert(3, "Apple", 2);  // mentioned number of characters is inserted at given index
    cout<<str<<endl;

    string str2 = "How you";
    str2.insert(3, " area", 4);
    cout<<str2<<endl;

    str2.replace(4,3,"R");
    cout<<str2<<endl;

    str.erase();
    cout<<str<<endl;

    str2.push_back('?');
    cout<<str2<<endl;

    str.push_back('S');
    cout<<str<<endl;

    str2.pop_back();
    cout<<str2<<endl;

    cout<<"str B4 swap: "<<str<<endl;
    cout<<"str2 B4 swap: "<<str2<<endl;
    str.swap(str2);
    cout<<"str after swap: "<<str<<endl;
    cout<<"str2 after swap: "<<str2<<endl;

    return 0;
}