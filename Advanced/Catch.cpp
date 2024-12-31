#include<iostream>
using namespace std;

class MyException
{

};
class MyException2 : MyException
{

};

int main()
{
    try
    {
        // throw 'S';
        // throw "shan";
        // throw 1.5f;
        throw MyException2();
    }
    catch(int e)
    {
        cout<<"Int catch"<<endl;
    }
    catch(double e)
    {
        cout<<"Double catch"<<endl;
    }
    catch(char e)
    {
        cout<<"Character catch"<<endl;
    }

    catch(MyException2 e)   // child must written first
    {
        cout<<"MyException child catch"<<endl;
    }
    catch(MyException e)
    {
        cout<<"MyException catch"<<endl;
    }

    catch(...)  // catch all block must be at the end
    {
        cout<<"All catch"<<endl;
    }

    // catch(int e)
    // {
    //     cout<<"Int catch"<<endl;
    // }
    return 0;
}