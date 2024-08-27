#include<iostream>
using namespace std;

class Rectangle{
private:
    int length;
    int breadth;
public:
    Rectangle(int length, int breadth){
        this->length = length;
        this->breadth = breadth;
    }
    int getLength(){return length;}
    int getBreadth(){return breadth;}

};

int main(){
    Rectangle r(10,5);
    cout<<r.getLength()<<endl;
    cout<<r.getBreadth()<<endl;

    return 0;
}