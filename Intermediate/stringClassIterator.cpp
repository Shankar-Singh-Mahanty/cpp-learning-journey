#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "today";
    
    // Forward traverse
    string::iterator it;    // it is an object and behaves as a pointer
    
    for(it=str.begin(); it!=str.end(); it++){
        *it -= 32;  // dereferncing the values and making it capital (modification)
    }
    cout<<str<<endl;

    // Backward traverse
    string::reverse_iterator rit;

    for(rit=str.rbegin(); rit!=str.rend(); rit++){
        cout<<*rit;
    }
    cout<<endl;

    // accessing characters using normal for loop
    for(int i=0; str[i] !='\0'; i++){
        cout<<str[i];
    }

    return 0;
}