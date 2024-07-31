#include<iostream>
using namespace std;

//1 write a Min() function here to Min of 2 integers
int Min(int x, int y){
    return x < y ? x : y;
}
//2 write a Min() function here to Min of 3 integers
int Min(int x, int y, int z){
    if(x<y && x<z){
        return x;
    }
    else if(y<z){
        return y;
    }
    else{
        return z;
    }
}
//3 write a Min() function here to Min of 2 floats
float Min(float x, float y){
    return x < y ? x : y;
}

int main()
{
    cout<<Min(10,5)<<endl;
    cout<<Min(12,7,9)<<endl;
    cout<<Min(18.0f,9.0f)<<endl;

    return 0;
}
