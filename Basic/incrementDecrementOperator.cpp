#include<iostream>

using namespace std;

int main(){
    int x = 5;
    // post-increment
    cout<<x++;      // 5 printed first then incresed by one to become 6
    // pre-increment
    cout<<++x;      // 6 increased by one first to become 7 and then printed
    // post-decrement
    cout<<x--;      // 7 is printed first then decresed by one to become 6
    // pre-decrement
    cout<<--x;      // 6 decreased by one first to become 5 then printed

    return 0;
}