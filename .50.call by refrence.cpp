#include<iostream>
using namespace std;
void op(int a,int b,int *c,int *d,int *e)
{
	*c=a+b;
	*d=a-b;
	*e=a*b;
}
int main()
{
	int a,b,c,d,e;
	a=10;
	b=20;
	op(a,b,&c,&d,&e);
	cout<<c<<endl;
	cout<<d<<endl;
	cout<<e<<endl;
	return 0;
}

