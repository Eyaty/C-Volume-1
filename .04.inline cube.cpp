#include<iostream>
using namespace std;
inline int cube(int l)
{
    return l*l*l;
}
int main()
{
cout<<"Cube= "<<cube(10)<<endl;
cout<<"Cube= "<<cube(8)<<endl;
cout<<"Cube= "<<cube(9)<<endl;
cout<<"Cube= "<<cube(3)<<endl;
cout<<"Cube= "<<cube(6)<<endl;
return 0;
}