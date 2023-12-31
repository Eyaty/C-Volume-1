#include<iostream>
using namespace std;
template<class S>
void sort(S arr[],int n=10)
{ S tem;
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                tem=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=tem;
            }
        }
    } cout<<"After sorting: ";
    for(i=0;i<10;i++)
    {
       cout<<arr[i]<<" ";
    }
}
int main()
{
int a[]={2,3,4,2,4,5,8,9,1,0};
sort(a);

    return 0;
}
