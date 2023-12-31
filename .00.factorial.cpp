#include<iostream>
using namespace std;
int main()
{
    int n,f=1,i;
    cout<<"Enter a number:";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        f=f*i;
    }
    cout<<n<<"! = "<<f;
    return 0;
}