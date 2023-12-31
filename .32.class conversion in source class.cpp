#include<iostream>
#include<cmath>
using namespace std;
class rectangle
{
    double xco,yco;
    public:
    rectangle(double x,double y)
    {
        xco=x;
        yco=y;
    }
    rectangle()
    {
        xco=0;
        yco=0;
    }
    void display()
    {
        cout<<"("<<xco<<","<<yco<<")";
    }
};
class polar
{
    double rad,ang;
    public:
    polar()
{
    rad=ang=0.0;
}
polar(double r,double a)
    {
        rad=r;
        ang=a;
    }
void display()
    {
        cout<<"("<<rad<<","<<ang<<")";
    }
operator rectangle()
{
    double x,y;
    x=rad*cos(ang);
    y=rad*sin(ang);
    return rectangle(x,y);
}
};
int main()
{
    rectangle r;
    polar p(70.0,0.785398);
    r=p;
    cout<<endl<<"The polar co-ordinate is: ";
    p.display();
    cout<<endl<<"The rectangular co-ordinate is: ";
    r.display();
    return 0;

}