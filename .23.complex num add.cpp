#include<iostream>
using namespace  std;
class complex
{
private:
int img,real;
public:
complex()
{
    real=img=0;
}
complex(int r,int i)
{
    real=r;
    img=i;
}
void display()
{
    cout<<real<<" + ("<<img<<"i)";
}
complex add(complex c)
{
    complex t;
    t.real=c.real+real;
    t.img=c.img+img;
    return t;
}
};
int main()
{
complex c1(2,3),c2(4,1),c3;
c3=c1.add(c2);
c3.display();
return 0;
}