#include<iostream>
#include<string.h>
using namespace std;
class strings
{
    private:
    int len;
    char *nam;//pointer
    public:
    strings()//default constructor
    {
        len=0;
        nam=new char[len+1];
    }
    strings(char *n)//assignment constructor
    {
        len=strlen(n);
        nam=new char[len+1];
        strcpy(nam,n);
    }
     void read()
{
    cout<<"Enter a string:" ;
cin>>nam;
len=strlen(nam);
}
  
    void join(strings s1,strings s2)
{
len=s1.len+s2.len;//calls assignment const.
nam=new char[len+1];
strcpy(nam,s1.nam);//s1 goes to assigned location
strcat(nam," and ");
strcat(nam,s2.nam);
}
 
void display()
{
    cout<<"Name: "<<nam<<endl;
    cout<<"length= "<<len<<endl;
}

};
int main()
{
    strings s1,s2,s3;
    s1.read();
    s2.read();
    s3.join(s1,s2);
    s3.display();
    return 0;
}