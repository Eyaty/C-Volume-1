//read empl;oyee using class
#include<iostream>
#include<string.h>
using namespace std;
class employee
{
public:
char *e;
int i,n;
int static r;
int static a;
employee()
{
    n=0;
    e=new char[n+1];
}
employee(char *s)
{n=strlen(s);
    e=new char[n+1];
}
void getData()
{

    cout<<"Enter the employee name "<<r<<":";
    cin.getline(e,30);
    r=r+1;
    fflush(stdin);
   
}
void putData()
{
cout<<a<<"."<<e<<endl;
a=a+1;
}

};
int employee::r;
int employee::a;
int main()
{int n,i;
    cout<<"Enter number of employee: ";
    cin>>n;
     fflush(stdin);
    employee a[n];
 for(i=0;i<n;i++)
    {
a[i].getData();
fflush(stdin);    
}
  cout<<"Name: "<<endl;  
for(i=0;i<n;i++)
    {
a[i].putData();  }    
return 0;
}