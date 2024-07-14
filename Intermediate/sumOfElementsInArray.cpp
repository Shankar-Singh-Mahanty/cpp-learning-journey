#include<iostream>
using namespace std;
int main(){
    int A[] = {2,4,6,8};
    int sum1 = 0;
    int sum2 = 0;

    // using for loop
    for(int i=0; i<4; i++){
        sum1 += A[i];
    }
    cout<<"Sum is: "<<sum1<<endl;

    // using for each loop

    for(auto x:A){
        sum2+=x;
    }
    cout<<"Sum is= "<<sum2;
    
    return 0;
}