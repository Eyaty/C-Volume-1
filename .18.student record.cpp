#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class Student
{
public:
char *st;
int i,l;
double marks;
int roll;
Student()
{
    l=0;
    st=new char[l+1];
}
Student(char *name,double m,int r)
{l=strlen(name);
marks=m;
roll=r;
    st=new char[l+1];
    strcpy(st,name);
}
void getData()
{

    cout<<"Enter the Student name "<<":";
    cin.getline(st,30);
    fflush(stdin);
    cout<<"Enter roll no. of student: ";
    cin>>roll;
    cout<<"Enter marks of student:";
    cin>>marks;
   
}
void putData()
{
cout<<st<<setw(15)<<roll<<setw(10)<<marks<<endl;

}

};
int main()
{int n,i;
    cout<<"Enter numbers of student: ";
    cin>>n;
     fflush(stdin);
    Student a[n];
 for(i=0;i<n;i++)
    {
a[i].getData();
Student a[i];
fflush(stdin);    
}
  cout<<"     Student Record "<<endl;  
cout<<"-----------------------------------------"<<endl;
    cout<<"Name"<<setw(16)<<"Roll no."<<setw(10)<<"Marks"<<endl;
for(i=0;i<n;i++)
{
    a[i].putData();
}   
return 0;
    }