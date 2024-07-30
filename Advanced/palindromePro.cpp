#include<iostream>
#include<string>
using namespace std;

// Function to convert a character to lowercase
char toLowerCase(char ch) {
    if(ch >= 'A' && ch <= 'Z') {
        return ch + ('a' - 'A');
    }
    return ch;
}

int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);

    int len = str.length();
    bool isPalindrome = true;

    for(int i = 0; i < len / 2; ++i) {
        if(toLowerCase(str[i]) != toLowerCase(str[len - 1 - i])) {
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome) {
        cout<<"Input string \""<<str<<"\" is a palindrome."<<endl;
    } else {
        cout<<"Input string \""<<str<<"\" is not a palindrome."<<endl;
    }

    return 0;
}
