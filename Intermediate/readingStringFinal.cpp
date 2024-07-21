#include<iostream>
using namespace std;

int main(){
    char s1[50], s2[50], s3[50];

    cout<<"Enter your Name: ";
    cin>>s1;    // read only one word and leave the rest in keyboard buffer
    cout<<"Welcome "<<s1<<endl;

    cin.ignore();   //  will ignore the remaining part let s2 read fresh string

    cout<<"Enter your name again: ";
    cin.get(s2,50); // capable to read upto 49 char + null character and leaves \n(enter key) in keyboard buffer
    cout<<"Welcome "<<s2<<endl;

    cin.ignore();   //  will ignore the enter key(\n) and let s3 read fresh string

    cout<<"Please Enter your name once again: ";
    cin.getline(s3,50); // read upto 49 char + null character and does not leave anything
    cout<<"Welcome "<<s3<<endl;

    /*
    Still getting unexpected result because the first .ignore() is able to ignore only
    the space character and let s2 read the rest of the string present in buffer
    and 2nd .ignore() succesfully ignores the \n or enter key and let s3 read 
    a fresh string.
    */

    return 0;
}