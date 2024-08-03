#include<iostream>
using namespace std;

void print(int n){
    cout<<n<<endl;
    if(n<10){
        print(n+1);
    }
}

int main(){
    print(1);
    
    return 0;
}