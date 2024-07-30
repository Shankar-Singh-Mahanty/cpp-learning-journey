#include<iostream>
#include<string>
using namespace std;

int main(){
    string str, temp;
    cout<<"Enter a string: ";
    getline(cin, str);

    string::reverse_iterator rit;

    for(rit = str.rbegin(); rit != str.rend(); rit++){
        temp.push_back(*rit);   // pushes one char at back
    }

    if(str == temp) {
        cout<<"Input string "<<str<<" is a palindrome."<<endl;
    }
    else{
        cout<<"Input string is not a palindrome";
    }

    return 0;
}