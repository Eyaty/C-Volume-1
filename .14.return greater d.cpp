//return greater number using class
#include<iostream>
using namespace std;
class Distance
{
    private:
    int kilo,meter;
    public:
    Distance()
    {
        kilo=meter=0;
    }
    void read()
    {
    cout<<"Enter distace: ";
    cin>>kilo>>meter;
    }
    Distance(int k,int m)
    {
        kilo=k;
        meter=m;
    }
    int operator<(Distance d1)
{
    int s1,s2;
    s1=d1.kilo+(d1.meter*1000);
    s2=kilo+(meter*1000);
    if(s2<s1) return 1;
    else return 0;
}
    void display()
    {
        cout<<kilo<<"km "<<meter<<"m"<<endl;
    }
};

int main()
{
    Distance d1,d2;
    d1.read();
    d2.read();
    cout<<"Greatest is: ";
    if(d1<d2==1)
    d2.display();
    else  
    d1.display();
return 0;

}