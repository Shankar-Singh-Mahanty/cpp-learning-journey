#include<iostream>
using namespace std;

int main(){
    int A[]={2,4,6,8,10,12};
    int *p=A;
    int *q = &A[3];     // address of A[3] is assigned to pointer q
    int d;

    // Total only 5 operations are there
    cout<<*p<<endl;     // current position // print 2
    // 1st
    cout<<*p++;     // print 2  ;  p = 4
    // 2nd
    cout<<*p--;     // print 4  ;  p = 2
    // 3rd
    p = p + 2;      // p = 6
    cout<<*p;       // prints 6
    // 4th
    p = p - 2;      // p = 2
    cout<<*p;       // prints 2
    // 5th
    d = q - p;      // q = 8    ;   p = 2
    cout<<d;        // 3 element away from each other and +ve shows q is at far location and p is nearer

    return 0;
}