/*
If the number of factors of a number is equivalent to 
two (i.e. 1 and itself) then it is called a prime number.
*/

#include<iostream>

int main(){
    int n, count=0;
    std::cout<<"Enter a number: ";
    std::cin>>n;

    for(int i=1; i<=n; i++){
        if(n%i==0){
            count++;
        }
    }
    if(count == 2){
        std::cout<<"Prime number.";
    } else{
        std::cout<<"Not a prime number.";
    }
    return 0;
}