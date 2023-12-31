#include<iostream>
using namespace std;
float intrest(float p,float t,float r=6.5)//r=6.5 when we pass intrest(p=1900.0,t=2.3)//
{
    float I;
    I=(p*t*r)/100;
    return I;
}
int main()
{
    float p,t,r;

    cout<<"Interest is: "<<intrest(p=1900.0,t=2.3,r=3.5);
    cout<<"\nInterest is: "<<intrest(p=1900.0,t=2.3);
    return 0;
}

