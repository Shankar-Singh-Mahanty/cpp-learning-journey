#include<iostream>

using namespace std;

int main(){
    int n;
    std::cout<<"Enter a number: ";
    std::cin>>n;

    for(int i=1; i<=10; i++){
        std::cout<<n<<" X "<<i<<" = "<<n*i<<std::endl;
    }
    return  0;
}