#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n=0,i,c=0,j;
    cout<<"Enter the first number: ";
cin>>n1;
cout<<"Enter the second number: ";
cin>>n2;
 cout<<"Prime numbers between "<<n1<<" and "<<n2<<" are:";
    for(i=n1;i<n2;i++)
    {
    for(j=2;j<i;j++)
    { 
        if(i%j==0)
           
            break;
    }
    if(i==j)
        {
           cout<<" "<<i<<"";
            
        }

    
    }
}