#include<iostream>

using namespace std;

int main(){
    // Declaration and Initialisation
    int A[5]={2,4,6,8,10};  // by default indexing starts from 0
    int B[5]={5,7};     // rest 3 element will be initilised with 0
    int C[]={1,3,5,7,9};    // size of the array is equal to number of elements in list

    // Index is used to acces an array element
    cout<<A[3]<<endl;
    cout<<B[1]<<endl;
    cout<<B[4]<<endl;
    cout<<C[4]<<endl;     // cout<<c[5];   -> c is undefined -> case sensitive
    cout<<A[5]<<endl;       // Undefined behaviour or garabage value
    cout<<C[7]<<endl;       // Undefined behaviour or garabage value

    return 0;
}