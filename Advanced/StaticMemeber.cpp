#include<iostream>
using namespace std;

class Test
{
public:
    int a;
    static int count;

    Test(){
        a = 10;
        count++;
    }
    static int getCount(){
        // a++;     // A non static memer is not accesible inside static function
        return count;
    }


};
int Test::count = 0;

int main(){
    Test t1, t2;
    cout<<t1.count<<endl;
    cout<<t2.count<<endl;
    t1.count = 25;      // changine t1's count
    cout<<t2.count<<endl;   // displaying t2's count
    cout<<Test::count<<endl;    // accesing using class name

    cout<<Test::getCount()<<endl;
    cout<<t1.getCount();

    return 0;
}