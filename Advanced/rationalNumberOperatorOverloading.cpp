#include<iostream>
using namespace std;

class Rational{
    private:
    int p;
    int q;
    public:
    Rational(int p=1, int q=1){
        this->p = p;
        this->q = q;
    }
    friend Rational operator+(Rational r1, Rational r2);
    friend ostream & operator<<(ostream &os, Rational r);
};

int main(){
    Rational r1(3,4), r2(2,5);
    Rational r3;

    r3 = r1 + r2;
    cout<<"Sum of "<<r1<<" and "<<r2<<" is "<<r3<<endl;

    return 0;
}

Rational operator+(Rational r1, Rational r2){
    Rational temp;
    temp.p = r1.p*r2.q + r2.p*r1.q;
    temp.q = r1.q * r2.q;
    return temp;
}
ostream & operator<<(ostream &os, Rational r){
    os<<r.p<<"/"<<r.q;
    return os;
}

/*
in insertion overloading we can also write the signature with no return type
that is with void and no return statement and it will show no error
then what's the difference ?
in main function cout<< we can not use multiple insertion operator
simply cout<<c3; or else writing more will gives error with void as return type.
that why we must write the ostream reference return type to let cout behave
as usal with user defined data types as it behaves with the primitice ones.
*/