#include<iostream>
using namespace std;

int main(){
    // 3 ways to read
    char s1[50], s2[50], s3[50];

    cout<<"Enter your Name: ";
    cin>>s1;    // read only one word and leave the rest in keyboard buffer
    cout<<"Welcome "<<s1<<endl;

    cout<<"Enter your name again: ";
    cin.get(s2,50); // capable to read upto 49 char + null character and leaves \n(enter key) in keyboard buffer
    cout<<"Welcome "<<s2<<endl; // but read the remaining part of the above cin and leaves the enter(\n)

    cout<<"Please Enter your name once again: ";
    cin.getline(s3,50); // read upto 49 char + null character and does not leave anything
    cout<<"Welcome "<<s3<<endl; // but catches the \n only

    /*
    due to the above reasons we only asked for giving input once from keyboard and
    reslting into unexpected output to achieve the expected output
    please see: readingStringFinal.cpp
    */
    return 0;
}