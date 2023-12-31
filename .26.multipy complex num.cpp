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
    Img operator*(Img i)
    {
        Img e;
        e.a=i.a*a-i.b*b;
        e.b=i.a*b+i.b*a;
        return e;
    }
    void display()
    {
        cout<<"Product= "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main()
{Img x(3,2);
Img y(2,2);
Img z;
z=x*y;
z.display();
return 0;


}