#include<iostream>
using namespace std;

int pow(int x, int y){
    int result = 1;
    for(int i=1; i<=y; i++){
        result *= x;
    }
    return result;
}

int main(){
    cout<<pow(2,5)<<endl;

    return 0;
}


/*
Wrong approch
int pow(int x, int y){
    for(int i=1; i<=y; i++){
        x *= x;
    }
    return x;
}
1. Incorrect Power Calculation:
    The current implementation multiplies x by itself in each iteration, 
    which is incorrect. You should multiply by the base value instead.
2. Initial Value for Power Calculation:
    You need to initialize a result variable to 1 and multiply it by x in each iteration.
*/