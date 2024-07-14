#include<iostream>

using namespace std;

int main(){
    int A[10];
    int i, n=10, key;
    // Disclamair
    cout<<"Enter the elements in ascending order."<<endl;
    // Taking input
    for(i=0; i<n; i++){
        cout<<"A["<<i<<"]= ";
        cin>>A[i];
    }
    cout<<"Input Array is: A[]"<<endl;
    // Displaying the array
    for(auto x:A){
        cout<<x<< " ,";
    }
    cout<<endl<<"Enter Key: ";
    cin>>key;

    // Logic
    int mid, l=0, h=9;
    while(l<=h){
        mid = (l+h)/2;
        
        if(key==A[mid]){
            cout<<"Found at: "<<mid;
            return 0;
        }
        else if(key<A[mid]){
            h = mid-1;
        } else{
            l = mid+1;
        }
    }
    cout<<"Not found";

    return 0;
}