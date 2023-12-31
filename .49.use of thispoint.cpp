#include<iostream>
#include<string.h>
using namespace std;
class Plant
{
    int lifespan;
    char *name;
    public:
    Plant()
    {
        lifespan=0;
        name=new char[1];

    }
    Plant(int l,char *n)
    {
        lifespan=l;
        name=new char[strlen(n)+1];
        strcpy(name,n);
    }
    Plant duration(Plant p)
    {
        if(this->lifespan>p.lifespan)
        {
            return *this;
        }
        else return p;
    }
    void display()
    {
        cout<<name<<" lifespan of "<<lifespan<<" years is greater."<<endl;
    }};
    int main()
    {
        Plant p1(60,"Persimmon");
        Plant p2(40,"Guava");
        Plant p;
        p=p1.duration(p2);
        p.display();
        return 0;
    }
