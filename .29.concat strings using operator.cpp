#include<iostream>
#include<string.h>
using namespace std;
class Join
{
  public:
    char message[30];
    void read()
    {
        cout<<"Enter a string: ";
        cin>>message;
    }
    void display()
    {
        cout<<message<<endl;
    }
    friend void operator+(Join m1,Join m2);
};
void operator+(Join m1,Join m2)
{char n[30],m[30];
    strcpy(n,m1.message);
    strcat(n," ");
    strcpy(m,m2.message);
    strcat(n,m);
cout<<n<<endl;
}
int main()
{
    Join m1;
    Join m2;
    m1.read();
    m2.read();
    Join m3;
    m1+m2;
    return 0;
}