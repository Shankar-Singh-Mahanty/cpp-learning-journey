#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char *s;
    cout<<"Enter a string: ";
    cin.getline(s,100);

    cout<<"Length is: "<<strlen(s)<<endl;
    /*
    Program terminates without printing the length because 
    we are trying to read input into an uninitialized pointer.
    */
    
    return 0;
}