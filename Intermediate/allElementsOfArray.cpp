#include<iostream>

using namespace std;

int main(){
    int A[] = {1,3,5,7};    // size of array is equal to number of elements
    int B[7] = {2,4,6,8};   //  rest values are initilised with zero

    // using for loop
    for(int i=0; i<4; i++){
        cout<<A[i]<<endl;
    }
    cout<<"======"<<endl;
    // using for each loop
    for(int x:B){
        cout<<x<<endl;
    }
    return 0;
}