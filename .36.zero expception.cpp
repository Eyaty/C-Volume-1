#include<iostream>
using namespace std;
int main()
{
    int a,b;
    float c;
    cout<<"Enter any two numbers: ";
    cin>>a>>b;
    try
    {if(b!=0)
    {
        c=(float)a/b;
        cout<<a<<"/"<<b<<" = "<<c;
           }
           else throw(b);
           }
           catch(int exp)
           {
            cout<<"No solution when divided by zero"<<endl;
           }
           return 0;
}