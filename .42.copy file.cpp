#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
ifstream fin("D:\\Funny\\Message.txt");
ofstream fout("D:\\Funny\\Copy.txt");
char str[200];
while(fin.eof()==0)
{
    fin.getline(str,200);
    fout<<str<<endl;
}
cout<<"File copied";
fout.close();
fin.close();
return 0;
}