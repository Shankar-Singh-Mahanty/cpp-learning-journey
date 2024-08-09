#include<iostream>
using namespace std;

int search(int A[], int n, int key){
    for(int i=0; i<n; i++){
        if(key == A[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int A[] = {2,4,6,8,10,12,14};
    int k, index;

    cout<<"Enter the key value: ";
    cin>>k;
    index = search(A, 7, k);
    cout<<"Element found at index: "<<index<<endl;

    return 0;
}