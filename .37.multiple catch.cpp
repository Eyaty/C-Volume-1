#include<iostream>
using namespace std;
int main()
{
    double n[]={1,2,4,12,14,10};
    double d[]={1,2,0,4};
    int i;
    for(i=0;i<6;i++)
    {
        try
        {
        if(i>3)
        throw(i);
        else if(d[i]==0)
        throw(d[i]);
        else cout<<n[i]<<"/"<<d[i]<<"="<<n[i]/d[i]<<endl;
    }
    catch(double exp1)
    {
        cout<<"No solution when divided by zero"<<endl;
    }
    catch(int exp2)
    {
        cout<<"No matcing element"<<endl;
    }
    }
    cout<<"End of program";
    return 0;
}