#include<iostream>
using namespace std;

class Rectangle{
private:
    int length;
    int breadth;
public:
    // constructors
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);

    // mutators
    void setLength(int l);
    void setBreadth(int b);

    // accessors
    int getLength(){return length;}
    int getBreadth(){return breadth;}

    // Facilitator functions
    int area();
    int perimeter();

    // enquiry
    bool isSquare();

    // destructor
    ~Rectangle();
};

int main(){
    Rectangle r(10,10);
    cout<<"Area is: "<<r.area()<<endl;
    cout<<"Perimeter is: "<<r.perimeter()<<endl;
    cout<<"Length is= "<<r.getLength()<<endl;
    cout<<"Breadth is= "<<r.getBreadth()<<endl;

    if(r.isSquare()){
        cout<<"Yes"<<endl;
    }

    return 0;
}


Rectangle::Rectangle(){
    length = 1;
    breadth = 1;
}
Rectangle::Rectangle(int l, int b){
    setLength(l);
    setBreadth(b);
}
Rectangle::Rectangle(Rectangle &r){
    length = r.length;
    breadth = r.breadth;
}
void Rectangle::setLength(int l){
    if(l >= 0 ){
        length = l;
    }
    else {
        cout<<"Length can not be -ve so setting it to zero (default)"<<endl;
        length = 0; 
    }
}
void Rectangle::setBreadth(int b){
    if(b >= 0 ){
        breadth = b;
    }
    else {
        cout<<"Breadth can not be -ve so setting it to zero (default)"<<endl;
        breadth = 0;
    }
}
int Rectangle::area(){
    return length * breadth;
}
int Rectangle::perimeter(){
    return 2 * (length + breadth);
}
bool Rectangle::isSquare(){
    return length == breadth;
}
Rectangle::~Rectangle(){
    cout<<"Rectangle Destroyed !"<<endl;
}
