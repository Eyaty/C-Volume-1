#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char line;
    ofstream fout("D:\\Funny\\Message.txt");
cout<<"Enter a message: ";
    while(true)
    {
        cin.get(line);
        if(line=='\n')
        break;
        fout.put(line);
    }
    cout<<"File created";
    fout.close();
    return 0;
}
