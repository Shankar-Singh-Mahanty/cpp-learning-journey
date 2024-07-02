#include<iostream>

using namespace std;

int main(){
    int mark;
    cout<<"Enter your mark: ";
    cin>>mark;

    if(mark>=90 && mark<=100){
        cout<<"Outstanding: O";
    } else if(mark>=80 && mark<90){
        cout<<"Excellent: E";
    } else if(mark>=70 && mark<80){
        cout<<"A";
    } else if(mark>=60 && mark<70){
        cout<<"B";
    } else if(mark>=50 && mark<60){
        cout<<"C";
    } else{
        cout<<"Fail: F";
    }
    return 0;
}