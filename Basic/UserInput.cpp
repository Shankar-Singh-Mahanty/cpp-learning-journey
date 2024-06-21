#include<iostream>

using namespace std;

int main(){
    string name, fullname;
    cout<<"May I know your name: ";
    cin>>name;       // one word
    cout<<"Mahy I know your full name: ";
    getline(cin, fullname);     // full name
    cout<<"Welcome: "<<name<<endl;
    cout<<"Welcome: "<<fullname<<endl;

    return 0;
}

// imp: see the UserInput.txt