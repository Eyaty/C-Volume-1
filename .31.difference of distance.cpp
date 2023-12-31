#include<iostream>
using namespace std;
class Distance
{
    private:
    int feet,inch;
    public:
    Distance()
    {
        feet=inch=0;
    }
    Distance(int f,int i)
    {
        feet=f; inch=i;
    }
    void data()
    {
        cout<<"Enter distance in feet and inch: ";
        cin>>feet>>inch;
    }
    
   
    void display()
    {
        cout<<"Difference of distances= "<<feet<<" feet "<<inch<<" inch"<<endl;
    }
    friend Distance operator-(Distance d1,Distance d2);
};
 Distance operator-(Distance d1,Distance d2)
    {
        Distance t;
        int a,b,d;
        a=d1.inch+d1.feet*12;
        b=d2.inch+d2.feet*12;
        d=a-b;
        t.feet=d/12;
        t.inch=d%12;
        return t;
    }
int main()
{
    Distance d0,d1,D;
    d0.data();
    d1.data();
    D=d0-d1;;
D.display();
return 0;
    
}