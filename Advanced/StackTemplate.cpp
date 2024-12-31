#include<iostream>
using namespace std;

template<class T>
class Stack
{
private:
    T *stk;
    int top;
    int size;
public:
    Stack(int sz)
    {
        size = sz;
        top = -1;
        stk = new T[size];
    }
    void push(T x);
    T pop();
};

template<class T>
void Stack<T>::push(T x)
{
    if(top == size-1)
    {
        cout<<"StackOverFlow"<<endl;
    }
    else{
        top++;
        stk[top] = x;
    }
}

template<class T>
T Stack<T>::pop()
{
    T x = 0;
    if(top == -1)
    {
        cout<<"StackUnderFlow"<<endl;
    }
    else
    {
        x = stk[top];
        top--;
    }
    return x;
}

int main()
{
    Stack<float> s(5);

    s.push(2.5f);
    s.push(4.9f);
    s.push(6);
    s.push(8.3f);
    s.push(10.1f);

    s.pop();

    s.push(12.6f);
    s.push(14.7);
    
    return 0;
}