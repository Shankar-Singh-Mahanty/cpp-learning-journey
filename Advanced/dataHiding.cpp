#include<iostream>
using namespace std;

class Rectangle{
private:
    int length;
    int breadth;
public:
    void setLength(int l){
        if(l >= 0 ){
            length = l;
        }
        else {
            cout<<"Length can not be -ve so setting it to zero (default)"<<endl;
            length = 0; 
        }
    }
    void setBreadth(int b){
        if(b >= 0 ){
            breadth = b;
        }
        else {
            cout<<"Breadth can not be -ve so setting it to zero (default)"<<endl;
            breadth = 0;
        }
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    int area(){
        return length * breadth;
    }
    int perimeter(){
        return 2 * (length + breadth);
    }
};

int main(){
    Rectangle r;

    r.setLength(10);
    r.setBreadth(-5);

    cout<<"Area is: "<<r.area()<<endl;
    cout<<"Perimeter is: "<<r.perimeter()<<endl;
    cout<<"Length is= "<<r.getLength()<<endl;
    cout<<"Breadth is= "<<r.getBreadth()<<endl;

    return 0;
}

/*
Property Function
--------------------
Accessor :   getXXXX
Mutator  :   setXXXX


Acessor and Mutator togetherly called as propert function and 
here the function is both readwritable.
*/