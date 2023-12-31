#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char st[20];
    ifstream fin("D:\\Funny\\Message.txt");
    while(fin.eof()==0)
    {fin.getline(st,20);
    }
  cout<<st;
    fin.close();
    return 0;
}
