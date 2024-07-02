#include<iostream>

using namespace std;

int main(){
    int hour;
    cout<<"Enter hour(0-23): ";
    cin>>hour;
    if (hour>=9 && hour<=18)
    {
        cout<<"Working hour.";
    }
    else{
        cout<<"Leisure hour.";
    }
    
    return 0;
}