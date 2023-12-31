#include<iostream>
using namespace std;
class Img
{
    private:
    int a,b;
    public:
    Img()
    {
        a=b=0;
    }
    Img(int c,int d)
    {
        a=c;
        b=d;
    }
    void display()
    {
        cout<<"Product= "<<a<<" + "<<b<<"i"<<endl;
    }
    friend Img operator*(Img i,Img j);
};
 Img operator*(Img i,Img j)
    {
        Img e;
        e.a=i.a*j.a-i.b*j.b;
        e.b=i.a*j.b+i.b*j.a;
        return e;
    }
int main()
{Img x(3,2);
Img y(2,2);
Img z;
z=x*y;
z.display();
return 0;


}