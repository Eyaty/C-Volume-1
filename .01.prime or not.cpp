#include<iostream>
using namespace std;
int main()
{
    int n,i,c=0;
    cout<<"Enter a number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c=c+1;
    }
    if(c==2)
    cout<<n<<" is prime number";
    else 
    cout<<n<<" is composite"<<endl;
    return 0;
}