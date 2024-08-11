#include<iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int breadth;

    int area(){
        return length * breadth;
    }
    int perimeter(){
        return 2 * (length + breadth);
    }
};

int main(){
    Rectangle r;
    Rectangle *ptr;
    ptr = &r;
    ptr -> length = 15;
    ptr -> breadth = 10;

    cout<<"Area is: "<<ptr->area()<<endl;
    cout<<"Perimeter is: "<<ptr->perimeter()<<endl;

    return 0;
}