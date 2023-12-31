#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout("D:\\Funny\\Mynote.txt");
     
char str[30];
cout<<"Enter message: ";
while(true)
{
    cin.getline(str,30);
    if(strcmp(str,"zz")==0)
    break;
    fout<<str<<endl;
}
ifstream fin("D:\\Funny\\Mynote.txt");
cout<<"Message is: ";
while(fin.eof()==0)
{
    fin.getline(str,30);
     cout<<str;
}

 fout.close();
 fin.close();
return 0;
}