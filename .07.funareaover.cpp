#include<iostream>
#define PI 3.14
using namespace std;
void area(int x,int y)
{
    int A;
    A=(x*y)/2;
    cout<<"Area of triangle is: "<<A<<endl;
}
void area(double a)
{
    double A;
    A=PI*a*a;
    cout<<"Area of circle is: "<<A<<endl;
}
void area(double x,double y)
{
    double a;
    a=x*y;
 cout<<"Area of rectangle is: "<<a<<endl;
}
int main()
{
    int a,b;
    double r,l,h;
    cout<<"Enter base and height of triangle: ";
    cin>>a>>b;
    cout<<"Enter radius of circle: ";
    cin>>r;
    cout<<"Enter length and height of rectangle: ";
    cin>>l>>h;
    area(a,b);
    area(r);
    area(l,h);
    return 0;
}