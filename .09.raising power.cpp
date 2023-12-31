//Raising power of a number, if power to be raised is not given, default argument n=2 is used
#include<iostream>
#include<math.h>
using namespace std;
double power(double m,int n=2)
{
    double p;
    p=pow(m,n);
    return p;
}
int main()
{
  int n;
  double m;
  cout<<"Enter a number: ";
  cin>>m;
  cout<<"Enter power to be raised: ";
  cin>>n;
  cout<<power(m,n)<<endl;
  cout<<power(m);
  return 0;
}