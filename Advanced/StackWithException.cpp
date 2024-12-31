#include<iostream>
using namespace std;

class StackOverFlow : exception{};
class StackUnderFlow : exception{};

class Stack
{
private:
    int *stk;
    int top = -1;
    int size;
public:
    Stack(int sz)
    {
        size = sz;
        stk = new int[size];
    }
    void push(int x) throw(StackOverFlow)
    {
        if(top == size-1)
        {
            throw StackOverFlow();
        }
        top++;
        stk[top] = x;
    }
    int pop() throw(StackUnderFlow)
    {
        if(top == -1)
        {
            throw StackUnderFlow();
        }
        return stk[top--];
    }
};

int main()
{
    Stack s(5);

    try
    {
        s.push(2);
        s.push(4);
        s.push(6);
        s.push(8);
        s.push(10);

        s.pop();

        s.push(12);
        s.push(14);
    }
    catch(StackOverFlow e)
    {
        cout<<"StackOverFlow"<<endl;
    }
    catch(StackUnderFlow e)
    {
        cout<<"StackUnderFlow"<<endl;
    }

    return 0;
}