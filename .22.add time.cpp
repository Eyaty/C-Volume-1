#include<iostream>
using namespace std;
class AddT
{
    private:
    int hr,min,sec;
    public:
    AddT()
    {
        hr=min=sec=0;
    }
    AddT(int h,int m,int s)
    {
        hr=h;
        min=m;
        sec=s;
    }
    AddT sum(AddT T)
    {
        AddT t;
        t.hr=hr+T.hr;
        t.min=min+T.min;
        t.sec=sec+T.sec;
        while(t.min>=60)
        {
            t.hr=t.hr+1;
            t.min=t.min-60;
        }

        while(t.sec>=60)
        {
            t.sec=t.sec-60;
            t.min=t.min+1;
        }
        return t;
    }
    void display()
    {
        cout<<"Sum of time= "<<hr<<":"<<min<<":"<<sec;
    }
};
int main()
{
    AddT t1(1,40,50),t2(2,40,50),t3(0,0,0);
    t3=t1.sum(t2);
    t3.display();
return 0;
    
}