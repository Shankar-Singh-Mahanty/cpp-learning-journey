#include<iostream>

int main(){
    int num, i=1;
    std::cout<<"Enter a number: ";
    std::cin>>num;

    while (i<=10) // num <= 10 is wrong it will lead to infinite loop
    {
        std::cout<<i<<std::endl;    // endl is inside namespace std
        i++;
    }
    
    return 0;
}