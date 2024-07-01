#include<iostream>
#include<string>

using namespace std;

int main() {
    string name, fullname;

    cout << "May I know your name: ";
    cin >> name;  // one word

    cin.ignore(); // Ignore the leftover newline character

    cout << "May I know your full name: ";
    getline(cin, fullname);  // full name

    cout << "Welcome: " << name << endl;
    cout << "Welcome: " << fullname << endl;

    return 0;
}


// Output:-

/*
May I know your name: Shankar
May I know your full name: Shankar Singh Mahanty
Welcome: Shankar
Welcome: Shankar Singh Mahanty
*/