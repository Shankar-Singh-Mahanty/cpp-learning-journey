#include<iostream>

using namespace std;

typedef float salary;
typedef float percentage;

int main(){
    salary basic, net;
    percentage allowance, deduction;

    cout<<"Enter your basic salary: ";
    cin>>basic;
    cout<<"Enter the percentage of allowance: ";
    cin>>allowance;
    cout<<"Enter the percentage of deduction: ";
    cin>>deduction;

    net = basic + basic * allowance/100 - basic * deduction/100;

    cout<<"Net salary of the person is: "<<net;

    return 0;
}