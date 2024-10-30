#include<iostream>
#include<cmath>
using namespace std;

class Shape{
public:
    virtual int area() = 0;
    virtual int perimeter() = 0;
};

class Rectangle : public Shape{
private:
    int length;
    int breadth;
public:
    // Constructor to initialize length and breadth
    Rectangle(int l, int b){
        length = l;
        breadth = b;
    }
    int area(){
        return length * breadth;
    }
    int perimeter(){
        return 2 * (length + breadth);
    }
};

class Circle : public Shape{
private:
    int radius;
public:
    // Constructor to initialize radius
    Circle(int r){
        radius = r;
    }
    int area(){
        return M_PI * radius * radius;
    }
    int perimeter(){
        return 2 * M_PI * radius;
    }
};

int main(){
    Shape *s = new Rectangle(10, 5);
    cout<<"Rectangle area: "<<s->area()<<endl;
    cout<<"Rectangle perimeter: "<<s->perimeter()<<endl;

    s = new Circle(7);
    cout<<"Circle area: "<<s->area()<<endl;
    cout<<"Circle circumference: "<<s->perimeter()<<endl;

    return 0;
}