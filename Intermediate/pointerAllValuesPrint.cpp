#include<iostream>
using namespace std;

int main(){
    int A[]{2,4,6,8,10};
    int *p = A;

    cout<<"Displaying All Values With Different Approches"<<endl;
    for(int i=0; i<5; i++){
        cout<<A[i]<<endl;
    }
    cout<<"==="<<endl;
    for(int i=0; i<5; i++){
        cout<<i[A]<<endl;
    }
    cout<<"==="<<endl;
    for(int i=0; i<5; i++){
        cout<<*(A+i)<<endl;
    }
    cout<<"==="<<endl;
    for(int i=0; i<5; i++){
        cout<<p[i]<<endl;
    }
    cout<<"==="<<endl;
    for(int i=0; i<5; i++){
        cout<<*(p+i)<<endl;
    }
    cout<<"==="<<endl;

    cout<<"Displaying All the address"<<endl;
    for(int i=0; i<5; i++){
        cout<<A+i<<endl;
    }
    cout<<"======="<<endl;
    for(int i=0; i<5; i++){
        cout<<p+i<<endl;
    }

    cout<<"All Values another approch"<<endl;

    cout<<p<<endl;  // Base addresss of array
    for(int i=0; i<5; i++){
        cout<<*p<<endl;
        p++;
    }
    cout<<p<<endl;  // address after the array

    return 0;
}