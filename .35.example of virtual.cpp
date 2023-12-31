#include<iostream>
using namespace std;
class Base
{public:
virtual void show()
{
    cout<<"Base"<<endl;
}
};
class Derived: public Base
{public: 
 void show()
{
    cout<<"Derived"<<endl;
}
};
int main()
{
    Base *p;
    Base b;
    p=&b;
    p->show();
     Derived d;
    p=&d;
    p->show();
    return 0;
}