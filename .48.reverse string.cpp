#include<iostream>
#include<string.h>
using namespace std;
void rev(char st[100])
{
    int i,j;
    int l;
    char t;
    l=strlen(st);
     j=l-1;
    cout<<l<<endl;
    for(i=0;i<l/2;i++)
    {
        t=st[j];
        st[j]=st[i];
        st[i]=t;
        j--;
    }

    st[l]='\0';
   puts(st);
   cout<<st<<endl;
}
int main()
{
    char st[100];
    cout<<"Enter a string: ";
   cin>>st;
    rev(st);
    return 0;
}