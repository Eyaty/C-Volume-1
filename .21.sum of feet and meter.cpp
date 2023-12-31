//Adding distance in meter and in feet using class
#include<iostream>
using namespace std;
class DB;
class DM
{
       public:
       int meter,centi;
DM()
{ meter=centi=0;}
DM(int m,int c)
{
    meter=m;
    centi=c;
}
void readDM()
{
    cout<<"Enter distance in meter and centimeter: ";
    cin>>meter>>centi;
}
void display()
{
    cout<<meter<<" mtr "<<centi<<" cm";
}
friend DM add(DB b,DM m);
};
class DB
{   public:
    int feet,inch;
    DB()
    {
        feet=inch=0;
    }
    DB(int f,int i)
    {
        feet=f;
        inch=i;
    }
void readDB()
{
    cout<<"Enter distance in feet and inch: ";
    cin>>feet>>inch;
}
friend DM add(DB b,DM m);
};
 DM add(DB b,DM m)
 {
DM s;
int cm1,cm2,sum;
cm2=m.meter*100+m.centi;
cm1=b.feet*30.48+b.inch*2.54;
sum=cm1+cm2;
s.meter=sum/100;
s.centi=sum%100;
 return s;
 }
 int main()
 {
    DB b1;
    DM m1,total;
    b1.readDB();
    m1.readDM();
    total=add(b1,m1);
   total.display();
    return 0;
 }