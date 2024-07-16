#include<iostream>
using namespace std;

int main(){
    int a[10][10], b[10][10], mul[10][10], r1, c1, r2, c2, i, j, k, sum;

    cout<<"Enter the rows and columns for first matrix: ";
    cin>>r1>>c1;

    cout<<"Enter the rows and columns for second matrix: ";
    cin>>r2>>c2;

    while(c1!=r2){
        cout<<"Error! Column of first matrix is not equal to with Row of second matrix."<<endl;
        cout<<"Please re-enter: -"<<endl;
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

    cout<<"First matrix is: "<<endl;
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Taking input for 2nd matrix"<<endl;
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++){
            cout<<"b["<<i<<"]["<<j<<"] = ";
            cin>>b[i][j];
        }
    }

    cout<<"Second matrix is: "<<endl;
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Performing matrix multiplication...."<<endl;
    for(i=0; i<r1; i++){    // outer loop is for row
        for(j=0; j<c2; j++){    // inner loop is for column
            sum = 0;    // it is neccessary to be intialized with zero after every sum
            for(k=0; k<c1; k++){    // can also write k<r2;
                sum += a[i][k] * b[k][j];
                mul[i][j] = sum;
            }
        }
    }

    cout<<"Multiplied matrix is:-"<<endl;
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}