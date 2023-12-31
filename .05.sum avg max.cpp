#include<iostream>
using namespace std;
void sum(int x,int y,int z)
{
    int sum;
    sum=x+y+z;
    cout<<x<<" + "<<y<<"+ "<<z<<" = "<<sum<<endl;
}
void avg(int i,int j,int k)
{
    int avg;
    avg=(i+j+k)/3;
    cout<<"Average of "<<i<<","<<j<<","<<k<<" = "<<avg<<endl;
}
void largest(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
        cout<<a<<" is largest"<<endl;
        else
        cout<<c<<" is largest"<<endl;
    }
    else 
    {if(b>c)
    cout<<b<<" is largest"<<endl;
    else 
    cout<<c<<" is largest"<<endl;
    }
}
void smallest(int a,int b,int c)
{
    if(a<b&&a<c)
    {
        cout<<a<<" is smallest"<<endl;
    }
        else if(c<a&&c<b)
        {
        cout<<c<<" is smallest"<<endl;
    }
    else
    cout<<b<<" is smallest"<<endl;
    }
int main()
{
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    sum(a,b,c);
avg(a,b,c);
largest(a,b,c);
smallest(a,b,c);
return 0;
}