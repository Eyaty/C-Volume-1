#include<iostream>
#define N 3
using namespace std;
class Distance
{
    private:
    int km,m;
    public:
    Distance()
    {
        km=m=0;
    }
    Distance(int k,int mt)
    {
        km=k; m=mt;
    }
void read()
{
    cout<<"Enter the distance in km and m: ";
    cin>>km>>m;
}
void display()
{
    cout<<"The average is: "<<km<<"km "<<m<<"m"<<endl;
}

Distance sum(Distance d)
{Distance t;
t.km=km+d.km;
t.m=m+d.m;
t.km=t.km+t.m/1000;
t.m=t.m%1000;
return t;
}

};
int main()
{
    Distance d[N],a(0,0);
    for(int i=0;i<N;i++)
    {
        d[i].read();
    }
    for(int i=0;i<N;i++)
    {
       a=a.sum(d[i]);
    }
    a.display();
    return 0;
}