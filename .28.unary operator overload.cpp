#include<iostream>
using namespace std;
class Distance

{
    int meter;
int centi;
public:
    Distance(int m, int cm)
    {meter=m;
    centi=cm;
    }
    Distance()
    {
        meter=centi=0;
    }
    Distance operator++()
    {
        Distance d;
        d.centi=++centi;
        if(d.centi>=100)
        {
           d.meter=++meter;
            d.centi=d.centi-100;
        }
        return d;
    }
    void display()
    {
        cout<<meter<<"m "<<centi<<"cm"<<endl;
    }
};
int main()
{
    Distance d(10,99);
    Distance d1;
cout<<"Orginal distance: ";
d.display();
d1=++d;
cout<<"After operation distance changes to: ";
d1.display();
return 0;

}