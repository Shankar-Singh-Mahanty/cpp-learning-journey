#include<iostream>

using namespace std;

int main(){
    int A[2][3] = {{2,5,9}, {6,9,15}};

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}