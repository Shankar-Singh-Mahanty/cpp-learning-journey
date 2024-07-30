#include<iostream>
#include<string>
using namespace std;

int main(){
    string email = "shankarmahanty1430@gmail.com";

    int index = email.find('@');

    string uname = email.substr(0, index);
    // uname[index] = '\0';

    bool isValid = true;
    for(int i = 0; uname[i] != '\0'; i++){
        if(!((uname[i] >= 'A' && uname[i] <= 'Z') || (uname[i] >= 'a' && uname[i] <= 'z') || 
            (uname[i] >= '0' && uname[i] <= '9') || uname[i] == '_' || uname[i] == '.')) {
            isValid = false;
            break;
        }
    }

    if(isValid) {
        cout << "Username is VALID." << endl;
    } else {
        cout << "Username is NOT VALID!!!" << endl;
    }

    return 0;

    /*
    Setting uname[index] = '\0';
    is unnecessary because substr already creates a new string up to the specified index.
    substr(0, index) := means sub string starting from 0 and upto index
    i.e. 0 is included but index position is not included in the substring
    */
}
