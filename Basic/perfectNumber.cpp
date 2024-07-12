/*
If the sum of factors of a number is equivalent to 
the double value of that number then it is called as a perfect number.
e.g.    n=6
        1+2+3+6 = 12
        2*6 = 12
therefore 6 is a perfect number.
*/

#include<iostream>

int main(){
    int n, sum=0;
    std::cout<<"Enter a number: ";
    std::cin>>n;

    for(int i=1; i<=n; i++){
        if(n%i==0){
            sum += i;
        }
    }
    if(2*n == sum){
        std::cout<<"Perfect number.";
    } else{
        std::cout<<"Not a perfect number.";
    }
    return 0;
}