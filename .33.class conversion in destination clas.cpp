#include<iostream>
#include<cmath>
using namespace std;

class Polar
{
private:
    double rad;
    double ang;
public:
    Polar()
{
    rad=ang=0.0;
}
Polar(double r,double a)
    {
        rad=r;
        ang=a;
    }
void display()
    {
        cout<<"("<<rad<<","<<ang<<")";
    }
double getr()
{
    return rad;
}
double geta()
{
    return ang;
}
};
class Rectangle
{
    double xco,yco;
    public:
    Rectangle(double x,double y)
    {
        xco=x;
        yco=y;
    }
    Rectangle()
    {
        xco=0.0;
        yco=0.0;
    }
    Rectangle (Polar p)
    {
        double a,r;
        r=p.getr();
        a=p.geta();
        xco=r*cos(a);
        yco=a*sin(a);
    }
    void display()
    {
        cout<<"("<<xco<<","<<yco<<")";
    }
};
int main()
{
    Rectangle r;
    Polar p(70.0,0.785398);
    r=p;//regtangle destination class
    cout<<endl<<"The polar co-ordinate is: ";
    p.display();
    cout<<endl<<"The rectangular co-ordinate is: ";
    r.display();
    return 0;

}