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
void avg(Distance d[N])
{int ks=0,ms=0;
for(int i=0;i<N;i++)
{
    ks=ks+(d[i].km)*1000+d[i].m;

}
km=(ks/N)/1000;
m=(ks/N)%1000;}
};
int main()
{
    Distance d[N],a;
    for(int i=0;i<N;i++)
    {
        d[i].read();
    }
    a.avg(d);
    a.display();
    return 0;
}