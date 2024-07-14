#include<iostream>

using namespace std;

int main(){
    int A[] = {4,8,6,9,5,2,7};
    int max = A[0];

    for(auto x:A){
        if(x>max){
            max = x;
        }
    }
    cout<<"Maximum Element is: "<<max;
    
    return 0;
}