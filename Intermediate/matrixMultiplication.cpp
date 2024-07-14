#include<iostream>
using namespace std;

int main(){
    int a[10][10], b[10][10], mul[10][10], r1, c1, r2, c2, i, j, k;

    cout<<"Enter the rows and columns for first matrix: ";
    cin>>r1>>c1;

    cout<<"Enter the rows and columns for second matrix: ";
    cin>>r2>>c2;

    while(c1!=r2){
        cout<<"Error! Column of first matrix is not equal to with Row of second matrix"<<endl;

        cout<<"Enter the rows and columns for first matrix: ";
        cin>>r1>>c1;

        cout<<"Enter the rows and columns for second matrix: ";
        cin>>r2>>c2;
    }

    cout<<"Taking input for 1st matrix"<<endl;
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            cout<<"a["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
        }
    }

    cout<<"Taking input for 2nd matrix"<<endl;
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++){
            cout<<"a["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
        }
    }
    cout<<"Performing multiplication...."<<endl;
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            mul[i][j]=0;
            for(k=0; k<c1; k++){
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout<<"Multiplied matrix is:-"<<endl;
    for(auto& x:mul){
        for(auto& y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}