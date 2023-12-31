#include<iostream>

using namespace std;

class Complex

{private:  int a,b;  public:

  Complex()

 {

 a=b=0;

}

Complex(int f,int g)

                                {

 a=f; b=g;

 }

 Complex operator-(Complex x)

  {

   Complex c;

  c.a=a-x.a;

  c.b=b-x.b;

  return c;

 }

 void display()

 {

  cout<<"Result: "<<a<<"+"<<"("<<b<<"i"<<")";  }

               

};

int main()

{Complex x(9,3),y(4,5),z;
z=x-y;
   z.display();
     return 0;

}

 