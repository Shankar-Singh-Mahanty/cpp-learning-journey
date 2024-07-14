#include<iostream>

using namespace std;

int main(){
    int A[100], sum=0, n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"A["<<i<<"]= ";
        cin>>A[i];
        sum += A[i];
    }
    
    float average = sum/n;
    
    cout<<"Average of array is: "<<average;

    return 0;
}