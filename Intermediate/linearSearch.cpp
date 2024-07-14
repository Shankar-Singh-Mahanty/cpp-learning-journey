#include<iostream>

using namespace std;

int main(){
    int A[10];
    int i, n=10, key;

    for(i=0; i<n; i++){
        cout<<"A["<<i<<"]= ";
        cin>>A[i];
    }
    cout<<"Enter Key: ";
    cin>>key;

    // logic
    for(i=0; i<n; i++){
        if(key==A[i]){
            cout<<"Found at: "<<i;
            return 0;   // will make the program terminate after found.
        }
    }   // Don't write else inside for loop as not found is written only after all element is visited.
    cout<<"Not found";

    return 0;
}