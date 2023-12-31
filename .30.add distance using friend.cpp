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
    friend Distance operator +(Distance d1,Distance d2);
};
 Distance operator +(Distance d1,Distance d2)
    {
        Distance t;
        t.feet=d2.feet+d1.feet;
        t.inch=d2.inch+d1.inch;
        while(t.inch>=12)
        {
            t.inch=t.inch-12;
            t.feet=t.feet+1;
        }
       
        return t;
    }
int main()
{
    Distance d0,d1,D;
    d0.data();
    d1.data();
    D=d0+d1;;
D.display();
return 0;
    
}