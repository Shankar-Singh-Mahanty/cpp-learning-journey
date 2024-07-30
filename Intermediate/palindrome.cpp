#include<iostream>
#include<string>
using namespace std;

int main(){
    string str, rev="";    // initialize rev to avoid ambiguty
    cout<<"Enter a string: ";
    getline(cin, str);

    string::reverse_iterator rit;

    for(rit = str.rbegin(); rit != str.rend(); rit++){
        rev.push_back(*rit);   // pushes one char at back
    }

    if(str == rev) {
        cout<<"Input string "<<str<<" is a palindrome."<<endl;
    }
    else{
        cout<<"Input string is not a palindrome"<<endl;
    }

    // Another method

    /* To ensure reverse have same length as of str */
    int len = (int)str.length();
    rev.resize(len);

    for(int i=0,j=len-1; i<len; i++,j--){
        rev[i] = str[j];
    }
    rev[len] = '\0';     // add null character at the end of the string

    if(str.compare(rev) == 0){
        cout<<"In 2nd method also input string "<<str<<" is a palindrome."<<endl;
    }
    else{
        cout<<"In 2nd method also input string is not a palindrome"<<endl;
    }


    /*
    please check out palindromePro.cpp present in Advanced directory to deal with cases
    e.g. Madam is a palindrome but here it will display not a palindrome.
    */
    return 0;
}