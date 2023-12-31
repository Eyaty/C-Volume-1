#include<iostream>
using namespace std;
template<class T>
class Stack
{
    T Stk[5];
    int top;
    public:
    Stack()
    {
        top=-1;
    }
    void push(T el)
    {
        if(top==4)
        cout<<"Stack is full"<<endl;
        else Stk[++top]=el;
    }
    T pop()
    {
        if(top==-1)
cout<<"Stack empty"<<endl;
else 
return Stk[top--];
    }
    void print()
    {
        for(int i=top;i>=0;i--)
        {
            cout<<Stk[i]<<endl;
        }
    }
};
int main()
{
    Stack <int>s1;
    s1.push(3);
    s1.push(2);
    s1.push(5);
    s1.push(1);
    cout<<"Poped element: "<<s1.pop()<<endl;
    s1.print();
    Stack <char>s2;
    s2.push('S');
    s2.push('o');
    s2.push('R');
    cout<<"Poped: "<<s2.pop()<<endl;
    s2.print();
    return 0;
    }