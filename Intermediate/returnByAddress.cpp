#include<iostream>
using namespace std;


int * fun(){
    int *p = new int[5];
    for(int i=0; i<5; i++){
        p[i] = 5*i;
    }
    cout<<p<<endl;

    return p;
}
int main(){
    int *q = fun();

    cout<<q<<endl;

    for(int i=0; i<5; i++){
        cout<<q[i]<<endl;
    }

    return 0;
}

/*
Both p's and q's address are same becoz of new keyword memory is created in heap
and it is globally acessible and return of fun is stored in q which is p's address.
*/