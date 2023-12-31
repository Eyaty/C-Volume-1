#include<iostream>
#include<fstream>
using namespace std;
class record
{
char name[20];
int roll;
public:
void read()
{
    cout<<"Enter name of student: ";
    cin>>name;
    cout<<"Enter roll no. of student: ";
    cin>>roll;
}
void disp()
{
    cout<<"Name of student: "<<name<<endl;
    cout<<"Roll no. of student: "<<roll;
}
};
int main()
{
    ofstream fout("D:\\Funny\\obj.rec");
    record r;
    r.read();
    fout.write((char*)&r,sizeof(r));
    fout.close();
    ifstream fin("D:\\Funny\\obj.rec");
cout<<"RECORD: \n";
fin.read((char*)&r,sizeof(r));
r.disp();
fin.close();
return 0;
}