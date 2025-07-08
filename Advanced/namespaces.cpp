#include<iostream>
using namespace std;

namespace first
{
    void fun()
    {
        cout<<"Hello from first "<<endl;
    }
}
namespace second
{
    void fun()
    {
        cout<<"Hello from second "<<endl;
    }
}

using namespace first;
int main()
{
    // Calling the function from the first namespace
    fun(); // This will call first::fun() due to the using directive

    // To call the function from the second namespace, we need to specify it explicitly
    second::fun(); // This will call second::fun()

    return 0;
}