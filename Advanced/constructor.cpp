#include<iostream>
using namespace std;

class Rectangle{
private:
    int length;
    int breadth;
public:
    // non parameterised constructor
    Rectangle(){
        length = 1;
        breadth = 1;
    }
    // parameterised constructor
    Rectangle(int l, int b){
        setLength(l);
        setBreadth(b);
    }
    /*
    writing the above two in one : -

    Rectangle(int l=1, int b=1){
        setLength(l);
        setBreadth(b);
    }

    */
    // Deep copy constructor
    Rectangle(Rectangle &r){
        length = r.length;
        breadth = r.breadth;
    }

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
/*
    r.setLength(10);
    r.setBreadth(-5);
*/
    Rectangle r;
    cout<<"Area is: "<<r.area()<<endl;
    cout<<"Perimeter is: "<<r.perimeter()<<endl;
    cout<<"Length is= "<<r.getLength()<<endl;
    cout<<"Breadth is= "<<r.getBreadth()<<endl;
    cout<<"================="<<endl;

    Rectangle r1(10, 5);
    cout<<"Area is: "<<r1.area()<<endl;
    cout<<"Perimeter is: "<<r1.perimeter()<<endl;
    cout<<"Length is= "<<r1.getLength()<<endl;
    cout<<"Breadth is= "<<r1.getBreadth()<<endl;
    cout<<"================="<<endl;

    Rectangle r2(r1);
    cout<<"Area is: "<<r2.area()<<endl;
    cout<<"Perimeter is: "<<r2.perimeter()<<endl;
    cout<<"Length is= "<<r2.getLength()<<endl;
    cout<<"Breadth is= "<<r2.getBreadth()<<endl;
    cout<<"================="<<endl;
    
    return 0;
}